#include "Algorithms.h"
#include "Applications.h"

int main() {
    /** Create a vector to hold Google Play Store meta data. */
    vector<Applications> orderedApps;
    /** Create a vector to create a random order for the Google Play Store application meta data. */
    vector<Applications> unorderedApps;
    /** Create a string that holds the filename for the vector being loaded. */
    string filename = "../googleplaystore.csv";
    /** Read the files in to a vector. */
    readApplicationsFromFile(filename, orderedApps);
    /** Create an instance of the algorithms class. */
    auto algs = Algorithms<Applications>();
    /** Generate a random order for the objects to rest in. */
    vector<int> randomOrder = algs.randomIntegerVector(0,orderedApps.size());
    /** Rearrange the objects in the vector based on the new arrangement. */
    for(unsigned long long int i = 0; i < orderedApps.size(); ++i) {
        /** Push back the randomly selected application. */
        unorderedApps.push_back(orderedApps[randomOrder[i]]);
    }
}
