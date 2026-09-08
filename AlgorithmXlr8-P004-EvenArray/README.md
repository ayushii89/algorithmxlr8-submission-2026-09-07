<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Even Array

**Difficulty:** `Easy`

## Problem

Given an array a of length n (0-indexed), the array is good if for every index i, i and a[i] share the same parity. Find the minimum number of swaps to make the array good, or -1 if impossible.

Read an integer t, the number of test cases, then for each test case read n and the array from standard input. Print the minimum number of swaps, or -1, for each test case.

## Examples

### Example 1

**Input**
```
n = 4, a = 0 1 2 3
```
**Output**
```
0
```

**Explanation:** Every index already matches its value's parity.

### Example 2

**Input**
```
n = 4, a = 3 2 1 0
```
**Output**
```
2
```

**Explanation:** Two mismatches of each kind exist, fixed by 2 swaps.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/cf-1367b-even-array).