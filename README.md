Binary Student Record System

Welcome to the Binary Student Record System project.

This project was created to demonstrate the basics of binary file handling in the C programming language. It shows how structures can be stored directly into a binary file using fwrite() and later retrieved using fread().

The program uses a Student structure containing:

Student ID
Student age
Student first-name initial

Memory for the structure is allocated dynamically using malloc(), and the data is written into a binary file named Student.ban.

After saving the data, the program opens the same file again, reads the stored bytes back into memory, and prints the values to the console.

Through this small project, you can learn:

Structures in C
Pointers and structure pointers
Dynamic memory allocation
Binary file operations
File handling functions such as:
fopen()
fwrite()
fread()
fclose()
Proper memory cleanup using free()

Example output:

------------------
id: d557788a
Fname: B
age: edd98dfa
