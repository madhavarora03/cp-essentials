## TLE Guide

| N      | Worst Case          | Example                      |
| :----: | :------------------:| :---------------------------:|
| <11    | O(N!), O(N^6)       | Permutation                  |
| <18    | O(2^N * N²)         | DP + TSP                     |
| <22    | O(2^N * N)          |                              |
| <100   | O(N⁴)               |                              |
| <400   | O(N³)               | Floyd Warshall               |
| <2000  | O(N² log₂N)          | Nested Loops + Binary Search |
| <10^4  | O(N²)               | Nested Loops, Bubble Sort    |
| <10^6  | O(N logN)           | Merge Sort, Quick Sort       |
| <=10^8 | O(N), O(logN), O(1) | Many common problems         |
