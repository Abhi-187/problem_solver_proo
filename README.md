# Competitive Programming Utilities and Macros Guide

This guide provides explanations and examples for various utilities and macros commonly used in competitive programming.

## Overloadings:

- **Pair Output (`<<`):**
  - Explanation: Overloads the output operator `<<` for pairs to print the pair elements.
  - Example: `cout << make_pair(1, 2);` // Output: (1, 2)

- **Container Output (`<<`):**
  - Explanation: Overloads the output operator `<<` for containers (excluding strings) to print container elements.
  - Example: `cout << vector<int>{1, 2, 3};` // Output: {1, 2, 3}

- **Vector Input (`>>`):**
  - Explanation: Overloads the input operator `>>` for vectors to input elements into a vector.
  - Example: `vector<int> vec; cin >> vec;` // Input: 1 2 3

## Macros:

- **`clr(x)`:**
  - Explanation: Macro to set all elements of an array to zero.
  - Example: `int arr[5]; clr(arr);` // Sets all elements of arr to 0

- **`ll`, `ld`:** 
  - Explanation: Macros for `long long` and `long double` data types.

- **`pb`:** 
  - Explanation: Macro to push elements into a container using `push_back`.
  - Example: `vector<int> v; v.pb(1);` // Adds 1 to the vector

- **`mp`:** 
  - Explanation: Macro to create a pair using `make_pair`.
  - Example: `auto p = mp(1, 2);` // Creates a pair (1, 2)

- **Type Definitions:** 
  - Explanation: Typedefs for commonly used container types.

- **`sz(x)`:** 
  - Explanation: Macro to get the size of a container.
  - Example: `vector<int> v = {1, 2, 3}; int size = sz(v);` // size is 3

- **`all(X)`, `rall(X)`:** 
  - Explanation: Macros to iterate over all elements and reverse elements of a container.
  - Example: `cout << all(v);` // Output: {1, 2, 3}

## Utilities:

- **`loop(i, a, b)`:** 
  - Explanation: Macro to iterate from `a` to `b-1`.
  - Example: `loop(i, 0, 5) { cout << i << " "; }` // Output: 0 1 2 3 4

- **`loopd(i, a, b)`:** 
  - Explanation: Macro to iterate in reverse from `a` to `b+1`.
  - Example: `loopd(i, 5, 0) { cout << i << " "; }` // Output: 5 4 3 2 1

- **`loopit(it, a)`:** 
  - Explanation: Macro to iterate over elements of a container using an iterator.
  - Example: `vector<int> v = {1, 2, 3}; loopit(it, v) { cout << *it << " "; }` // Output: 1 2 3

- **`pr(x)`:** 
  - Explanation: Macro to print the value of a variable.
  - Example: `int num = 42; pr(num);` // Output: num = 42

- **`prar(x, n)`:** 
  - Explanation: Macro to print the elements of an array.
  - Example: `int arr[5] = {1, 2, 3, 4, 5}; prar(arr, 5);` // Output: arr = 1 2 3 4 5

- **`prvec(x)`:** 
  - Explanation: Macro to print the elements of a container.
  - Example: `vector<int> v = {1, 2, 3}; prvec(v);` // Output: v = 1 2 3

- **`prpair(x)`:** 
  - Explanation: Macro to print the values of a pair.
  - Example: `pair<int, int> p = make_pair(1, 2); prpair(p);` // Output: p = (1, 2)

- **`prstr(x)`:** 
  - Explanation: Macro to print a string.
  - Example: `string s = "Hello"; prstr(s);` // Output: s = Hello
