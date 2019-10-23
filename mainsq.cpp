//
// Created by PC on 9/30/2019.
//
#include "Stack.h"
#include "Queue.h"
#include "Applications.h"

int main() {
    vector<int> intVec = {0,1,2,3,4,5,6,7,8,9};
    vector<string> stringVec = {"Ha", "Ma", "Pa", "Sa", "Da", "Ba", "Ca", "Ra", "Ta", "Za"};
    vector<Applications> appsVec;
    string filename = "googleplaystore.csv";
    readApplicationsFromFile(filename, appsVec);
    // Create a stack of integers
    auto intStack = Stack<optional<int>>();
    // Create a stack of strings
    auto stringStack = Stack<optional<string>>();
    // Create a stack of apps
    auto appsStack = Stack<optional<Applications>>();
    // Create a queue of integers
    auto intQueue = Queue<optional<int>>();
    // Create a queue of strings
    auto stringQueue = Queue<optional<string>>();
    // Create a queue of apps
    auto appsQueue = Queue<optional<Applications>>();
    // Print and push 10 objects each
    for(int i : intVec) {
        intQueue.enqueue(i);
    }
    for(int i = 0; i < 10; ++i) {
        optional<int> temp = intQueue.dequeue();
        intStack.push(*temp);
    }
    for(string &i : stringVec) {
        stringQueue.enqueue(i);
    }
    for(int i = 0; i < 10; i++) {
        optional<string> temp = stringQueue.dequeue();
        stringStack.push(*temp);
    }
    for(int i = 0; i < 10; ++i) {
        cout << appsVec[i] << endl;
        appsQueue.enqueue(appsVec[i]);
    }
    for(int i = 0; i < 10; ++i) {
        optional<Applications> temp = appsQueue.dequeue();
        appsStack.push(*temp);
    }
    for(int i = 0; i < 10; i++) {
        cout << *appsStack.pop() << endl;
    }
    // Happy exit code
    exit(0);
}