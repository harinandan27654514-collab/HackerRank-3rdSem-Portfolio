<div align="center">

# 🧠 HackerRank Algorithmic Portfolio
### 3rd Semester · Activity 8: Algorithmic Problem-Solving & Portfolio Integration

![C++](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![HackerRank](https://img.shields.io/badge/Platform-HackerRank-2EC866?style=for-the-badge&logo=hackerrank&logoColor=white)
![Problems](https://img.shields.io/badge/Problems%20Solved-5%2F5-brightgreen?style=for-the-badge)
![Badge](https://img.shields.io/badge/Problem%20Solving-3%E2%98%85%20Silver-silver?style=for-the-badge&logo=hackerrank&logoColor=white)
![Status](https://img.shields.io/badge/Status-Completed-success?style=for-the-badge)

[🔗 **View My HackerRank Profile**](https://www.hackerrank.com/profile/harinandan276541)

</div>

---

## 📖 About

Five mandatory HackerRank challenges, solved in C++ with a focus on clean logic and efficient complexity. Each solution lives in its own folder so it's easy to browse and review.

---

## ✅ Problems Solved

| # | Problem | Topic | Difficulty | Solution |
|:-:|---------|-------|:----------:|:--------:|
| 1 | Compare the Triplets | Arrays / Comparison | 🟢 Easy | [📄 Code](./Compare-the-Triplets/solution.cpp) |
| 2 | Diagonal Difference | Matrix Traversal | 🟢 Easy | [📄 Code](./Diagonal-Difference/solution.cpp) |
| 3 | Dynamic Array | 2D Vectors | 🟢 Easy | [📄 Code](./Dynamic-Array/solution.cpp) |
| 4 | Sparse Arrays | Hash Map / Frequency Count | 🟡 Medium | [📄 Code](./Sparse-Arrays/solution.cpp) |
| 5 | Time Conversion | String Processing | 🟢 Easy | [📄 Code](./Time-Conversion/solution.cpp) |

---

## ⚡ Complexity Analysis

| Problem | Time | Space | Data Structure | Key Idea |
|---------|:----:|:-----:|----------------|----------|
| Compare the Triplets | `O(1)` | `O(1)` | Fixed arrays (size 3) | Compare three fixed pairs and count points |
| Diagonal Difference | `O(N)` | `O(1)` | 2D array / matrix | Sum both diagonals in one pass using `i` and `n-1-i` |
| Dynamic Array | `O(N + Q)` | `O(N + Q)` | `vector<vector<int>>` | Index with `(x ^ lastAnswer) % N`, push or read in O(1) |
| Sparse Arrays | `O(N + Q)` | `O(N)` | `unordered_map<string,int>` | Count string frequencies once, answer each query by lookup |
| Time Conversion | `O(1)` | `O(1)` | String | Parse hour, adjust for AM/PM, rebuild 24-hour string |

### 📝 Detailed Breakdown

**1. Compare the Triplets**
- **Time `O(1)`:** The input always has exactly 3 elements, so the loop runs a constant number of times.
- **Space `O(1)`:** Only two counters are stored for Alice's and Bob's scores.

**2. Diagonal Difference**
- **Time `O(N)`:** One loop over `i = 0 … N-1` adds `a[i][i]` and `a[i][N-1-i]`. (Reading the full N×N input takes `O(N²)`, but the algorithm itself only touches 2N cells.)
- **Space `O(1)`:** Only two running sums are kept.

**3. Dynamic Array**
- **Time `O(N + Q)`:** Creating N empty sequences costs `O(N)`. Each of the Q queries does an index calculation plus a `push_back` or a read, both `O(1)` on average.
- **Space `O(N + Q)`:** There are N sequences, and the total number of stored elements is at most Q (one per type-1 query).

**4. Sparse Arrays**
- **Time `O(N + Q)`:** Building the frequency map takes `O(N)` and each query is an average `O(1)` lookup. With an ordered `map`, this becomes `O((N + Q) log N)`.
- **Space `O(N)`:** The map stores at most N distinct strings. The results array adds `O(Q)` if you store answers.

**5. Time Conversion**
- **Time `O(1)`:** The input is always a fixed-length string (`hh:mm:ssAM/PM`), so parsing and formatting take constant time.
- **Space `O(1)`:** The output string has a fixed size.

> **Note:** String lengths are treated as constants here. If the length of each string is `L`, the string-based operations in Sparse Arrays scale by a factor of `L`.
