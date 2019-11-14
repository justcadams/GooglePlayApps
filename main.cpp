#include <fstream>
#include "Algorithms.h"
#include "Applications.h"

string getAppReviews(Applications app);

int main() {

    /** Create an interval value for generating run time data for different numbers of objects. */
    int interval = 100;

    /** Create a max value for generating the vector of random objects. */
    int max = interval;

    /** Create a count value for modifying how the interval changes over time. */
    int count = 0;

    /** Create an integer for handling read from memory operation count. */
    int reads = 0;

    /** Create an integer for handling write to memory operation count. */
    int writes = 0;

    /** Create a duration interval for handling run time operation. */
    duration<double> runTime{};

    /** Create an output file to store read/write data for each sorting operation. */
    ofstream file("../Sorting-Analysis.csv");

    /** Create a header for the pandas database. */
    file << "Sorting Algorithm, Reads, Writes, Time" << endl;

    /** Create a vector to hold Google Play Store meta data. */
    vector<Applications> orderedApps;

    /** Create a vector to create a random order for the Google Play Store application meta data. */
    vector<Applications> unorderedApps;

    /** Create a string that holds the filename for the vector being loaded. */
    string filename = "googleplaystore.csv";

    /** Read the files in to a vector. */
    readApplicationsFromFile(filename, orderedApps);

    /** Create an instance of the algorithms class for handling Applications. */
    auto algorithms = Algorithms<Applications>(getAppReviews);

    /** Create an instance of the algorithms class for handling integers. */
    auto algs = Algorithms<int>();

    /** Set the end point for the random number generator. */
    int e = orderedApps.size();

    /** Generate a random order for the objects to rest in. */
    vector<int> randomOrder = algs.randomIntegerVector(0, e);

    /** Generate run time data for different numbers of objects. */
    while(max < orderedApps.size()) {
        /** Clear the unorderedApps vector for the next sorting iteration. */
        unorderedApps.clear();
        /** Rearrange the objects in the vector based on the new arrangement. */
        for (int i = 0; i < max; ++i) {
            /** Push back the randomly selected application. */
            unorderedApps.push_back(orderedApps[randomOrder[i]]);
        }
        /** Store the unordered apps state. */
        vector<Applications> currentState = unorderedApps;
        /** Test bubble sort algorithm. */
        algorithms.bubbleSort(unorderedApps);
        /** Store the number of reads. */
        reads = algorithms.getReads();
        /** Store the number of writes. */
        writes = algorithms.getWrites();
        /** Store the run time duration. */
        runTime = algorithms.calculateTimeSpan();
        /** Write the data to file. */
        file << "Bubble Sort " << max << ", " << reads << ", " << writes << ", " << runTime.count() << endl;
        /** Reset the read count. */
        algorithms.setReads(0);
        /** Reset the write count. */
        algorithms.setWrites(0);
        /** Reset the applications vector. */
        unorderedApps = currentState;

        /** Test selection sort algorithm. */
        unorderedApps = algorithms.selectionSort(unorderedApps);
        /** Store the number of reads. */
        reads = algorithms.getReads();
        /** Store the number of writes. */
        writes = algorithms.getWrites();
        /** Store the run time duration. */
        runTime = algorithms.calculateTimeSpan();
        /** Write the data to file. */
        file << "Selection Sort " << max << ", " << reads << ", " << writes << ", " << runTime.count() << endl;
        /** Reset the read count. */
        algorithms.setReads(0);
        /** Reset the write count. */
        algorithms.setWrites(0);
        /** Reset the applications vector. */
        unorderedApps = currentState;

        /** Test insertion sort algorithm. */
        algorithms.insertionSort(unorderedApps);
        /** Store the number of reads. */
        reads = algorithms.getReads();
        /** Store the number of writes. */
        writes = algorithms.getWrites();
        /** Store the run time duration. */
        runTime = algorithms.calculateTimeSpan();
        /** Write the data to file. */
        file << "Insertion Sort " << max << ", " << reads << ", " << writes << ", " << runTime.count() << endl;
        /** Reset the read count. */
        algorithms.setReads(0);
        /** Reset the write count. */
        algorithms.setWrites(0);
        /** Reset the applications vector. */
        unorderedApps = currentState;

        /** Test merge sort algorithm. */
        algorithms.mergeSort(unorderedApps, 0, unorderedApps.size()-1);
        /** Store the number of reads. */
        reads = algorithms.getReads();
        /** Store the number of writes. */
        writes = algorithms.getWrites();
        /** Store the run time duration. */
        runTime = algorithms.calculateTimeSpan();
        /** Write the data to file. */
        file << "Merge Sort " << max << ", " << reads << ", " << writes << ", " << runTime.count() << endl;
        /** Reset the read count. */
        algorithms.setReads(0);
        /** Reset the write count. */
        algorithms.setWrites(0);
        /** Reset the applications vector. */
        unorderedApps = currentState;

        /** Test quick sort algorithm. */
        algorithms.quickSort(unorderedApps);
        /** Store the number of reads. */
        reads = algorithms.getReads();
        /** Store the number of writes. */
        writes = algorithms.getWrites();
        /** Store the run time duration. */
        runTime = algorithms.calculateTimeSpan();
        /** Write the data to file. */
        file << "Quick Sort " << max << ", " <<  reads << ", " << writes << ", " << runTime.count() << endl;
        /** Reset the read count. */
        algorithms.setReads(0);
        /** Reset the write count. */
        algorithms.setWrites(0);
        /** Reset the applications vector. */
        unorderedApps = currentState;

        /** Test heap sort algorithm. */
        unorderedApps = algorithms.heapSort(unorderedApps);
        /** Store the number of reads. */
        reads = algorithms.getReads();
        /** Store the number of writes. */
        writes = algorithms.getWrites();
        /** Store the run time duration. */
        runTime = algorithms.calculateTimeSpan();
        /** Write the data to file. */
        file << "Heap Sort " << max << ", " << reads << ", " << writes << ", " << runTime.count() << endl;
        /** Reset the read count. */
        algorithms.setReads(0);
        /** Reset the write count. */
        algorithms.setWrites(0);
        /** Reset the applications vector. */
        unorderedApps = currentState;

        /** Test two sort algorithm. */
        algorithms.twoSort(unorderedApps);
        /** Store the number of reads. */
        reads = algorithms.getReads();
        /** Store the number of writes. */
        writes = algorithms.getWrites();
        /** Store the run time duration. */
        runTime = algorithms.calculateTimeSpan();
        /** Write the data to file. */
        file << "Two Sort " << max << ", " << reads << ", " << writes << ", " << runTime.count() << endl;
        /** Reset the read count. */
        algorithms.setReads(0);
        /** Reset the write count. */
        algorithms.setWrites(0);

        /** Increment the interval. */
        max += interval;
        /** Increment count. */
        ++count;
        /** Output count. */
        cout << count << endl;
    }
    /** Output the values to a file. */
    file.close();
}

string getAppReviews(Applications app) {
    return app.getReviews();
}