In C and C++, you can use the `__attribute__((unused))` or `(void)` technique to suppress compiler warnings about unused variables or parameters in functions. These techniques inform the compiler that you intentionally do not plan to use a particular variable, and this can help make your code more readable and maintainable.

1. **Using `__attribute__((unused))` (GCC/Clang)**:
   - For GCC and Clang compilers, you can use the `__attribute__((unused))` attribute to tell the compiler that a variable or parameter is intentionally unused.
   - Here's how you can use it:

   ```c
   void exampleFunction(int x __attribute__((unused))) {
       // This function does not use the 'x' parameter, but no warnings will be generated.
   }
   ```

2. **Using `(void)`**:
   - Another common technique is to cast the variable to `void`. This approach is widely supported and works with many C and C++ compilers.
   - Here's how you can use it:

   ```c
   void exampleFunction(int x) {
       (void)x; // This tells the compiler that 'x' is intentionally unused.
   }
   ```

Both of these methods can help suppress compiler warnings and explicitly communicate your intention to disregard a variable or parameter in your code. This can be especially useful for unused parameters in functions or variables in larger codebases where unused items may be intentional or part of an interface that you need to maintain.
