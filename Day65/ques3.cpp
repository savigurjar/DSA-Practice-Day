/*1️⃣ const char *str = "Hello, World!";
str is a pointer to a constant character.
The string "Hello, World!" is stored in read-only memory (RODATA section).
You cannot modify the string through str.
*/

/*

2️⃣ char *str = "Hello, World!"; (Deprecated in C++)
str is a non-const pointer to a string literal.
In older C standards, this was allowed, but in C++, modifying string literals is undefined behavior.
The string is stored in read-only memory, so modifying it may cause a segmentation fault.*/