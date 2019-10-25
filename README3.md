# Project 3 - Tree Data Structure Analysis

##  1. Introduction

Project 3 requires students to analyze the structure of three simple tree data structures using objects from their base class. For this project Justin Adams uses the Google Play stor applications .csv file from https://www.kaggle.com/.

### Splay Tree

The Splay Tree uses the localization property to speed up recurrent search times. Given that the tree contains n objects, searching for an object in a Splay Tree in the best case scenario takes O(1), which is equivalent to finding the object at the root node. On average searching for an object in a Splay Tree takes O(log(n)), which is a depth approximately equal to log(n). Due to the fact that Splay Trees can become unbalanced, the worst case search time is O(n), where n is the number of objects. However, when the number of objects is large the chances of creating this worst case scenario decreases exponentially. The primary use case for a Splay Tree is when the same object is requested repeatedly, which means the search time for finding the object the first time is O(log(n)). If the next search is the same object, then the search time is O(1).

### Adelson-Velsky and Landis Tree

The Adelson-Velsky and Landis (AVL) Tree trades off a negligible amount of computation time during re-ordering events to reduce worst case search time. In the best case the search time is O(1), on average searching for an object takes O(log(n)), and in the worst case the search time also takes O(log(n)). However, this decreased worst case search time optimization comes at a small cost. When adding or removing an element to an AVL Tree, the tree sacrifices constant computation time to maintain the AVL Tree height ordering property. The height ordering property requires every parent's left and right subtree to be within ±1 depth. Thus, the time to add or remove an object remains O(log(n)), but has a negligible constant added to the run time of the tree's add and remove operations.

### Binary Tree (Naive)

The Binary Tree is the simplest tree data structure. The only function it maintains is the Binary Search Tree ordering property, which reduces average search time to O(log(n)) for all trees of this class. In the best case the search time is O(1) and in the worst case O(n). Due to its simplicity, the Binary Tree is vulnerable to becoming unbalanced. However, probability theory states that the larger a binary tree is, the less vulnerable it is to the worst case O(n) run time.

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

The following graphs collate 10843 node search requests for the Splay Tree (yellow), AVL Tree (green), and Splay Tree (Blue).
## 4. Analysis

### Splay Tree

The first emergent property is in the Splay Tree Duplicate Integer Sequence Graph. Since the Splay Tree uses the property of localization to improve search time for recurrent requests, the duplicate integer sequence contains exactly 4/5 O(1) item requests at depth = 0. Many other requests are at values very near the top of the tree depth = 1, 2, 3, and 4. This localization property diminshes at a depth = 5. The remaining searches are scattered between depths of log(n) to 3 * log(n), where n = 10,843 objects. Thus, log(n) = 13.4. The worst case search depth for the Splay Tree in the integer sequence, random sequence, and prime sequence where depth = 34. This is the worst case search time for all of the Trees.

### AVL Tree

Otherwise, dispersion is uniform across the integer and random sequence searches. Prime integers are sparse so it is important to note that for every tree data structure they demonstrate search times approaching worst case conditions without intentionally creating the worst case condition.
The AVL Tree operates robustly on every integer sequence and it maintains a maximum depth 15≈log(n) due to the height ordering property.

### Binary Tree

The Binary Tree demonstrates the value of using the Binary Tree ordering property as a data structure in that search depths in this lab experiment did not increase beyond 3 * log(n). However, the Binary Search Tree performs worse than the AVL Tree obtaining a maxmium search depth = 31. When compared to the Splay Trees worst case performance of depth = 34, the Binary Search Tree beats the Splay tree.

## 5. Conclusion

This experiment demonstrates empirically the emergent mathematical properties of the three chosen tree data structures. The Splay Tree is best suited for problems involving information locality, and where available memory is at a premium. The AVL tree is best suited when memory and performance are a priority. The Binary Tree should not be used other than as an intellectual exercise to begin learning about Tree Data Structures. Like Bubble Sort some ideas are meant to teach best practices through object lessons.

## 6. Bibliography

1. Kaggle: Your Home for Data Science. https://www.kaggle.com/. Accessed 24 Oct. 2019.
2. Atkin, A. O. L., and D. J. Bernstein. “Prime Sieves Using Binary Quadratic Forms.” Mathematics of Computation, vol. 73, no. 246, Dec. 2003, pp. 1023–31. Crossref, doi:10.1090/S0025-5718-03-01501-1.
3. OpenMP Exercise. https://computing.llnl.gov/tutorials/openMP/exercise.html. Accessed 24 Oct. 2019.

## 7. Appendix
### A. GooglePlayApps Source Code - Project 3
#### A.1 Applications.h by Justin Adams
#### A.2 googleplaystore.csv by Justin Adams
#### A.3 Algorithms.h by Justin Adams
#### A.4 algorithmsTest.cpp by Justin Adams
#### A.5 SplayTree.h by Professor Lisa Dion
#### A.6 AVLTree.h by Professor Lisa Dion
#### A.7 BinarySearchTree.h by Professor Lisa Dion
#### A.8 TreeSearchData.csv by Justin Adams
#### Tree Data Structure Analysis.ipynb by Justin Adams
