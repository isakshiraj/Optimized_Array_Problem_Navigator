# 🚀 Optimized Array Problem Navigator

> **A C++ Console-Based Tool to Explore Array Problems with Optimal Time & Space Complexities using Object-Oriented Programming**

---

## 📌 Overview

**Optimized Array Problem Navigator** is a console-based project designed to simulate categorized array problem sets while showcasing optimal time and space complexities. This tool is crafted to demonstrate **strong object-oriented programming (OOP) principles**, making it not just educational for DSA learning but also technically sound and resume-worthy.

This simulator provides a structured approach to viewing commonly asked array-based DSA problems from different categories — like Two Pointer, Bit Manipulation, Kadane's Algorithm, and more — helping learners focus on **efficiency and pattern recognition**.

---

## 🎯 Key Features

* ✅ Explore **17 categorized** array problem types.
* ✅ Displays only **optimal time and space complexity** for each problem.
* ✅ Designed using core **OOP pillars**:

  * **Abstraction** (via abstract base class `ArrayBase`)
  * **Encapsulation** (through encapsulated `Problem` class)
  * **Inheritance** (hierarchical inheritance of problem categories)
  * **Polymorphism** (runtime polymorphism for menu operations)
* ✅ Built entirely using **C++ (No file/database dependencies)**.
* ✅ Ideal for quick DSA revision and OOP demonstration in interviews.

---

## 🧠 Tech Stack

| Technology     | Purpose                            |
| -------------- | ---------------------------------- |
| **C++**        | Core development using OOP         |
| **OOP**        | Structure, design & logic modeling |
| **Console UI** | Simple CLI-based navigation        |

---

## 🗂️ Problem Categories Included

The following problem categories are covered:

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

Each category contains handpicked DSA problems with their **optimal complexities only**.

---

## 🏗️ Project Structure

```bash
├── main.cpp                 # Entry point with main menu
├── Problem class            # Encapsulates individual problems
├── ArrayBase class          # Abstract base class for problem sets
├── ArrayProblemSet class    # Shared behavior for all categories
├── Category subclasses      # Derived classes, each for a problem type
└── README.md                # You're here!
```

---

## 💡 OOP Concepts in Action

| OOP Pillar    | Implementation                                                                |
| ------------- | ----------------------------------------------------------------------------- |
| Abstraction   | Abstract class `ArrayBase` with pure virtual methods                          |
| Encapsulation | Class `Problem` hides internal state and provides public getters              |
| Inheritance   | Derived classes like `BitManipulationProblems` inherit from `ArrayProblemSet` |
| Polymorphism  | Virtual method `showProblemList()` and `showOptimalComplexity()` overridden   |

---

## 🖥️ How to Run

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

## 🧩 Sample Console Output

![Screenshot 2025-07-05 103304](https://github.com/user-attachments/assets/5b4297e8-0e95-47dd-aed7-e285dd9a646b)


---

## 📚 Use Cases

* 📌 Quick revision for DSA interviews
* 🎓 Teaching aid for Object-Oriented Programming
* 📁 Showcasing real-world application of OOP in C++
* 🧠 Strengthening complexity analysis mindset

---

## 📄 License

This project is open source and available under the [MIT License](LICENSE).

