//
// Created by PC on 9/29/2019.
//

#ifndef GOOGLEPLAYAPPS_STACK_H
#define GOOGLEPLAYAPPS_STACK_H

#include <optional>
#include "node.h"

using namespace std;

/*
 * Stack class
 * push to top of Stack
 * pop from top of Stack
 * keep track of the top Node with a pointer
 * Each Node points to the one below it.
 */

template<typename Object>
class Stack {
private:
    // Create a pointer to the top of the Stack
    Node<Object>* top;

public:
    // Constructor
    Stack() = default;

    // Deconstructor / Destructor
    // Automatically called when the Stack object is destroyed
    ~Stack() {
        // Delete all remaining Nodes in the Stack
        while (top != nullptr) {
            pop();
        }
    }

    // Push
    void push(Object item) {
        // Create a container node for the object item.
        if (top != nullptr) {
            // Have the new Node point to top
            // Use the * to dereference top to get the Node it points to
            // Creating a new node will allocate heap memory to store the Node
            auto* newNode = new Node<Object>(item, *top);
            // Update top to point at this new Node
            top = newNode;
        } else {
            // Creating a new Node will allocate heap memory to store the Node
            auto* newNode = new Node<Object>(item);
            // Update top to point at this new Node
            top = newNode;
        }
    }

    // Pop
    Object pop() {
        // Check if there is a Node to pop
        if (top != nullptr) {
            Node<Object> *returnVal = top;
            // Update top
            top = top->getNext();
            Object returnObject = returnVal->getItem();
            // The delete keyword is used with a pointer to deallocate
            // the heap memory it points to
            delete returnVal;
            // return the Object from the previous top of the Stack
            return returnObject;
        } else {
            // The Stack is empty. Return default object.
            return nullopt;
        }
    }

    // Return true if the item is in the Stack; return false otherwise.
    bool isThere(Object item) {
        Node<Object>* topCopy = top;
        // iterate through the Nodes in the Stack
        while (topCopy != nullptr) {
            if (topCopy->getItem() == item) {
                // We found the item in the Stack
                return true;
            }
            // Update topCopy to point to the next Node in the Stack
            topCopy = topCopy->getNext();
        }
        // The item is not in the Stack
        return false;
    }

    int getSize() {
        Node<Object>* topCopy = top;
        int count = 0;
        while(top != nullptr) {
            topCopy = topCopy->getNext();
            ++count;
        }
        return count;
    }

};

void testStackClass() {

}

#endif //GOOGLEPLAYAPPS_STACK_H
