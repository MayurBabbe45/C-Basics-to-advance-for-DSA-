# Week 2 Teaching Notes — Functions, Arrays, and Strings (C++)

---

# Module Goals

By the end of Week 2, students should be able to:

* Break programs into reusable functions
* Work with 1D and 2D arrays
* Manipulate strings and character arrays
* Understand how algorithms scale using Big O notation
* Solve beginner-level array and string problems confidently

This week is critical because it transitions students from writing simple sequential programs to designing reusable logic and handling collections of data efficiently.

---

# 1. Conceptual Overview

---

# A. Functions

## Definition

A function is a reusable block of code designed to perform a specific task.

---

## Real-World Analogy

Think of a function like a coffee machine:

* You provide inputs (coffee beans, milk, sugar)
* The machine processes them
* It returns output (coffee)

Similarly:

* Inputs → parameters
* Processing → function body
* Output → return value

---

# Key Concepts

## 1. Parameters

Variables passed into a function.

Example:

```cpp id="h2kn2f"
int add(int a, int b)
```

`a` and `b` are parameters.

---

## 2. Return Type

Defines what type of value the function sends back.

Example:

```cpp id="0h8hsv"
int add()
```

Returns an integer.

---

## 3. Scope

### Local Scope

Variables declared inside a function exist only there.

### Global Scope

Variables declared outside all functions can be accessed everywhere.

---

# Why Functions Matter

* Reduce code repetition
* Improve readability
* Simplify debugging
* Enable modular programming

---

# B. Arrays

## Definition

An array stores multiple values of the same data type in contiguous memory locations.

---

## Real-World Analogy

Think of an apartment building:

* Each apartment has a number (index)
* Each apartment stores a resident (value)

---

# 1D Arrays

Store values in a single row.

Example:

```cpp id="p1d3l0"
int arr[5] = {1,2,3,4,5};
```

---

# 2D Arrays

Store data in rows and columns like a matrix.

Example:

```cpp id="m1d4z0"
int matrix[2][3];
```

---

# Why Arrays Matter

Arrays are the foundation of:

* Searching
* Sorting
* Matrices
* Dynamic Programming
* Many advanced data structures

---

# C. Strings and Character Arrays

---

# Character Array

Traditional C-style string.

Example:

```cpp id="y0apg7"
char name[] = "Mayur";
```

Ends with:

```cpp id="fy7i3r"
'\0'
```

called the null character.

---

# String Class

Modern C++ string object.

Example:

```cpp id="g23spk"
string name = "Mayur";
```

---

# Why Strings Matter

Strings are heavily used in:

* Input processing
* Searching algorithms
* Pattern matching
* Interview problems

---

# D. Introduction to Big O Time Complexity

## Definition

Big O measures how runtime grows as input size increases.

---

# Real-World Analogy

Suppose you search for a name:

* Checking one-by-one → slower for large lists
* Using a sorted phonebook → faster

Big O helps compare algorithm efficiency.

---

# Common Complexities

| Complexity | Meaning                |
| ---------- | ---------------------- |
| O(1)       | Constant time          |
| O(n)       | Linear time            |
| O(log n)   | Logarithmic            |
| O(n²)      | Nested loop complexity |

---

# Example

Linear Search:

f(n)=n

Worst case:

* traverse entire array

---

# 2. Key Syntax & Patterns

---

# A. Functions

## Function Declaration

```cpp id="jlwm91"
return_type function_name(parameters) {
    // code
}
```

---

# Example — Function with Parameters

```cpp id="jlk8ys"
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {

    int result = add(5, 3);

    cout << result;

    return 0;
}
```

---

# Pass by Value

```cpp id="h17u5w"
void change(int x) {
    x = 100;
}
```

Original variable remains unchanged.

---

# Pass by Reference

```cpp id="pj8j0m"
void change(int &x) {
    x = 100;
}
```

Original variable changes.

---

# B. Arrays

---

# 1D Array Traversal

```cpp id="jlwmcz"
for(int i = 0; i < n; i++) {
    cout << arr[i];
}
```

---

# 2D Array Access

```cpp id="gnlbmw"
int matrix[2][3] = {
    {1,2,3},
    {4,5,6}
};

cout << matrix[1][2];
```

Output:

```cpp id="km2z4l"
6
```

---

# 2D Traversal Pattern

```cpp id="4huwj9"
for(int i = 0; i < rows; i++) {

    for(int j = 0; j < cols; j++) {
        cout << matrix[i][j];
    }
}
```

---

# C. Strings

---

# String Traversal

```cpp id="n1u5od"
string s = "hello";

for(int i = 0; i < s.length(); i++) {
    cout << s[i];
}
```

---

# Character Array Traversal

```cpp id="21gtl3"
char str[] = "hello";

for(int i = 0; str[i] != '\0'; i++) {
    cout << str[i];
}
```

---

# Reverse String

```cpp id="19m91g"
reverse(s.begin(), s.end());
```

---

# D. Complexity Patterns

---

# Single Loop

```cpp id="fhs5o6"
for(int i = 0; i < n; i++)
```

Time Complexity:

O(n)

---

# Nested Loop

```cpp id="bh2k57"
for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++)
```

Time Complexity:

O(n^2)

---

# 3. Problem-Solving Strategies

---

# Problem 1 — Find Maximum/Minimum in Array

---

# Logic

Traverse array while tracking largest/smallest value seen so far.

---

# Time Complexity

O(n)

---

# Algorithm Steps

1. Initialize `max = arr[0]`
2. Traverse array
3. Compare each element
4. Update max if larger value found
5. Print result

---

# Problem 2 — Linear Search

---

# Logic

Check each element sequentially until target is found.

---

# Time Complexity

O(n)

---

# Algorithm Steps

1. Start from index 0
2. Compare each element with target
3. If found → return index
4. If traversal ends → not found

---

# Problem 3 — Frequency Count

---

# Logic

Count how many times each element appears.

---

# Time Complexity

Naive approach:

O(n^2)

Using hashmap:

O(n)

---

# Algorithm Steps

1. Traverse array
2. Store counts in map
3. Increment frequency for repeated values
4. Print frequencies

---

# Problem 4 — Reverse Array

---

# Logic

Swap elements from both ends moving inward.

---

# Time Complexity

O(n)

---

# Algorithm Steps

1. Set `start = 0`
2. Set `end = n-1`
3. Swap elements
4. Move pointers inward
5. Stop when pointers cross

---

# Problem 5 — Matrix Addition

---

# Logic

Add corresponding elements of two matrices.

---

# Time Complexity

O(rows \times cols)

---

# Algorithm Steps

1. Traverse rows
2. Traverse columns
3. Add corresponding elements
4. Store in result matrix

---

# Problem 6 — String Palindrome

---

# Logic

Compare characters from start and end.

---

# Time Complexity

O(n)

---

# Algorithm Steps

1. Set two pointers
2. Compare characters
3. If mismatch → not palindrome
4. Move inward
5. If all match → palindrome

---

# Problem 7 — Count Vowels and Consonants

---

# Logic

Traverse string and classify characters.

---

# Time Complexity

O(n)

---

# Algorithm Steps

1. Traverse string
2. Check if alphabet
3. Check vowel condition
4. Increment counters

---

# 4. Pedagogical Tips

---

# Topic: Functions

## Common Pitfall

Students confuse parameters and arguments.

---

## Teaching Tip

Use a food-delivery analogy:

* Parameters → empty boxes in restaurant
* Arguments → actual food delivered

---

# Topic: Arrays

## Common Pitfall

Index out-of-bounds access.

Example:

```cpp id="b3h3al"
arr[5]
```

in size 5 array.

---

## Teaching Tip

Draw array boxes visually on board:

```text
Index: 0 1 2 3 4
Value: 5 8 2 9 1
```

Visual learning helps beginners significantly.

---

# Topic: 2D Arrays

## Common Pitfall

Students mix row and column indexing.

---

## Teaching Tip

Relate matrices to Excel sheets:

* row → horizontal
* column → vertical

---

# Topic: Strings

## Common Pitfall

Confusing character arrays with string objects.

---

## Teaching Tip

Show memory layout:

```text
H e l l o \0
```

Explain null terminator clearly.

---

# Topic: Time Complexity

## Common Pitfall

Students focus only on getting output.

---

## Teaching Tip

Ask:
“What happens if input becomes 1 million?”

This naturally introduces efficiency thinking.

---

# Recommended Teaching Flow for Week 2

| Day   | Topic                |
| ----- | -------------------- |
| Day 1 | Functions            |
| Day 2 | Arrays               |
| Day 3 | 2D Arrays            |
| Day 4 | Strings              |
| Day 5 | Time Complexity      |
| Day 6 | Practice Problems    |
| Day 7 | Revision + Mini Test |

---

# Suggested Mini Project

## Student Record Manager

Features:

* Store marks using arrays
* Use functions for operations
* Calculate average/max/min
* Search student by roll number

This project integrates all Week 2 concepts together effectively.
