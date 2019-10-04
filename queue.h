//
// Created by PC on 9/30/2019.
//

#ifndef GOOGLEPLAYAPPS_QUEUE_H
#define GOOGLEPLAYAPPS_QUEUE_H

#include <iostream>
#include <vector>
#include "node.h"

using namespace std;

/*
 * Queue class
 * push to back of Queue
 * pop from front of Queue
 * keep track of the front and back Node with pointers
 * Nodes are in a doubly linked list with Euler Tour potential.
 */

template<typename Object>
class Queue {
private:
    // Create a pointer at the front and back of the queue
    Node<Object>* front = nullptr;
    Node<Object>* back = nullptr;
    vector<Node<Object>*> eulerTour;

public:
    // Constructor
    Queue() = default;

    // Deconstructor / Destructor
    // Automatically called when the Queue object is destroyed
    ~Queue() {
        // Delete all remaining Nodes in the Queue
        while (front != nullptr) {
            dequeue();
        }
        delete front;
        for(Node<Object>* o : eulerTour) {
            delete o;
        }
    }

    // enqueue
    void enqueue(Object item) {
        // Create a container node for the object item.
        if (back != nullptr) {
            // Have the new Node point to the front
            // Use the * to dereference back to get the Node it points to
            // Creating a new node will allocate heap memory to store the Node
            auto newNode = new Node<Object>(item, *back->getNext());
            // Connect the back of the queue
            back->getNext()->setNext(*newNode);
            // Move the back pointer to the back of the queue
            back->setNext(*newNode);
            // Mark every node with the eulerTour vector
            eulerTour.push_back(newNode);
        }
        else {
            // Creating a new Node will allocate heap memory to store the Node
            auto* newNode = new Node<Object>(item);
            // Creating a blank node for the front of the queue
            auto* frontNode = new Node<Object>(item);
            // Creating a blank node for the back of the queue
            auto* backNode = new Node<Object>(item);
            // Set front to a node
            front = frontNode;
            // Set back to a node
            back = backNode;
            // Set next node for the front of the queue to the new node
            front->setNext(*newNode);
            // Set next node for the back of the queue to the new node
            back->setNext(*newNode);
            // Mark every node with the eulerTour vector
            eulerTour.push_back(newNode);
        }
    }

    // dequeue
    Object dequeue() {
        // Check if there is a Node to pop
        if (front != nullptr) {
            // Retrieve node to return
            Node<Object> *returnVal = front->getNext();
            // Update front pointer
            front->setNext(*front->getNext()->getNext());
            // Store the object in the node
            Object returnObject = returnVal->getItem();
            // The delete keyword is used with a pointer to deallocate
            // the heap memory it points to
            delete returnVal;
            // return the Object from the front of the Queue
            return returnObject;
        } else {
            // The Queue is empty. Return default object.
            return nullopt;
        }
    }

    // Return true if the item is in the Queue; return false otherwise.
    // Replacing the euler tour with a concurrent access object will make the isThere function O(1) complexity
    bool isThere(Object item) {
        Node<Object>* topCopy = front;
        // iterate through the Nodes in the Queue
        while (topCopy != back) {
            if (topCopy->getItem() == item) {
                // We found the item in the Queue
                return true;
            }
            // Update topCopy to point to the next Node in the Queue
            topCopy = topCopy->getNext();
        }
        // The item is not in the Queue
        return false;
    }

    // Get the number of objects in the queue
    int getSize() {
        Node<Object>* topCopy = front;
        int count = 0;
        while(front != back) {
            topCopy = topCopy->getNext();
            ++count;
        }
        return count;
    }

    // Check if two nodes contain the same object
    friend bool operator == (Node<Object> &lhs, Node<Object> &rhs) {
        return (lhs.getNext() == rhs.getPrev() || lhs.getPrev() == rhs.getNext());
    }

};

void testQueueClass() {

}

#endif //GOOGLEPLAYAPPS_QUEUE_H
