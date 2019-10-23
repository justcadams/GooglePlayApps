/**************************************************************************************/
/** LICENSE
* Begin license text.
*
* Copyright <18 October 2019> <Justin  C. Adams>
* Permission is hereby granted, free of charge, to any person obtaining
* a copy of this software and associated documentation files (the "Software"),
* to deal in the Software without restriction, including without limitation the
* rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is furnished
* to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
* PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
* HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
* OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*
* End license text.
*/
/**************************************************************************************/
/** COPYRIGHT
* Begin copyright text.
*
* Created by Justin C. Adams 18 October 2019
* FILE: Algorithms.cpp
* DESCRIPTION:
*     Contains all data structures and algorithms implemented by Justin C. Adams
*     during the course of days working on computer programming. Implementation is
*     modified to incorporate Open Source Multi-Processing from OpenMP Architecture
*     Review Board.
*
* End copyright text.
*/
/**************************************************************************************/
/** IMPLEMENTATION & STYLE
* Begin implementation text
*
* IMPLEMENTATION
* Code implementation uses OpenMP compiler contained in CygWin64 or MSys64/MinGW64
* https://www.math.ucla.edu/~wotaoyin/windows_coding_cygwin.html
* https://www.math.ucla.edu/~wotaoyin/windows_coding.html
*
* STYLE
* Code style based on David Blaise omp_hello.c
* FILE: omp_hello.c
* DESCRIPTION:
*   OpenMP Example - Hello World - C/C++ Version
*   In this simple example, the master thread forks a parallel region.
*   All threads in the team obtain their unique thread number and print it.
*   The master thread only prints the total number of threads.  Two OpenMP
*   library routines are used to obtain the number of threads and each
*   thread's number.
* AUTHOR: Blaise Barney  5/99
* LAST REVISED: 04/06/05
*
* End implementation text
*/
/**************************************************************************************/

#include "Algorithms.h"

/* Default constructor. This does contain any parameters. */
Algorithms::Algorithms() {
    /* Initialize field start to 0. */
    this->start = 0;
    /* Initialize field end to 255 (INT8_MAX = 2^8 - 1). */
    this->end = 255;
    /* Initialize field repeats to 2. */
    this->repeats = 2;
    /* Initialize string filename to "../numbers.txt". */
    this->filename = "../numbers.txt";
}

/* Integer start initialization constructor. This contains the parameter int s, which initializes start. */
Algorithms::Algorithms(int s) {
    /* Initialize field start to s. */
    this->start = s;
    /* Initialize field end to 255 + s (INT8_MAX = 2^8 - 1 + s). */
    this->end = 255 + s;
    /* Initialize field repeats to 2. */
    this->repeats = 2;
    /* Initialize string filename to "../numbers.txt". */
    this->filename = "../numbers.txt";
}

/* String filename initialization constructor. This contains the parameter string &f, which initializes filename. */
Algorithms::Algorithms(string &f) {
    /* Initialize field start to 0. */
    this->start = 0;
    /* Initialize field end to 255 (INT8_MAX = 2^8 - 1). */
    this->end = 255;
    /* Initialize field repeats to 2. */
    this->repeats = 2;
    /* Initialize string filename to f. */
    this->filename = f;
}

/* Integer start and end initialization constructor.
 *  This contains the parameter int s and int e, which initializes start and end. */
Algorithms::Algorithms(int s, int e) {
    /* Initialize field start to s. */
    this->start = s;
    /* Initialize field end to e. */
    this->end = e;
    /* Initialize field repeats to 2. */
    this->repeats = 2;
    /* Initialize string filename to "../numbers.txt". */
    this->filename = "../numbers.txt";
}

/* Integer start, end initialization constructor.
 *  This contains the parameter int s, int e, string &f which initializes start, end, and filename. */
Algorithms::Algorithms(int s, int e, string &f) {
    /* Initialize field start to s. */
    this->start = s;
    /* Initialize field end to e. */
    this->end = e;
    /* Initialize field repeats to 2. */
    this->repeats = 2;
    /* Initialize string filename to f. */
    this->filename = f;
}

/* Integer start, end repeats constructor.
 *  This contains the parameter int s, int e, int r which initializes start, end, and repeats. */
Algorithms::Algorithms(int s, int e, int r) {
    /* Initialize field start to s. */
    this->start = s;
    /* Initialize field end to e. */
    this->end = e;
    /* Initialize field repeats to r */
    this->repeats = r;
    /* Initialize string filename to "../numbers.txt". */
    this->filename = "../numbers.txt";
}

/* Integer start, end, repeats, and filename constructor.
 *  This contains the parameter int s, int e, int r, and string &f.
 *  The constructor initializes start, end, repeats, and filename. */
Algorithms::Algorithms(int s, int e, int r, string &f) {
    /* Initialize field start to s. */
    this->start = s;
    /* Initialize field end to e. */
    this->end = e;
    /* Initialize field repeats to r */
    this->repeats = r;
    /* Initialize string filename to f. */
    this->filename = f;
}

/* function int getStart() returns a copy of the integer that stores the start integer value for this class. */
int Algorithms::getStart() {
    /* Integer primitive copy constructor of the field start for the integer function "int Algorithms::getStart()". */
    return this->start;
}

/* function setStart() deletes the start integer value for this class and replaces it with the new value s. */
void Algorithms::setStart(int s) {
    /* Integer primitive copy constructor for field start. */
    this->start = s;
}

/* function int getEnd() returns a copy of the integer that stores the end integer value for this class. */
int Algorithms::getEnd() {
    /* Integer primitive copy constructor of the field start for the integer function "int Algorithms::getEnd()". */
    return this->end;
}

/* function setEnd() deletes the end integer value for this class and replaces it with the new value e. */
void Algorithms::setEnd(int e) {
    /* Integer primitive copy constructor for field end. */
    this->end = e;
}

/* function int getRepeats() returns a copy of the integer that stores the repeats integer value for this class. */
int Algorithms::getRepeats() {
    /* Integer primitive copy constructor of the field start for the integer function "int Algorithms::getRepeats()". */
    return this->repeats;
}

/* function setRepeats() deletes the repeats integer value for this class and replaces it with the new value r. */
void Algorithms::setRepeats(int r) {
    /* Integer primitive copy constructor for field repeats. */
    this->repeats = r;
}

/* function string getFilename() returns a copy of the string that stores the filename string value for this class. */
string Algorithms::getFilename() {
    /* Immutable character array class string copy constructor of the field filename for string function "string Algorithms::getFilename()". */
    return this->filename;
}

/* function setFilename() deletes the end integer value for this class and replaces it with the new value r. */
void Algorithms::setFilename(string &f) {
    /* Immutable character array class string copy constructor for the field filename. */
    this->filename = f;
}

/* function bool getVerbose() returns a copy of the boolean that stores the verbose bool value for this class. */
bool Algorithms::getVerbose() {
    /* Boolean primitive copy constructor of the field verbose for bool function "bool Algorithms::getVerbose()". */
    return this->verbose;
}

/* function setVerbose() deletes the verbose boolean value for this class and replaces it with the new value m. */
void Algorithms::setVerbose(bool m) {
    /* Boolean primitive copy constructor for the field verbose. */
    this->verbose = m;
}

/** function integerArray(int s, int e, int *d)
 * Creates a well-ordered array of integers from s-e stored in array d. */
void Algorithms::integerArray(int s, int e, vector<int> &d) {
    /* Fork a team of threads to initialize data. */
    #pragma omp parallel for
    /* For every location in data... */
    for(int i = s; i <= e; ++i) {
        /* Store the next number in the series 0-n. */
        d.push_back(i);
    }
}

/** function randomIntegerArray(int s, int e, int *d)
 * Stores a randomly ordered array data of length e-s with values singly selected from s-e . */
void Algorithms::randomIntegerArray(int s, int e, vector<int> &d) {
    /* Create a vector to check for duplicates. */
    vector<int> wellOrdered;
    /* Fork a team of threads to initialize data. */
    #pragma omp parallel for
    /* For every location in data... */
    for(int i = 0; i <= (e-s); ++i) {
        /* Ensure data[i] only contains a value less than start. */
        d.push_back(s-2);
        /* Ensure wellOrdered[i] only contains a value less than start. */
        wellOrdered.push_back(s-2);
    }
    /* Obtain a random seed value. */
    auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    /* Seed mt19937 with the random source. */
    mt19937 mt_rand(seed);
    /* Create an integer to store newly generated numbers. */
    int num = 0;
    /* Fork a team of threads to generate the integers from 1-n in a random order. */
    #pragma omp parallel for
    for(int i = 0; i < (e-s); ++i) {
        /* Generate a new random number. */
        num = mt_rand()%(e-s) + s;
        /* Check to see if there is a repeat. */
        while(wellOrdered[num - s] != s-2) {
            /* If there is a repeat, then generate a new number. */
            num = mt_rand()%(e-s) + s;
        }
        /* Add the new number to the return array. */
        d[i] = num;
        /* Add the new number to the well ordered array. */
        wellOrdered[num] = num;
    }
}

/* function duplicatesIntegerArray(int s, int e, int r, int *d)
 * generates an array in d that contains r duplicates beginning at s and ending at (e-s)/r */
void Algorithms::duplicatesIntegerArray(int s, int e, int r, vector<int> &d) {
    /* Fork a team of threads to initialize data. */
    #pragma omp parallel for
    /* For every location in data... */
    for(int i = 0; i < (e-s); ++i) {
        /* ensure data[i] receives the floor division value i/a. */
        d.push_back(i/r + s);
    }
}

/*  Atkin, A. O. L., and D. J. Bernstein. “Prime Sieves Using Binary Quadratic Forms.” Mathematics of Computation
        vol. 73, no. 246, Dec. 2003, pp. 1023–31. Crossref, doi:10.1090/S0025-5718-03-01501-1.*/
/* function sieveOfAtkin(int n, int *data)
 * returns an array that contains only prime numbers ranging from 2-n. */
vector<int> Algorithms::sieveOfAtkin(int n) {
    /* Create a prime number count variable. */
    int count = 0;
    /* Create a constant integer to initialize the array with. */
    const int size = n;
    /* Create a temporary storage array. */
    vector<bool> numbers;
    /* Calculate the largest potential prime number required to sieve the range 1-n. */
    int max = static_cast<int>(sqrt(n)) + 1;
    /* Fork a team of threads to initialize the array. */
    #pragma omp parallel for
    /* For every value in temp... */
    for(int i = 0; i < n; ++i) {
        /* Initialize all numbers to composite. */
        numbers.push_back(false);
    }
    /* Begin sieve using binary quadratic forms i = x in the parametric function. */
    for(int i = 1; i < max; i++) {
        /* Begin sieve using binary quadratic forms j = y in the parametric function. */
        for(int j = 1; j < max; j++) {
            /*  Prime sieve using the binary quadratic form from Theorem 6.1 Page 1028. */
            int k = 4 * i * i + j * j;
            /*  The following modulo 60 remainders are prime if there are an odd number of solutions 4*i*i+j*j. */
            if((k <= n) && ((((k % 60) == 1) || ((k%60) == 13) || ((k%60) == 17) || ((k%60) == 29) || ((k%60) == 37) || ((k%60) == 41) || ((k%60) == 49) || ((k%60) == 53)))) {
                /* Flip the value. */
                numbers[k] = !numbers[k];
            }
            /*  Prime sieve using the binary quadratic form from Theorem 6.2 Page 1028. */
            k = 3 * i * i + j * j;
            /*  The following modulo 60 remainders are prime if there are an odd number of solutions to 3*i*i+j*j. */
            if((k <= n) && (((k % 60) == 7) || ((k % 60) == 19) || ((k % 60) == 31) || ((k % 60) == 43))) {
                /* Flip the value. */
                numbers[k] = !numbers[k];
            }
            /*  Prime sieve using the binary quadratic form from Theorem 6.3 Page 1028-1029. */
            if(i > j) {
                /* If i is more than j and it satisfies the polynomial an odd number of times for the following values. */
                k = 3 * i * i - j * j;
                /* The following modulo 60 remainders are prime if there are an odd number of solutions to 3*i*i-j*j. */
                if((k < n) && (((k % 60) == 11) || ((k % 60) == 23) || ((k % 60) == 47) || ((k % 60) == 59))) {
                    /* Flip the value. */
                    numbers[k] = !numbers[k];
                }
            }
        }
    }
    /* Mark 2 as prime. */
    numbers[2] = true;
    /* Mark 3 as prime */
    numbers[3] = true;
    /* Mark 5 as prime */
    numbers[5] = true;
    /* Create a comparison integer. */
    int comp = 0;
    /* For all values within max... */
    for(int i = 5; i <= max; i++) {
        /* Initialize the comparison integer. */
        comp = numbers[i];
        /* If the number is prime... */
        if(comp == 1) {
            /* Calculate its square value. */
            int square = i * i;
            /* Remove all factors of the square from the prime list. */
            for(int j = 1; square * j < max; j++) {
                /* Mark composites with 0. */
                numbers[square*j] = 0;
            }
        }
    }
    /* Create a storage vector for the prime numbers. */
    vector<int> primes;
    /* Fork a team of threads to count the number of prime numbers in the sieve. */
    #pragma omp parallel for
    /* For every integer from 0-n... */
    for(int i = 0; i < n; i++) {
        /* If the number is prime... */
        if (numbers[i] == true) {
            /* Store the number in the returnArray object. */
            primes.push_back(i);
        }
    }
    return primes;
}

void Algorithms::outputTerminal(vector<int> &d1, vector<int> &d2, vector<int> &d3, vector<int> &d4, int n) {
    /* Fork a team of threads to output data. */
    #pragma omp parallel for
    /* For every value in every array of length n... */
    for(int i = 0; i < n; ++i) {
        /* Print the values to the terminal */
        printf("sequence[%d] = %d , random[%d] = %d, duplicates[%d] = %d\n, primes[%d] = %d\n", i, d1[i], i, d2[i], i, d3[i], i, d4[i]);
    }
}

void Algorithms::writeArray(string &f, vector<int> d1, vector<int> d2, vector<int> d3, vector<int> d4, int n) {
    /* Create a file output stream. */
    ofstream file(f);
    /* Open a file to write to. */
    if(file.is_open()) {
        /* Fork a team of threads to output data. */
        #pragma omp parallel for
        /* For every value in every array of length n... */
        for(int i = 0; i < n; ++i) {
            /* Output file string. */
            file << d1[i] << ',' << d2[i] << ',' << d3[i] << d4[i] << endl;
        }
    }
}

void Algorithms::testAlgorithms() {
    /** Initialize variables for the Algorithms class test suite. */

    /* Primitive data type instances. */
    /* Set testing boolean passed to true. */
    bool passed = true;
    /* Set testing integer newStart to -1. */
    int newStart = -1;
    /* Set testing integer newEnd to 256. */
    int newEnd = 256;
    /* Set testing integer newRepeats to 3. */
    int newRepeats = 3;
    /* Set testing bool newBool to true. */
    bool newBool = false;
    /* Reset verbose trigger. */
    bool resetVerbose = false;

    /* Derived data type instances. */
    /* Set newFilename to "../n.txt". */
    string newFilename = "../n.txt";
    /* Create a filename comparison string object. */
    string getFilename;
    /* Create a constant integer to initialize arrays. */
    const static int size = 257;
    /* Create an array to store an ordered sequence of integers. */
    vector<int> sequence = vector<int>(size);
    /* Create an array to store a random sequence of integers. */
    vector<int> random = vector<int>(size);
    /* Create an array to store a series of duplicate integers. */
    vector<int> duplicates = vector<int>(size);

    /** Verify getters and setters pass testing. */


    /* Check if verbose mode is on. */
    if(this->getVerbose()) {
        /* Declare to the user the current test. */
        cout << "Testing getVerbose." << endl;
        /* Set verbose mode to a value to verify testing. */
        this->setVerbose(newBool);
        /* Set reset verbose trigger. */
        resetVerbose = true;
    }
    /* Check if getVerbose is successful. */
    if(!this->getVerbose()) {
        /* Check if verbose mode is on. */
        if(resetVerbose) {
            /* Report getVerbose success. */
            cout << "getVerbose successful." << endl;
        }
    }
    /* Report getVerbose failure. */
    else {
        if(resetVerbose) {
            /* Declare to the user getVerbose failure. */
            cout << "getVerbose failure." << endl;
        }
        /* Update test status variable to false. */
        passed = false;
    }


    /* Check if verbose mode is on. */
    if(this->getVerbose()) {
        /* Declare to the user the current test. */
        cout << "Testing setVerbose." << endl;
    }
    /* Change newBool to true. */
    newBool = !newBool;
    /* Set verbose to newBool = true. */
    this->setVerbose(newBool);
    /* Check if setVerbose is successful. */
    if(this->getVerbose()) {
        /* Check if verbose mode is on. */
        if(resetVerbose) {
            /* Report setVerbose success. */
            cout << "setVerbose successful." << endl;
        }
        /* Check if resetVerbose was triggered. */
        if(!resetVerbose) {
            /* Set verbose back to original setting. */
            this->setVerbose(resetVerbose);
        }
    }
    /* Report setVerbose failure. */
    else {
        /* Declare to the user setVerbose failure. */
        cout << "setVerbose failure." << endl;
        /* Update test status variable to false. */
        passed = false;
    }



    /* Check if verbose mode is on. */
    if(this->getVerbose()) {
        /* Declare to the user the current phase of testing. */
        cout << "Testing getters and setters." << endl;
    }

    /* Check if verbose mode is on. */
    if(this->getVerbose()) {
        /* Declare to the user the current test. */
        cout << "Testing getStart." << endl;
    }
    /* Check if getStart is successful. */
    if(this->getStart() == 0) {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Report getStart success. */
            cout << "getStart successful." << endl;
        }
    }
    /* Report getStart failure. */
    else {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Declare to the user getStart failure. */
            cout << "getStart failure." << endl;
        }
        /* Update test status variable to false. */
        passed = false;
    }

    /* Check if verbose mode is on. */
    if(this->getVerbose()) {
        /* Declare to the user the current test. */
        cout << "Testing setStart." << endl;
    }
    /* Set start to newStart = -1. */
    this->setStart(newStart);
    /* Check if setStart is successful. */
    if(this->getStart() == -1) {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Report setStart success. */
            cout << "setStart successful." << endl;
        }
    }
    /* Report setStart failure. */
    else {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Declare to the user setStart failure. */
            cout << "setStart failure." << endl;
        }
        /* Update test status variable to false. */
        passed = false;
    }

    /* Check if verbose mode is on. */
    if(this->getVerbose()) {
        /* Declare to the user the current test. */
        cout << "Testing getEnd." << endl;
    }
    /* Check if getEnd is successful. */
    if(this->getEnd() == 127) {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Report getEnd success. */
            cout << "getEnd successful." << endl;
        }
    }
    /* Report getEnd failure. */
    else {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Declare to the user getEnd failure. */
            cout << "getEnd failure." << endl;
        }
        /* Update test status variable to false. */
        passed = false;
    }

    /* Check if verbose mode is on. */
    if(this->getVerbose()) {
        /* Declare to the user the current test. */
        cout << "Testing setEnd." << endl;
    }
    /* Set start to newEnd = 256. */
    this->setEnd(newEnd);
    /* Check if setEnd is successful. */
    if(this->getEnd() == 256) {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Report setEnd success. */
            cout << "setEnd successful." << endl;
        }
    }
    /* Report setEnd failure. */
    else {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Declare to the user setEnd failure. */
            cout << "setEnd failure." << endl;
        }
        /* Update test status variable to false. */
        passed = false;
    }

    /* Check if verbose mode is on. */
    if(this->getVerbose()) {
        /* Declare to the user the current test. */
        cout << "Testing getRepeats." << endl;
    }
    /* Check if getRepeats is successful. */
    if(this->getRepeats() == 2) {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Report getRepeats success. */
            cout << "getRepeats successful." << endl;
        }
    }
    /* Report getRepeats failure. */
    else {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Declare to the user getRepeats failure. */
            cout << "getRepeats failure." << endl;
        }
        /* Update test status variable to false. */
        passed = false;
    }

    /* Check if verbose mode is on. */
    if(this->getVerbose()) {
        /* Declare to the user the current test. */
        cout << "Testing setRepeats." << endl;
    }
    /* Set repeats to newRepeats = 3. */
    this->setRepeats(newRepeats);
    /* Check if setRepeats is successful. */
    if(this->getRepeats() == 3) {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Report setRepeats success. */
            cout << "setRepeats successful." << endl;
        }
    }
    /* Report setRepeats failure. */
    else {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Declare to the user setRepeats failure. */
            cout << "setRepeats failure." << endl;
        }
        /* Update test status variable to false. */
        passed = false;
    }

    /* Check if verbose mode is on. */
    if(this->getVerbose()) {
        /* Declare to the user the current test. */
        cout << "Testing getFilename." << endl;
    }
    /* Set filename to newFilename = "../numbers.txt". */
    this->getFilename();
    /* Check if getFilename is successful. */
    if(this->getFilename() == "../numbers.txt") {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Report getFilename success. */
            cout << "getFilename successful." << endl;
        }
    }
    /* Report getFilename failure. */
    else {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Declare to the user getFilename failure. */
            cout << "getFilename failure." << endl;
        }
        /* Update test status variable to false. */
        passed = false;
    }

    /* Check if verbose mode is on. */
    if(this->getVerbose()) {
        /* Declare to the user the current test. */
        cout << "Testing setFilename." << endl;
    }
    /* Set repeats to newFilename = "../n.txt". */
    this->setFilename(newFilename);
    /* Check if setFilename is successful. */
    if(this->getFilename() == "../n.txt") {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Report setFilename success. */
            cout << "setFilename successful." << endl;
        }
    }
    /* Report setFilename failure. */
    else {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Declare to the user setFilename failure. */
            cout << "setFilename failure." << endl;
        }
        /* Update test status variable to false. */
        passed = false;
    }



    /** Verify class constructors pass testing. */

    /* Check if verbose mode is on. */
    if(this->getVerbose()) {
        /* Declare to the user the current phase of testing. */
        cout << "Testing constructors." << endl;
    }



    /* Check if verbose mode is on. */
    if(this->getVerbose()) {
        /* Declare to the user the current test. */
        cout << "Testing default constructor." << endl;
    }
    /* Generate new Algorithms object using the default constructor. */
    auto b = Algorithms();
    /* Check if fields initialize successfully. */
    if(!b.getVerbose()) {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Declare to the user successful construction. */
            cout << "Default constructor success." << endl;
        }
    }
    /* Fields did not initialize successfully. */
    else {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Declare to the user construction failure. */
            cout << "Default constructor failure." << endl;
        }
        /* Set test passed variable to false. */
        passed = false;
    }


    /* Check if verbose mode is on. */
    if(this->getVerbose()) {
        /* Declare to the user the current test. */
        cout << "Testing constructor integer start." << endl;
    }
    /* Generate new Algorithms object using the start initialization constructor. */
    auto c = Algorithms(newStart);
    /* Check if fields initialize successfully. */
    if(c.getStart() == -1) {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Declare to the user successful construction. */
            cout << "Constructor integer start initialization success." << endl;
        }
    }
    /* Fields did not initialize successfully. */
    else {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Declare to the user construction failure. */
            cout << "Constructor integer start initialization failure." << endl;
        }
        /* Set test passed variable to false. */
        passed = false;
    }


    /* Check if verbose mode is on. */
    if(this->getVerbose()) {
        /* Declare to the user the current test. */
        cout << "Testing constructor string filename." << endl;
    }
    /* Generate new Algorithms object using the start initialization constructor. */
    auto d = Algorithms(newFilename);
    /* Check if fields initialize successfully. */
    if(d.getFilename() == "../n.txt") {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Declare to the user successful construction. */
            cout << "Constructor string filename initialization success." << endl;
        }
    }
    /* Fields fail to initialize. */
    else {
        /* Set test passed variable to false. */
        passed = false;
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Declare to the user construction fail. */
            cout << "Constructor string filename initialization failure." << endl;
        }
    }



    /* Check if verbose mode is on. */
    if(this->getVerbose()) {
        /* Declare to the user the current test. */
        cout << "Testing constructor integer field start and end initialization." << endl;
    }
    /* Generate new Algorithms object using the integer field start and end initialization constructor. */
    auto e = Algorithms(newStart, newEnd);
    /* Check if fields initialize successfully. */
    if(e.getStart() == -1 && e.getEnd() == 256) {
        if(this->getVerbose()) {
            /* Declare to the user successful construction. */
            cout << "Constructor integer field start and end initialization success." << endl;
        }
    }
    /* Verbose mode is off. */
    else {
        if(this->getVerbose()) {
            /* Declare to the user successful construction. */
            cout << "Constructor integer field start and end initialization failure." << endl;
        }
        /* Set test passed variable to false. */
        passed = false;
    }


    /* Check if verbose mode is on. */
    if(this->getVerbose()) {
        /* Declare to the user the current test. */
        cout << "Testing integer field start, end, and string filename initialization constructor." << endl;
    }
    /* Generate new Algorithms object using the integer field start, end, and string filename initialization constructor. */
    auto f = Algorithms(newStart, newEnd, newFilename);
    /* Check if fields initialize successfully. */
    if(f.getStart() == -1 && f.getEnd() == 256 && f.getFilename() == "../n.txt") {
        if(this->getVerbose()) {
            /* Declare to the user successful construction. */
            cout << "Constructor integer field start, end, and string filename initialization success." << endl;
        }
    }
    /* Verbose mode is off. */
    else {
        if(this->getVerbose()) {
            /* Declare to the user successful construction. */
            cout << "Constructor integer field start, end, and string filename initialization failure." << endl;
        }
        /* Set test passed variable to false. */
        passed = false;
    }


    /* Check if verbose mode is on. */
    if(this->getVerbose()) {
        /* Declare to the user the current test. */
        cout << "Testing integer field start, end, and repeats initialization constructor." << endl;
    }
    /* Generate new Algorithms object using the integer field start, end, and repeats initialization constructor. */
    auto g = Algorithms(newStart, newEnd, newRepeats);
    /* Check if fields initialize successfully. */
    if(g.getStart() == -1 && g.getEnd() == 256 && g.getRepeats() == 3) {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Declare to the user successful construction. */
            cout << "Constructor integer field start, end, and repeats initialization success." << endl;
        }
    }
    /* Set passed variable to false */
    else {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Declare to the user failed construction. */
            cout << "Constructor integer field start, end, and repeats initialization failure." << endl;
        }
        /* Set test passed variable to false. */
        passed = false;
    }


    /* Check if verbose mode is on. */
    if(this->getVerbose()) {
        /* Declare to the user the current test. */
        cout << "Testing integer field start, end, and repeats initialization constructor." << endl;
    }
    /* Generate new Algorithms object using the integer field start, end, and repeats initialization constructor. */
    auto h = Algorithms(newStart, newEnd, newRepeats, newFilename);
    /* Check if fields initialize successfully. */
    if(h.getStart() == -1 && h.getEnd() == 256 && h.getRepeats() == 3 && h.getFilename() == "../n.txt") {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Declare to the user successful construction. */
            cout << "Constructor integer field start, end, repeats, and string filename initialization success." << endl;
        }
    }
    /* Set passed variable to false */
    else {
        /* Check if verbose mode is on. */
        if(this->getVerbose()) {
            /* Declare to the user failed construction. */
            cout << "Constructor integer field start, end, repeats and string filename initialization  fail." << endl;
        }
        /* Set test passed variable to false. */
        passed = false;
    }



    /** Verify algorithms pass testing criteria. */

    /* Fill sequence with an ordered set of integers from start to end. */
    integerArray(start, end, sequence);
    /* Fill random with an unordered set of integers without duplicates selected from start to end. */
    randomIntegerArray(start, end, random);
    /* Fill duplicates with an ordered set of integers with repeats number of duplicates from start to end. */
    duplicatesIntegerArray(start, end, repeats, duplicates);
    /* Fill primes with an ordered set of prime integers. */
    vector<int> primes = sieveOfAtkin(2000);
    /* Print out the three integer arrays to terminal. */
    outputTerminal(sequence, random, duplicates, primes, size);
    /* Write the information to a file. */
    writeArray(filename, sequence, random, duplicates, primes, size);

    /** Check if the algorithms class passed all test cases. */
    if(passed && this->getVerbose()) {
        /* Declare to the user that the algorithms class passed all test cases. */
        cout << "Algorithms class passed all test cases." << endl;
    }
}