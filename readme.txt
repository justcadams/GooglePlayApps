# Project 2 Requirements & Report

It is recommended that you use the data and program from Project 1 as a starting point.

# Stack Class

## What is the Big-Oh complexity of the methods?
The Stack class contains the following methods:
Method Name         Complexity
constructor         O(1)
destructor          O(n)
push                O(1)
pop                 O(1)
isThere             O(n)
getSize             O(n)

Modifying the code using an Euler Tour would reduce all O(n) complexity to O(1).

Method Name         Complexity
constructor         O(1)
destructor          O(1)
push                O(1)
pop                 O(1)
isThere             O(1)
getSize             O(1)

This requires a separate field that doubles the number of pointers in the data structure. This is a concurrently accessible data structure known as a concurrent_unordered_map.

# Queue Class

## What is the complexity of each method?

Method Name         Complexity
constructor         O(1)
destructor          O(n)
push                O(1)
pop                 O(1)
isThere             O(n)
getSize             O(n)

Modifying the code using an Euler Tour would reduce all O(n) complexity to O(1).

Method Name         Complexity
constructor         O(1)
destructor          O(1)
push                O(1)
pop                 O(1)
isThere             O(1)
getSize             O(1)

This requires a separate field that doubles the number of pointers in the data structure. This is a concurrently accessible data structure known as a concurrent_unordered_map.

# Main function
  /
\/  Create three Queue objects: one of integers, one of strings, and one of a custom data type (ideally the type you created in Project 1).
  /
\/  Demonstrate that the Queue methods work correctly by calling methods on the objects and printing out to the console when appropriate.

  /
\/  Create a Queue object and a Stack object, both of the type you created in Project 1.

  /
\/  Print and push the first 10 objects from your vector (from Project 1) onto the Queue.

  /
\/  Pop the 10 objects off the Queue and push them onto the Stack.

  /
\/  Pop and print the 10 objects off the Stack.

## What is the order of the objects before and after adding them to the Queue and Stack? When and why did it change?
### The order of the integers before pushing them on to the queue is the following: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
### The order of the integers after popping them off the queue is the following: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
### The order of the integers before pushing them on the stack is the following: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
### The order of the integers after popping them off the stack is the following: 9, 8, 7, 6, 5, 4, 3, 2, 1

#Testing
How can you demonstrate in your code that your Queue class works correctly? The main function tests the queue and stack class extensively. All of these functions have been ported in to a test suite for the queue and stack class.
How can you use the integer and string Queue objects to show this? The integer and string queue objects print out values as they enter and exit the queue and stack, which leads to an interpretation that the object is operating as it is designed.
