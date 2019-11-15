#include <fstream>
#include "Algorithms.h"
#include "Applications.h"

string getAppReviews(Applications app);

int main() {

    /** Create an interval value for generating run time data for different numbers of objects. */
    int interval = 100;

    /** Create a max value for generating the vector of random objects. */
    int max = 1001;

    /** Create a count value for modifying how the interval changes over time. */
    int count = 1000;

    /** Create an integer for handling read from memory operation count. */
    int reads = 0;

    /** Create an integer for handling write to memory operation count. */
    int writes = 0;

    /** Create a duration interval for handling run time operation. */
    duration<double> runTime{};

    /** Create an output file to store read/write data for each sorting operation. */
    ofstream file("../Sorting-Analysis.csv");

    /** Create a header for the pandas database. */
    file << "Sorting Algorithm, Objects, Reads, Writes, Time" << endl;

    /** Create a vector to hold Google Play Store meta data. */
    auto *orderedApps = new vector<Applications>;

    /** Create a vector to create a random order for the Google Play Store application meta data. */
    auto *unorderedApps = new vector<Applications>;

    /** Create a string that holds the filename for the vector being loaded. */
    string filename = "googleplaystore.csv";

    /** Read the files in to a vector. */
    readApplicationsFromFile(filename, *orderedApps);

    /** Create an integer to store the number of applications. */
    int appCount = orderedApps->size();

    /** Set the maximum value to the number of applications. */
    max = appCount;

    /** Create an instance of the algorithms class for handling Applications. */
    auto *algorithms = new Algorithms<Applications>(getAppReviews);

    /** Create an instance of the algorithms class for handling integers. */
    auto *algs = new Algorithms<int>();

    /** Generate a random order for the objects to rest in. */
    vector<int> *randomOrder;

    /** Generate run time data for Bubble Sort with different numbers of objects. */
    while(count < max) {
//        /** Create a vector to store random numbers. */
//        randomOrder = algs->randomIntegerVector(0, appCount-1);
//        /** Clear the unordered apps vector. */
//        unorderedApps->clear();
//        /** Rearrange the objects in the vector based on the new arrangement. */
//        #pragma omp parallel for
//        for (int i = 0; i < count; ++i) {
//            /** Push back the randomly selected application. */
//            unorderedApps->push_back(orderedApps->at(randomOrder->at(i)));
//        }
//        /** Output count. */
//        cout << "Bubble Sort is sorting " << count << " objects." << endl;
//        /** Test bubble sort algorithm. */
//        algorithms->bubbleSort(*unorderedApps);
//        /** Store the number of reads. */
//        reads = algorithms->getReads();
//        /** Store the number of writes. */
//        writes = algorithms->getWrites();
//        /** Store the run time duration. */
//        runTime = algorithms->calculateTimeSpan();
//        /** Write the data to file. */
//        file << "Bubble Sort, " << count << ", " << reads << ", " << writes << ", " << runTime.count() << endl;
//        /** Reset the read count. */
//        algorithms->setReads(0);
//        /** Reset the write count. */
//        algorithms->setWrites(0);
//        /** Increment count. */
//        count += interval;
//    }
//
//    /** Reset the count value. */
//    count = 100;
//
//    /** Generate run time data for Selection Sort with different numbers of objects. */
//    while(count < max) {
//        /** Create a vector to store random numbers. */
//        randomOrder = algs->randomIntegerVector(0, appCount-1);
//        /** Clear the unordered apps vector. */
//        unorderedApps->clear();
//        /** Rearrange the objects in the vector based on the new arrangement. */
//        #pragma omp parallel for
//        for (int i = 0; i < count; ++i) {
//            /** Push back the randomly selected application. */
//            unorderedApps->push_back(orderedApps->at(randomOrder->at(i)));
//        }
//        /** Output count. */
//        cout << "Selection sort is sorting " << count << " objects." << endl;
//        /** Test selection sort algorithm. */
//        algorithms->selectionSort(*unorderedApps);
//        /** Store the number of reads. */
//        reads = algorithms->getReads();
//        /** Store the number of writes. */
//        writes = algorithms->getWrites();
//        /** Store the run time duration. */
//        runTime = algorithms->calculateTimeSpan();
//        /** Write the data to file. */
//        file << "Selection Sort, " << count << ", " << reads << ", " << writes << ", " << runTime.count() << endl;
//        /** Reset the read count. */
//        algorithms->setReads(0);
//        /** Reset the write count. */
//        algorithms->setWrites(0);
//        /** Increment count. */
//        count += interval;
//    }
//
//    /** Reset the count value. */
//    count = 100;
//
//    /** Generate run time data for Insertion Sort with different numbers of objects. */
//    while(count < max) {
//        /** Create a vector to store random numbers. */
//        randomOrder = algs->randomIntegerVector(0, appCount-1);
//        /** Clear the unordered apps vector. */
//        unorderedApps->clear();
//        /** Rearrange the objects in the vector based on the new arrangement. */
//        #pragma omp parallel for
//        for (int i = 0; i < count; ++i) {
//            /** Push back the randomly selected application. */
//            unorderedApps->push_back(orderedApps->at(randomOrder->at(i)));
//        }
//        /** Output count. */
//        cout << "Insertion sort is sorting " << count << " objects." << endl;
//        /** Test insertion sort algorithm. */
//        algorithms->insertionSort(*unorderedApps);
//        /** Store the number of reads. */
//        reads = algorithms->getReads();
//        /** Store the number of writes. */
//        writes = algorithms->getWrites();
//        /** Store the run time duration. */
//        runTime = algorithms->calculateTimeSpan();
//        /** Write the data to file. */
//        file << "Insertion Sort, " << count << ", " << reads << ", " << writes << ", " << runTime.count() << endl;
//        /** Reset the read count. */
//        algorithms->setReads(0);
//        /** Reset the write count. */
//        algorithms->setWrites(0);
//        /** Increment count. */
//        count += interval;
//    }
//
//    /** Reset the count value. */
//    count = 100;
//
//    /** Generate run time data for Merge Sort with different numbers of objects. */
//    while(count < max) {
//        /** Create a vector to store random numbers. */
//        randomOrder = algs->randomIntegerVector(0, appCount-1);
//        /** Clear the unordered apps vector. */
//        unorderedApps->clear();
//        /** Rearrange the objects in the vector based on the new arrangement. */
//        #pragma omp parallel for
//        for (int i = 0; i < count; ++i) {
//            /** Push back the randomly selected application. */
//            unorderedApps->push_back(orderedApps->at(randomOrder->at(i)));
//        }
//        /** Output count. */
//        cout << "Merge sort is sorting " << count << " objects." << endl;
//        /** Test merge sort algorithm. */
//        algorithms->mergeSort(*unorderedApps, 0, int(unorderedApps->size()) - 1);
//        /** Store the number of reads. */
//        reads = algorithms->getReads();
//        /** Store the number of writes. */
//        writes = algorithms->getWrites();
//        /** Store the run time duration. */
//        runTime = algorithms->calculateTimeSpan();
//        /** Write the data to file. */
//        file << "Merge Sort, " << count << ", " << reads << ", " << writes << ", " << runTime.count() << endl;
//        /** Reset the read count. */
//        algorithms->setReads(0);
//        /** Reset the write count. */
//        algorithms->setWrites(0);
//        /** Increment count. */
//        count += interval;
//    }
//
//    /** Reset the count value. */
//    count = 100;
//
//    /** Generate run time data for Quick Sort with different numbers of objects. */
//    while(count < max) {
//        /** Create a vector to store random numbers. */
//        randomOrder = algs->randomIntegerVector(0, appCount-1);
//        /** Clear the unordered apps vector. */
//        unorderedApps->clear();
//        /** Rearrange the objects in the vector based on the new arrangement. */
//        #pragma omp parallel for
//        for (int i = 0; i < count; ++i) {
//            /** Push back the randomly selected application. */
//            unorderedApps->push_back(orderedApps->at(randomOrder->at(i)));
//        }
//        /** Output count. */
//        cout << "Quick sort is sorting " << count << " objects." << endl;
//        /** Test quick sort algorithm. */
//        algorithms->quickSort(*unorderedApps);
//        /** Store the number of reads. */
//        reads = algorithms->getReads();
//        /** Store the number of writes. */
//        writes = algorithms->getWrites();
//        /** Store the run time duration. */
//        runTime = algorithms->calculateTimeSpan();
//        /** Write the data to file. */
//        file << "Quick Sort, " << count << ", " << reads << ", " << writes << ", " << runTime.count() << endl;
//        /** Reset the read count. */
//        algorithms->setReads(0);
//        /** Reset the write count. */
//        algorithms->setWrites(0);
//        /** Increment count. */
//        count += interval;
//    }
//
//    /** Reset the count value. */
//    count = 100;

    /** Generate run time data for Heap Sort with different numbers of objects. */
    while(count < max) {
        /** Create a vector to store random numbers. */
        randomOrder = algs->randomIntegerVector(0, appCount-1);
        /** Clear the unordered apps vector. */
        unorderedApps->clear();
        /** Rearrange the objects in the vector based on the new arrangement. */
        #pragma omp parallel for
        for (int i = 0; i < count; ++i) {
            /** Push back the randomly selected application. */
            unorderedApps->push_back(orderedApps->at(randomOrder->at(i)));
        }
        /** Output count. */
        cout << "Heap sort is sorting " << count << " objects." << endl;
        /** Test heap sort algorithm. */
        algorithms->heapSort(*unorderedApps);
        /** Store the number of reads. */
        reads = algorithms->getReads();
        /** Store the number of writes. */
        writes = algorithms->getWrites();
        /** Store the run time duration. */
        runTime = algorithms->calculateTimeSpan();
        /** Write the data to file. */
        file << "Heap Sort, " << count << ", " << reads << ", " << writes << ", " << runTime.count() << endl;
        /** Reset the read count. */
        algorithms->setReads(0);
        /** Reset the write count. */
        algorithms->setWrites(0);
        /** Increment count. */
        count += interval;
    }

//    /** Reset the count value. */
//    count = 100;
//
//    /** Generate run time data for Two Sort with different numbers of objects. */
//    while(count < max) {
//        /** Create a vector to store random numbers. */
//        randomOrder = algs->randomIntegerVector(0, appCount-1);
//        /** Clear the unordered apps vector. */
//        unorderedApps->clear();
//        /** Rearrange the objects in the vector based on the new arrangement. */
//        #pragma omp parallel for
//        for (int i = 0; i < count; ++i) {
//            /** Push back the randomly selected application. */
//            unorderedApps->push_back(orderedApps->at(randomOrder->at(i)));
//        }
//        /** Output count. */
//        cout << "Two sort is sorting " << count << " objects." << endl;
//        /** Test two sort algorithm. */
//        algorithms->twoSort(*unorderedApps);
//        /** Store the number of reads. */
//        reads = algorithms->getReads();
//        /** Store the number of writes. */
//        writes = algorithms->getWrites();
//        /** Store the run time duration. */
//        runTime = algorithms->calculateTimeSpan();
//        /** Write the data to file. */
//        file << "Two Sort, " << count << ", " << reads << ", " << writes << ", " << runTime.count() << endl;
//        /** Reset the read count. */
//        algorithms->setReads(0);
//        /** Reset the write count. */
//        algorithms->setWrites(0);
//        /** Increment count. */
//        count += interval;
    }
    /** Output the values to a file. */
    file.close();
}

string getAppReviews(Applications app) {
    return app.getReviews();
}