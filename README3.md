# Project 3 - Tree Data Structure Analysis
##  1. Introduction
Project 3 requires students to analyze the structure of three simple tree data structures using objects from their base class. For this project Justin Adams uses the GooglePlayStore applications csv file from Kaggle: Your Home for Data Science. https://www.kaggle.com/.:
### Splay Tree
The Splay Tree uses the localization property to speed up recurrent search times. Given that the tree contains n objects, searching for an object in a Splay Tree in the best case scenario takes O(1), which is equivalent to finding the object at the root node. On average searching for an object in a Splay Tree takes O(log(n)), which is a depth approximately equal to log(n). Due to the fact that Splay Trees can become unbalanced, the worst case search time is O(n), where n is the number of objects. However, when the number of objects is large the chances of creating this worst case scenario decreases exponentially. The primary use case for a Splay Tree is when the same object is requested repeatedly, which means the search time for finding the object the first time is O(log(n)). If the next search is the same object, then the search time is O(1).
### Adelson-Velsky and Landis Tree
The Adelson-Velsky and Landis (AVL) Tree trade off computation time during re-ordering events to reduce worst case search time. In the best case the search time is O(1), on average searching for an object takes O(log(n)), and in the worst case the search time is also O(log(n)). However, this decreased worst case search time optimization comes at a cost. When adding or removing an element, the tree sacrifices computation time to maintain the AVL tree ordering property. The AVL ordering property requires that objects be in Binary Tree order (left child is less than parent, right child is greater than parent).
### Binary Tree (Naive)
The Binary Tree is the simplest tree data structure. In the best case the search time is O(1), on average searching for an object takes O(log(n)), and in the worst case O(n). Due to its simplicity, it is vulnerable to becoming unbalanced. However, probability theory states that the smaller a binary tree is, the more vulnerable it is to the worst case O(n) run time.
## 2. Procedure
1. Store n custom data objects in a vector, where the number of objects n >= 1000.
2. Create at least integers [0 - n-1] in sequence, in a random order, and repeats each integer 5 times [0, 0, 0, 0, 0, 1 ... , n-2, n-1 , n-1 , n-1 , n-1, n-1]
3. Store the objects in the trees mentioned above.
4. Overload the <, >, and == operator for your custom class.
5. Pass by reference the integer depth initialized at -1, increment the value upon entering the find function, increment the value upon traversing a new depth in the tree.
6. Store the depth value and reset its value to -1.
7. Search for objects from the original vector using the different integer lists generated
8. Plot graphs of the search depths for each tree above. Do the properties of each data structure appear as emergent properties in the graphed data? Yes. See Analysis Section.
9. Create three benign objects in your vector and describe what happens when searching for these objects.
10. Cite all code and idea sources.
## 3. Data
The following graphs collate 10843 node search requests for the Splay Tree (yellow), A