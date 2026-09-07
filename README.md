# Digit-based Multiplication
![File Type](https://img.shields.io/badge/File-PDF-red)
![Document](https://img.shields.io/badge/Type-Academic%20Article-blue)
![Topic](https://img.shields.io/badge/Topic-Algorithm%20Analysis-green)
![Language](https://img.shields.io/badge/language-C%2B%2B-blue)
![License](https://img.shields.io/badge/license-MIT-green)
![Status](https://img.shields.io/badge/status-active-success)
![Repo Size](https://img.shields.io/github/repo-size/theinternetisahellhole/Digit-basedMultiplication)
![Last Commit](https://img.shields.io/github/last-commit/theinternetisahellhole/Digit-basedMultiplication)

## Algorithm, Implementation, and Complexity Analysis

This repository presents an implementation and analysis of the **Digit-based Multiplication** algorithm, a classical approach for multiplying two integers by processing their digits and combining the resulting partial products.

The project focuses on the algorithmic structure of digit-based multiplication, practical implementation considerations, large-number computation, data type limitations, and time complexity analysis.

## Overview

Multiplication of large integers is a fundamental operation in computer science and computational mathematics.

The digit-based multiplication method follows the same fundamental principle as traditional positional multiplication. Each digit of one number is multiplied by the other number, shifted according to its positional value, and combined with the remaining partial products.

For two integers represented using their decimal digits, the general process can be expressed as:

```text
A = a_0 + a_1 * 10 + a_2 * 10^2 + ... + a_n * 10^n

B = b_0 + b_1 * 10 + b_2 * 10^2 + ... + b_m * 10^m
```

The multiplication is then performed by computing the corresponding digit-level products and accumulating their contributions according to their positions.

## Objectives

The main objectives of this project are:

1. To implement the digit-based multiplication algorithm.
2. To analyze its computational behavior.
3. To investigate numerical limitations caused by fixed-size data types.
4. To demonstrate problems that occur when multiplying sufficiently large integers.
5. To provide corrected implementations capable of handling larger values.
6. To compare the algorithm's complexity with other multiplication techniques.

## Algorithm

The basic procedure can be summarized as follows:

```text
Input:
    Two integers A and B

Process:
    1. Extract the digits of A.
    2. Multiply each digit by B.
    3. Shift each partial product according to its position.
    4. Add all partial products.

Output:
    A * B
```

For example, the multiplication:

```text
123 × 456
```

can be decomposed into:

```text
123 × 6
123 × 5 × 10
123 × 4 × 100
```

and the resulting partial products are summed to obtain the final result.

## Complexity

Assuming that one operand contains `n` digits and the other contains `m` digits, the digit-based multiplication process performs work proportional to the number of digit-level operations.

The resulting time complexity is generally expressed as:

```text
O(nm)
```

For operands having approximately the same number of digits:

```text
n ≈ m
```

the complexity becomes:

```text
O(n^2)
```

This quadratic behavior is one of the main characteristics of classical digit-based multiplication.

## Large Integer Limitations

A significant practical issue arises when the result exceeds the range supported by the selected data type.

For example:

```text
Maximum value of the data type
        |
        v
+---------------------------+
|        Integer Range      |
+---------------------------+
              |
              v
       Multiplication
              |
              v
        Integer Overflow
```

When the operands or their product exceed the available numeric range, the implementation may produce an incorrect result or overflow.

This repository investigates these limitations and provides corrected implementations and output handling for larger values.

## Implementations

The repository contains multiple implementation stages:

```text
Digit-basedMultiplication/
│
├── Corrected Implementation and Output/
│   └── Corrected implementation
│
├── Initial Implementation and Output/
│   └── Initial implementation
│
├── Digit-based Multiplication.pdf
├── README.md
└── LICENSE
```

The **Initial Implementation and Output** directory contains the original implementation and its results.

The **Corrected Implementation and Output** directory contains the revised implementation addressing the identified limitations.

## Research Paper

The complete analysis is available in the following paper:

[Digit-based Multiplication](./Digit-based%20Multiplication.pdf)

The paper discusses:

* The mathematical structure of the algorithm
* Initial implementation issues
* Data type limitations
* Large-number computation
* Corrected implementation approaches
* Output and representation of large results
* Time complexity
* Comparison with other multiplication algorithms

## Practical Considerations

The classical digit-based approach is straightforward and easy to understand and implement. However, its quadratic complexity makes it less efficient than advanced multiplication algorithms for sufficiently large operands.

Therefore, the algorithm remains particularly useful for:

* Educational purposes
* Understanding positional multiplication
* Studying algorithmic complexity
* Demonstrating numerical overflow
* Comparing classical and advanced multiplication methods
* Understanding the relationship between mathematical algorithms and practical implementations

## License

This project is distributed under the MIT License.

See the [`LICENSE`](./LICENSE) file for the complete license text.

## Author

Fouad Salehi
