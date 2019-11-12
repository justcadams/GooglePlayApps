#include <fstream>
#include "Algorithms.h"
#include "Applications.h"
#include "SplayTree.h"
#include "AVLTree.h"
#include "BinarySearchTree.h"

int main() {
    /* Foo bar application data. */
    string name1 = "Janus";
    string name2 = "Frozen Color by Numbers";
    string name3 = "Metal Gear Solid 5000";
    string category1 = "GAME";
    string category2 = "GAME";
    string category3 = "GAME";
    float rating1 = 4.1;
    float rating2 = 4.7;
    float rating3 = 2.6;
    string reviews1 = "5819";
    string reviews2 = "167,234";
    string reviews3 = "2,305,013";
    string filesize1 = "100M";
    string filesize2 = "1G";
    string filesize3 = "64.1G";
    int installs1 = 12753240;
    int installs2 = 2485013;
    int installs3 = 147592;
    string type1 = "FREE";
    string type2 = "PAID";
    string type3 = "PAID";
    float price1 = 0.0;
    float price2 = 0.99;
    float price3 = 0.99;
    string mrating1 = "Everyone";
    string mrating2 = "Everyone";
    string mrating3 = "Mature 17+";
    string genre1 = "Game";
    string genre2 = "Puzzle";
    string genre3 = "Game";
    string lastupdated1 = "9/21/17";
    string lastupdated2 = "11/1/14";
    string lastupdated3 = "6/14/24";
    string softvers1 = "1.7.1";
    string softvers2 = "2.4.9";
    string softvers3 = "1.4.3";
    string androidvers1 = "4.0.3";
    string androidvers2 = "4.1.7";
    string androidvers3 = "4.2.1";
    /* Create foobar application 1. */
    Applications app1 = Applications(name1, category1, rating1, reviews1, filesize1, installs1, type1, price1, mrating1, genre1, lastupdated1, softvers1, androidvers1);
    Applications app2 = Applications(name2, category2, rating2, reviews2, filesize2, installs2, type2, price2, mrating2, genre2, lastupdated2, softvers2, androidvers2);
    Applications app3 = Applications(name3, category3, rating3, reviews3, filesize3, installs3, type3, price3, mrating3, genre3, lastupdated3, softvers3, androidvers3);
    /* Create file output stream. */
    ofstream outputfile("../TreeSearchData.csv");
    /* Create depth integer for pass by reference retrieval. */
    int depth = 0;
    /* Create the integer generation algorithm system. */
    auto alg = new Algorithms<int>();
    /* Start integer. */
    int startInteger = 0;
    /* End integer. */
    int endInteger = 10843;
    /* Duplicates integer. */
    int duplicatesInteger = 5;
    /* Test the algorithms function to ensure it operates without memory leaks. */
    alg->testAlgorithms();
    /* Set the start location for generating numbers for the tree search routines. */
    alg->setStart(startInteger);
    /* Set the end location for generating numbers for the tree search routines. */
    alg->setEnd(endInteger);
    /* Create a storage vector for a series of integers. */
    vector<int> sequence;
    /* Create a storage vector for a series of randomly ordered integers. */
    vector<int> random;
    /* Create a storage vector for duplicate integer values. */
    vector<int> duplicates;
    /* Create a storage vector for prime integer values. */
    vector<int> primes;
    /* Generate a sequence of integers from startInteger to endInteger. */
    sequence = alg->integerVector(startInteger, endInteger);
    /* Generate a random sequenece of integers from startInteger to endInteger. */
    random = alg->randomIntegerVector(startInteger, endInteger);
    /* Generate a duplicates sequence of integers from startInteger to endInteger. */
    duplicates = alg->duplicatesIntegerVector(startInteger, endInteger, duplicatesInteger);
    /* Generate a prime number sequence of integers from startInteger to endInteger. */
    primes = alg->sieveOfAtkin(endInteger);
    /* Create an application storage vector. */
    vector<Applications> apps;
    /* Create the filename for reading the applications from file. */
    string filename = "googleplaystore.csv";
    /* Read applications from file. */
    readApplicationsFromFile(filename, apps);
    /* Add the three foobar apps, app1. */
    apps.push_back(app1);
    /* app2. */
    apps.push_back(app2);
    /* app3. */
    apps.push_back(app3);
    /* Randomize the application order. */
    for(int i = 0; i < apps.size() - 1; ++i) {
        Applications temp = apps.at(i);
        apps.at(i) = apps.at(random.at(i));
        apps.at(random.at(i)) = temp;
    }
    /* Regenerate the sequence of random integers. */
    random = alg->randomIntegerVector(startInteger, endInteger);
    /* Create a splay tree. */
    auto stree = SplayTree<Applications>();
    /* Create an AVLTree. */
    auto atree = AVLTree<Applications>();
    /* Create a binaryTree. */
    auto btree = BinarySearchTree<Applications>();
    /* Load all the applications one at a time. */
    for(int i = 0; i < 10840; ++i) {
        /* Load apps in to a Splay Tree. */
        stree.add(apps.at(i));
        /* Load apps in to an AVL Tree. */
        atree.add(apps.at(i));
        /* Load apps in to a BinarySearchTree. */
        btree.add(apps.at(i));
    }
    /* Create a header for the data. */
    outputfile << "ID, Splay Tree Integer Sequence, AVL Tree Integer Sequence, Binary Tree Integer Sequence, Splay Tree Random Sequence, AVL Tree Random Sequence, Binary Tree Random Sequence, Splay Tree Duplicate Integer Sequence, AVL Tree Duplicate Integer Sequence, Binary Tree Duplicate Integer Sequence, Splay Tree Prime Integer Sequence, AVL Tree Prime Integer Sequence, Binary Tree Integer Sequence" << endl;
    /* Search for all of the values in the trees! */
    for(int i = startInteger; i < endInteger; ++i) {
        /* Store the row id for the current search. */
        outputfile << i << ", ";
        /* Search splay tree for integer sequence value. */
        stree.find(apps.at(sequence.at(i)), depth);
        /* Store the depth item was found at. */
        outputfile << depth << ", ";
        /* Reset depth counter variable. */
        depth = -1;
        /* Search AVL tree for integer sequence value. */
        atree.find(apps.at(sequence.at(i)),depth);
        /* Store the depth item was found at. */
        outputfile << depth << ", ";
        /* Reset depth counter variable. */
        depth = -1;
        /* Search binary tree for integer sequence value. */
        btree.find(apps.at(sequence.at(i)), depth);
        /* Store the depth item was found at. */
        outputfile << depth << ", ";
        /* Reset depth counter variable. */
        depth = -1;
        /* Search splay tree for random integer value. */
        stree.find(apps.at(random.at(i)), depth);
        /* Store the depth item was found at. */
        outputfile << depth << ", ";
        /* Reset depth counter variable. */
        depth = -1;
        /* Search AVL tree for random integer value. */
        atree.find(apps.at(random.at(i)), depth);
        /* Store the depth item was found at. */
        outputfile << depth << ", ";
        /* Reset depth counter variable. */
        depth = -1;
        /* Search the binary tree for random integer value. */
        btree.find(apps.at(random.at(i)), depth);
        /* Store the depth item was found at. */
        outputfile << depth << ", ";
        /* Reset depth counter variable. */
        depth = -1;
        /* Search the splay tree for duplicate integer value. */
        stree.find(apps.at(duplicates.at(i)), depth);
        /* Store the depth item was found at. */
        outputfile << depth << ", ";
        /* Reset depth counter variable. */
        depth = -1;
        /* Search the AVL tree for duplicate integer value. */
        atree.find(apps.at(duplicates.at(i)), depth);
        /* Store the depth item was found at. */
        outputfile << depth << ", ";
        /* Reset depth counter variable. */
        depth = -1;
        /* Search the binary tree for duplicate integer value. */
        btree.find(apps.at(duplicates.at(i)), depth);
        /* Store the depth item was found at. */
        outputfile << depth << ", ";
        /* Reset depth counter variable. */
        depth = -1;
        /* Search until there are no prime numbers left in the tree's potential node locations. */
        if(i < 1430) {
            /* Search the splay tree for duplicate integer value. */
            stree.find(apps.at(primes.at(i)), depth);
            /* Store the depth item was found at. */
            outputfile << depth << ", ";
            /* Reset depth counter variable. */
            depth = -1;
            /* Search the AVL tree for duplicate integer value. */
            atree.find(apps.at(primes.at(i)), depth);
            /* Store the depth item was found at. */
            outputfile << depth << ", ";
            /* Reset depth counter variable. */
            depth = -1;
            /* Search the binary tree for duplicate integer value. */
            btree.find(apps.at(primes.at(i)), depth);
            /* Store the depth item was found at. */
            outputfile << depth << ", ";
            /* Reset depth counter variable. */
            depth = -1;
        }
        else {
            outputfile << -1 << ", ";
            outputfile << -1 << ", ";
            outputfile << -1;
        }
        /* Create a new line to partition the data. */
        outputfile << endl;

    }
    /* Close the output file to save the data. */
    outputfile.close();
    /* Happy exit code. */
    exit(0);
}