/***************************************************************************************//** LICENSE* Begin license text.** Copyright <18 October 2019> <Justin  C. Adams>* Permission is hereby granted, free of charge, to any person obtaining* a copy of this software and associated documentation files (the "Software"),* to deal in the Software without restriction, including without limitation the* rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell* copies of the Software, and to permit persons to whom the Software is furnished* to do so, subject to the following conditions:** The above copyright notice and this permission notice shall be included in all* copies or substantial portions of the Software.** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,* INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A* PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT* HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION* OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.** End license text.*//***************************************************************************************//** COPYRIGHT* Begin copyright text.** Created by Justin C. Adams 18 October 2019* FILE: Algorithms.cpp* DESCRIPTION:*     Contains all data structures and algorithms implemented by Justin C. Adams*     during the course of days working on computer programming. Implementation is*     modified to incorporate Open Source Multi-Processing from OpenMP Architecture*     Review Board.** End copyright text.*//***************************************************************************************//** IMPLEMENTATION & STYLE* Begin implementation text** IMPLEMENTATION* Code implementation uses OpenMP compiler contained in CygWin64 or MSys64/MinGW64* https://www.math.ucla.edu/~wotaoyin/windows_coding_cygwin.html* https://www.math.ucla.edu/~wotaoyin/windows_coding.html** STYLE* Code style based on David Blaise omp_hello.c* FILE: omp_hello.c* DESCRIPTION:*   OpenMP Example - Hello World - C/C++ Version*   In this simple example, the master thread forks a parallel region.*   All threads in the team obtain their unique thread number and print it.*   The master thread only prints the total number of threads.  Two OpenMP*   library routines are used to obtain the number of threads and each*   thread's number.* AUTHOR: Blaise Barney  5/99* LAST REVISED: 04/06/05** End implementation text*//***************************************************************************************/#include <random>#include <chrono>#include <iostream>#include <fstream>using namespace std;class Algorithms {private:    int start = 0;    int end = 255;    int repeats = 2;    string filename = "../numbers.txt";    bool verbose = false;public:    // Default Constructor    Algorithms();    /*     *  Requires:   @param start - Integer start for the beginning of array data.     *  Modifies:   @field start - Integer start for the beginning of array data.     *  Effects:    Algorithms initializes required parameters for all functions.    */    explicit Algorithms(int start);    /*     *  Requires:   @param filename - String filename for the end of array data.     *  Modifies:   @field filename - String filename for the end of array data.     *  Effects:    Algorithms initializes required parameters for all functions.    */    Algorithms(string &filename);    /*     *  Requires:   @param start - Integer start for the beginning of array data.     *              @param end - Integer end for the end of array data.     *  Modifies:   nothing     *  Effects:    Algorithms initializes required parameters for all functions.    */    Algorithms(int start, int end);    /*     *  Requires:   @param start - Integer start for the beginning of array data.     *              @param end - Integer end for the end of array data.     *  Modifies:   nothing     *  Effects:    Algorithms initializes required parameters for all functions.    */    Algorithms(int start, int end, string &filename);    /*     *  Requires:   @param start - Integer start for the beginning of array data.     *              @param end - Integer end for the end of array data.     *              @param repeats - Integer repeats sets the number of duplicates in array data.     *  Modifies:   nothing     *  Effects:    Algorithms initializes required parameters for all functions.    */    Algorithms(int start, int end, int repeats);    /*     *  Requires:   @param start - Integer start for the beginning of array data.     *              @param end - Integer end for the end of array data.     *              @param repeats - Integer repeats sets the number of duplicates     *              in array data for the duplicatesIntegerArray function.     *              @param filename - String filename sets the file name to write array data to.     *  Modifies:   nothing     *  Effects:    Algorithms initializes required parameters for all functions.    */    Algorithms(int start, int end, int repeats, string &filename);    /*     *  Default Deconstructor     */    ~Algorithms() = default;    /*     *  Requires:   nothing     *  Modifies:   nothing     *  Effects:    Tests the Algorithms class.    */    void testAlgorithms();    /*     *  Requires:   nothing     *  Modifies:   nothing     *  Effects:    @return start - Returns the integer start for the algorithms object.    */    int getStart();    /*     *  Requires:   @param start - Integer containing the new start value.     *  Modifies:   @field start - Integer containing the old start value.     *  Effects:    setStart - Sets the integer start for the algorithms functions.    */    void setStart(int start);    /*     *  Requires:   nothing     *  Modifies:   nothing     *  Effects:    @return end - Returns the integer start for the algorithms object.    */    int getEnd();    /*     *  Requires:   @param end - Integer containing the new end value.     *  Modifies:   @field end - Integer containing the old end value.     *  Effects:    setEnd - Sets the integer end for the algorithms functions.    */    void setEnd(int end);    /*     *  Requires:   nothing     *  Modifies:   nothing     *  Effects:    @return repeats - Returns the integer repeats for the algorithms object.    */    int getRepeats();    /*     *  Requires:   @param repeats - Integer containing the new repeats value.     *  Modifies:   @field repeats - Integer containing the old repeats value.     *  Effects:    setRepeats - Sets the integer repeats for the algorithms functions.    */    void setRepeats(int repeats);    /*     *  Requires:   nothing     *  Modifies:   nothing     *  Effects:    @return filename - Returns the string filename for the algorithms object.    */    string getFilename();    /*     *  Requires:   @param filename - String containing the new filename value.     *  Modifies:   @field filename - String containing the old filename value.     *  Effects:    setFilename - Sets the string filename for the algorithms function writeArray.    */    void setFilename(string &filename);    /*     *  Requires:   nothing     *  Modifies:   nothing     *  Effects:    @return verbose - Returns the bool verbose setting for the algorithms object.    */    bool getVerbose();    /*     *  Requires:   @param filename - Bool containing the new verbose setting.     *  Modifies:   @field repeats - Bool containing the old verbose setting.     *  Effects:    setVerbose - Sets the bool verbose setting for the algorithms function testAlgorithms.     *              testAlgorithms will print all status reports for the algorithms object.    */    void setVerbose(bool mode);    /*     *  Requires:   @param start - Start integer for array data.     *              @param end - End integer for array data.     *              @param vector<int> data - Vector of integers.     *  Modifies:   @param vector<unsigend int> data - Vector of integers.     *  Effects:    integerArray generates the numbers from start-end in parallel.    */    void integerArray(int start, int end, vector<int> &data);    /*     *  Requires:   @param start - Start integer for array data.     *              @param end - End integer for array data.     *              @param vector<int> data - Vector of integers.     *  Modifies:   @param vector<int> data - Vector of integers.     *  Effects:    randomIntegerArray generates the numbers from start-end in a random order in parallel.    */    void randomIntegerArray(int start, int end, vector<int> &data);    /*     *  Requires:   @param start - Integer start is the first number in array data.     *                             Integer start is the minuend of the divisor for calculating the end integer for array data.     *              @param end - Integer end is the subtrahend of the divisor for calculating the end integer for array data.     *              @param repeats - Integer repeats sets the number of duplicate integers in the array data.     *                               Integer repeats sets the divisor for calculating the end integer for array data.     *              @param vector<int> data - Vector of integers.     *  Modifies:   @param vector<int> data - Vector of integers.     *  Effects:    repeatsIntegerArray generates integers start - (start-end)/repeats with repeats duplicates in parallel.    */    void duplicatesIntegerArray(int start, int end, int repeats, vector<int> &data);    /*     *  Requires:   @param n - integer to use as the maximum value for a prime integer sieve.     *              @param *data - Integer array that will contain all prime numbers up to n.     *  Modifies:   @param *data - Integer array that will contain all prime numbers up to n.     *  Effects:    Creates a prime integer array.     */    vector<int> sieveOfAtkin(int n);    /*     *  Requires:   @param array1 - Integer array.     *              @param array2 - Integer array.     *              @param array3 - Integer array.     *              @param array4 - Array of integers of length size.     *              @param n - Integer size of the arrays.     *  Modifies:   @param *data - Integer array of size[n - m].     *  Effects:    repeatsIntegerArray generates integers start - (start-end)/repeats with repeats duplicates in parallel.    */    static void outputTerminal(vector<int> &array1, vector<int> &array2, vector<int> &array3, vector<int> &array4, int size);    /*     *  Requires:   @param filename - String containing the name of the file to write to.     *              @param array1 - Array of integers of length size.     *              @param array2 - Array of integers of length size.     *              @param array3 - Array of integers of length size.     *              @param array4 - Array of integers of length size.     *              @param n - Integer size of the arrays.     *  Modifies:   @param *data - Integer array size.     *  Effects:    writeArray - Writes or overwrites the file named filname with the three arrays using a csv format.    */    static void writeArray(string &filename, vector<int> array1, vector<int> array2, vector<int> array3, vector<int> array4, int size);};