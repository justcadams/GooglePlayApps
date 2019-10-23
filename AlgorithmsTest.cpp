/***************************************************************************************/
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
/***************************************************************************************/
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
/***************************************************************************************/
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
/***************************************************************************************/

#include "Algorithms.h"

int main() {
    const int size = 10840;
    auto alg = new Algorithms();
    alg->setStart(0);
    alg->setEnd(10840);
    vector<int> sequence;
    vector<int> random;
    vector<int> duplicates;
    vector<int> primes;
    alg->integerArray(0, 10840, sequence);
    alg->randomIntegerArray(0, 10840, random);
    alg->duplicatesIntegerArray(0, 10840, 5, duplicates);
    primes = alg->sieveOfAtkin(10840);
    Algorithms::outputTerminal(sequence, random, duplicates, primes, 10840);
}
