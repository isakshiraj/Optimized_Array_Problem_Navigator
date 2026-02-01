# Optimized Array Problem Navigator

Optimized Array Problem Navigator is a C++ console-based application built using core object-oriented programming principles to present categorized array problems along with their optimal time and space complexities for efficient learning.

It provides a structured way to review commonly asked array-based DSA problems across multiple categories such as Two Pointer, Bit Manipulation, Kadane’s Algorithm, and more. The focus is on efficiency, pattern recognition, and complexity analysis.

---

## Key Features

- Covers **17 categorized array problem types**
- Displays **only optimal time and space complexity** for each problem
- Demonstrates core **OOP principles**:
  - **Abstraction** using an abstract base class `ArrayBase`
  - **Encapsulation** through a well-defined `Problem` class
  - **Inheritance** via category-specific derived classes
  - **Polymorphism** using virtual function overriding
- Implemented entirely in **C++**
- No file system or database dependency
- Suitable for **DSA revision** and **OOP demonstration in interviews**

---

## Tech Stack

| Technology | Purpose |
|----------|---------|
| C++ | Core development using OOP |
| OOP | Design, structure, and logic modeling |
| Console UI | Command-line based navigation |

---

## Problem Categories Included

1. Bit Manipulation  
2. Simple Traversal  
3. Math Operation + Traversal  
4. Sorting + Traversal  
5. Unordered Set + Traversal  
6. Two-Pointer Approach  
7. Sorting + Pointers  
8. Reverse + Traversal  
9. Stock Buy and Sell  
10. Dutch National Flag Algorithm  
11. Moore’s Voting Algorithm  
12. Matrix-Based Problems  
13. Merge Sort Advanced  
14. Prefix Sum + Hashmap  
15. Prefix XOR + Hashmap  
16. Kadane’s Algorithm  
17. Subarray Problems  

Each category contains selected DSA problems along with **only their optimal time and space complexities**.

---

## OOP Concepts in Action

| OOP Pillar    | Implementation                                                                |
| ------------- | ----------------------------------------------------------------------------- |
| Abstraction   | Abstract class `ArrayBase` with pure virtual methods                          |
| Encapsulation | Class `Problem` hides internal state and provides public getters              |
| Inheritance   | Derived classes like `BitManipulationProblems` inherit from `ArrayProblemSet` |
| Polymorphism  | Virtual method `showProblemList()` and `showOptimalComplexity()` overridden   |

---

## How to Run

1. Clone this repository:

   ```bash
   git clone https://github.com/your-username/Optimized-Array-Problem-Navigator.git
   cd Optimized-Array-Problem-Navigator
   ```

2. Compile and run the program:

   ```bash
   g++ home.cpp -o home
   ./home
   ```

3. Follow the console instructions to navigate through categories.

---

## Sample Console Output

![Screenshot 2025-07-05 103304](https://github.com/user-attachments/assets/5b4297e8-0e95-47dd-aed7-e285dd9a646b)

---

## Use Cases

* Quick revision for DSA interviews
* Teaching aid for Object-Oriented Programming
* Showcasing real-world application of OOP in C++
* Strengthening complexity analysis mindset

