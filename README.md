# C++ std::vector::at() Out of Bounds Error

This repository demonstrates a common error in C++ when using `std::vector::at()`.  The `at()` method provides bounds checking, which is beneficial for catching errors early, but can also lead to exceptions if not handled properly.

The `bug.cpp` file contains the buggy code, showing how an out-of-bounds access can lead to a runtime error. `bugSolution.cpp` provides a corrected version which addresses the error by checking the bounds before accessing elements.