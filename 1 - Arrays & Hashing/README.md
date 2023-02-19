# Chatper Notes: Arrays & Hashing

This document contains basic knowledge on the topics required to solve the exercises in this chapter, as well as tips to have an advantage when coming up with solutions.

## Arrays

An array is a colection of elements of the same type placed in contiguous memory. We usually access an array with a pointer to its first element, and can obtain an element in position `i` by adding `i` to said pointer and accessing the address directly.

There are three main implementations of arrays in `C++`. We cover them all below.

### [C-style arrays](https://en.cppreference.com/w/cpp/language/array)

C-style arrays are inherited from C. Their size must be specified at compile time, meaning they cannot be resized; we must hence provide the size of an array in its declaration.

The syntax to declare a C-style array of `int` is as follows:

```
int[mySize] myArray1;
int[3] myArray2 = {1,2,3};
int myArray3 [mySize];
```

This will allocate the memory on the stack, and the variable `myArray` will decay to an `int*` pointing to the first element in the array. We can access the `i`th location with `myArray[i]`, which is shorthand for `*(myArray + i)` and can run in constant time due to it accessing the requested address directly.

To know the size of a given array we must either remember it from its creation or calculate it from the ratio of allocated memory: `sizeof(myArray) / sizeof(*myArray)`. This also means that we are on our own when it comes to making sure we access the right memory addresses: C-style arrays are not safe.

### [`std::array`](https://en.cppreference.com/w/cpp/container/array)

`std::array` is the C++ zero-overhead wrapper for C-style arrays. It basically has the same functionality but provides a number of advantages:

- C++ style syntax
- No decay to pointer, meaning it can use C++ copy semantics
- Can access its size through `myArray.size()`
- Includes range-checks in debug builds
- Supports the use of STL algorithms

The declaration of an `std::array` of `int` is as follows:

```
std::array<int, mySize> myArray1;
std::array<int, 3> myArray2 = {1,2,3};
```

### [`std::vector`](https://en.cppreference.com/w/cpp/container/vector)

`std::vector` improves on the previous two implementations by allowing dynamic resizing of the array at the cost of more expensive operations and more memory requirements.

The `std::vector` class creates a C-style array in the heap and stores three pointers in order to maintain it: the `begin` pointer, the `end` pointer and the `capacity` pointer. The first two delimit the start and end of the array, while the last marks the point until where memory is reserved for the array.

With this setup, it is possible to resize the array to twice its previous size every time the capacity is reached and attain an amortized constant run-time for insertion at the end. Resizing requires copying the whole array into another block of memory with twice (or half) as much memory, which is $O(n)$. Luckily, we only do this $\log N$ times when inserting $N$ elements, which results in a constant amortized time complexity. 

`std::vector` is the go-to implementation when requiring an array. The resizing functionality is worth the little overhead it carries (when accesing the heap instead of the stack, and its extra memory requirement). Furthermore, it is not constrained by the size of the array since it is not allocated on the stack.

### Cost of operations

- Random access: $O(1)$
- Insertion/removal at the end: amortized $O(1)$
- Insertion/removal in general: $O(n)$

## Hash Tables
Hash tables are data structures that can be used to store sets or dictionaries. When the universe $U$ of keys is small, we may use direct-address tables, where each key is an address to the position in memory (this is what arrays already do). Hash tables go a step beyond arrays (which can be seen as direct-address tables) by allowing 

## General Tips