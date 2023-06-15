<!DOCTYPE html>
<html>
<body>
  <h1 text-align = 'center'>0x17-doubly_linked_lists</h1>

  <h2>Introduction</h2>
  <p>
    This repository contains a collection of C programs that demonstrate the concept of doubly linked lists. Doubly linked lists are a type of data structure where each element, known as a node, contains a reference to both the previous and next nodes in the list.
  </p>

  <h2>Table of Contents</h2>
  <ul>
    <li><a href="#introduction">Introduction</a></li>
    <li><a href="#installation">Installation</a></li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#file-descriptions">File Descriptions</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
  </ul>

  <h2 id="introduction">Introduction</h2>
  <p>
    Doubly linked lists are an extension of the singly linked list data structure. In a singly linked list, each node only contains a reference to the next node. However, in a doubly linked list, each node contains references to both the previous and next nodes, allowing for bidirectional traversal.
  </p>
  <p>
    This repository provides examples of various operations that can be performed on doubly linked lists, such as:
  </p>
  <ul>
    <li>Creating a new doubly linked list</li>
    <li>Inserting nodes at the beginning, end, or at a specific position in the list</li>
    <li>Deleting nodes from the list</li>
    <li>Searching for a specific value in the list</li>
    <li>Reversing the order of the nodes in the list</li>
    <li>Printing the contents of the list</li>
  </ul>
  <p>
    Understanding doubly linked lists is important in mastering data structures and algorithms, as they offer efficient insertion, deletion, and traversal capabilities.
  </p>

  <h2 id="installation">Installation</h2>
  <p>
    To use the programs in this repository, follow the steps below:
  </p>
  <ol>
    <li>Clone the repository using the following command:<br>
      <code>git clone https://github.com/LailaTabourit09/0x17-doubly_linked_lists.git</code></li>
    <li>Change your current directory to the cloned repository:<br>
      <code>cd 0x17-doubly_linked_lists</code></li>
    <li>Compile the C programs using a C compiler. For example, using <code>gcc</code>:<br>
      <code>gcc -Wall -Werror -Wextra -pedantic *.c -o doubly_linked_list</code></li>
  </ol>

  <h2 id="usage">Usage</h2>
  <p>
    After successfully compiling the programs, you can run the executables to see the doubly linked list operations in action. For example:
  </p>
  <code>./doubly_linked_list</code>
  <p>
    Follow the prompts or instructions provided by the program to perform various operations on the doubly linked list.
  </p>

  <h2 id="file-descriptions">File Descriptions</h2>
  <p>
    The repository contains the following files:
  </p>
  <ul>
    <li><code>0-print_dlistint.c</code>: A function that prints all the elements of a doubly linked list.</li>
    <li><code>1-dlistint_len.c</code>: A function that returns the number of elements in a doubly linked list.</li>
    <li><code>2-add_dnodeint.c</code>: A function that adds a new node at the beginning of a doubly linked list.</li>
    <li><code>3-add_dnodeint_end.c</code>: A function that adds a new node at the end of a doubly linked list.</li>
    <li><code>4-free_dlistint.c</code>: A function that frees a doubly linked list.</li>
    <li><code>5-get_dnodeint.c</code>: A function that returns the nth node of a doubly linked list.</li>
    <li><code>6-sum_dlistint.c</code>: A function that returns the sum of all the data (n) of a doubly linked list.</li>
    <li><code>7-insert_dnodeint.c</code>: A function that inserts a new node at a given position in a doubly linked list.</li>
    <li><code>8-delete_dnodeint.c</code>: A function that deletes a node at a given position in a doubly linked list.</li>
    <li><code>100-password</code>: A text file containing the password used for a crackme-style program.</li>
    <li><code>102-result</code>: A text file containing the largest palindrome made from a product of two 3-digit numbers.</li>
    <li><code>lists.h</code>: Header file containing function prototypes and structure definition used in the programs.</li>
    <li><code>README.md</code>: This file, providing an overview of the repository and its contents.</li>
  </ul>

  <h2 id="contributing">Contributing</h2>
  <p>
    Contributions to this repository are welcome. If you have any improvements or additional functionality to add, feel free to submit a pull request. Please ensure that your code follows the existing style and conventions used in the repository.
  </p>
  <p>
    If you find any issues or bugs within the code, please open an issue in the repository and provide details about the problem you encountered.
  </p>
  <P> 
  <h2 id="license">License</h2>
  <p>&copy; 2023 Laila Tabourit</p>
    This repository is licensed under the MIT License. See the <a href="LICENSE">LICENSE</a> file for more information.
  </p>
</body>
</html>
