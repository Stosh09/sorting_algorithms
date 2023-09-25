Group Project on Sorting Algorithm and Big O-Notation
Contributed to by Stosh09 and OukoFranchez.
<br>

<h1 align="center"><img src="https://upload.wikimedia.org/wikipedia/commons/thumb/4/4c/Shell_sorting_algorithm_color_bars.svg/220px-Shell_sorting_algorithm_color_bars.svg.png" width='150'><br>Sorting algorithms<br>& Big O Notation</h1>

<p align="center"><img src="https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black"><img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white"><img src="https://img.shields.io/badge/GNU%20Bash-4EAA25?style=for-the-badge&logo=GNU%20Bash&logoColor=white"><img src="https://img.shields.io/badge/GIT-E44C30?style=for-the-badge&logo=git&logoColor=white"></p>

<br>

This projectmainly focuses on the following sorting algorithms and further delves into time and space complexity:
* Bubble Sort 
* Insertion Sort
* Selection Sort
* Quick Sort while evaluating the time and space complexity of each designed algorithm and the Big O notation in C language.

## Overview

Alx Africa teaches Full-Stack Software Engineering with a project-based approach. **_Sorting algorithms & Big O Notation_** is one of the main projects of the second sprint that covers the High-level programming of Software Engineering.

## Requirements

To run the algorithms you need to download the code files by [Download sorting_algorithms](https://github.com/Stosh09/sorting_algorithms/archive/refs/heads/main.zip). Or by cloning this repository with the following command in your command terminal. The result will be the same regardless of the option you choose.

```bash
~$ git clone https://github.com/viajeradelaluz/sorting_algorithms.git
```

The compilation process uses GNU Compiler Collection (GCC) and a Linux environment like `Ubuntu 20.04 LTS`. Enter the `sorting_algorithms` folder and use the `makefile` as follows.

## Invocation

Each invocation of the `make` command executes a different algorithm with its respective printout on the console.

### **0. Bubble Sort**

The `0-bubble_sort.c` function sorts an array of integers in ascending order using the Bubble sort algorithm.

    ~/sorting_algorithms$ make bubble

Output

```bash
19, 48, 99, 71, 13, 52, 96, 73, 86, 7
19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 71, 13, 52, 99, 96, 73, 86, 7
19, 48, 71, 13, 52, 96, 99, 73, 86, 7
19, 48, 71, 13, 52, 96, 73, 99, 86, 7
19, 48, 71, 13, 52, 96, 73, 86, 99, 7
19, 48, 71, 13, 52, 96, 73, 86, 7, 99
19, 48, 13, 71, 52, 96, 73, 86, 7, 99
