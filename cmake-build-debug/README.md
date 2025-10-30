# ⚙️ Implementation of Fundamental Algorithms (C++ Version)
**CS321: Algorithms Analysis and Design — Cairo University**

This project implements several **fundamental algorithms in C++**, focusing on the **Fibonacci Series**, **Search Algorithms**, and **Heap-based Structures**.  
It demonstrates multiple algorithmic paradigms — *Recursion, Divide and Conquer, and Dynamic Programming* — while comparing their performance and efficiency.

---

## 🎯 Overview
The project is divided into **three main tasks**, each representing a core concept in algorithm design and analysis:

1. **Fibonacci Series**
    - Recursive implementation
    - Matrix (Divide and Conquer) implementation
    - Dynamic Programming implementation

2. **Search Algorithms**
    - Sequential Search (Iterative and Recursive)
    - Binary Search (Iterative and Recursive)

3. **Heap, Priority Queue, and Heap Sort**
    - Heap construction and maintenance
    - Priority Queue implementation using Heap
    - Heap Sort algorithm

---

## ✨ Features & Requirements

### 🧮 Task 1: Fibonacci Series
Implements the `n`th Fibonacci number using three methods:
- **Recursive Approach:** Exponential time, simple base case logic.
- **Matrix Exponentiation:** Uses 2×2 matrix power for logarithmic time.
- **Dynamic Programming:** Stores computed values to reduce redundant calculations.

### 🔍 Task 2: Search Algorithms
Implements and compares two searching techniques:
- **Sequential Search:** Works on unsorted data.
- **Binary Search:** Requires sorted input, uses mid-value comparison.  
  Each implemented both *iteratively* and *recursively*.

### ⚙️ Task 3: Heap, Priority Queue & Heap Sort
- **Heap Class:** Supports `insert()`, `heapify()`, and extraction functions.
- **Priority Queue:** Uses Heap to manage priorities efficiently.
- **Heap Sort:** Sorts elements using repeated extraction from MaxHeap.

---

## 🛠️ Project Structure

| File | Description |
|------|--------------|
| `task1_fibonacci.cpp` | Contains Fibonacci algorithms (recursive, matrix, dynamic) |
| `task2_search.cpp` | Contains search algorithms (sequential, binary) |
| `task3_heap.cpp` | Implements heap, priority queue, and heap sort |
| `main.cpp` | Coordinates and executes all tasks |
| `README.md` | Documentation for the project |
