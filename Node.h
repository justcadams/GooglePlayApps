/**
 *  27 September 2019
 *  Functional neural network using a bipartite graph.
 *  Developed using sequential, non-concurrent access data structures.
 *  Created by Justin Adams, Jenna Blank, & Jordan Deso
 */

#ifndef GOOGLEPLAYAPPS_NODE_H
#define GOOGLEPLAYAPPS_NODE_H

#include <memory>
#include <thread>

/** Represents one node to be used in a linked list
    Contains data (object) and reference to next in list
*/

template<typename Object>
class Node {
private:
    Object item;
    // Store a pointer to the next Node
    Node<Object>* next;

public:

    /** Create new node with specified data
        Have it reference null
        @param newItem is data to added to new node
    */
    explicit Node(Object newItem) {
        item = newItem;
    }

    /** Create new node with specified data
        Have it reference nextNode
        @param newItem is data to added to new node
        @param nextNode is reference that new Node's next will hold
    */
    // Pass in the reference/address of the next Node
    Node(Object newItem, Node &nextNode) {
        item = newItem;
        // Store the memory address in the pointer
        next = &nextNode;
    }

    /**
     * Default Destructor
     * Ensure the pointer does not create memory leaks.
     */

    ~Node() {
        next = nullptr;
        delete next;
    }

    /** set data field (item) of Node
        @param newItem, to set item field to
    */
    void setItem(Object newItem) {
        item = newItem;
    } // end setItem

    /** get data field (item) of Node
        @return item field
    */
    Object getItem() {
        return item;
    }

    /** set next field of Node
        @param nextNode, to set next field to
    */
    void setNext(Node &nextNode) {
        next = &nextNode;
    }

    /** get next field of Node
        @return pointer to next Node
    */
    Node* getNext() {
        return next;
    }
};


#endif //GOOGLEPLAYAPPS_NODE_H