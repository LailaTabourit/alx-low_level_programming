<html>
 <h1>0x18. C - Dynamic libraries</h1>

  <p>This repository contains a dynamic library, <code>libdynamic.so</code>, which includes various functions. The library is built using the C programming language. Additionally, it includes a header file, <code>main.h</code>, that provides the function prototypes for all the functions within <code>libdynamic.so</code>. There are also two shell scripts included in this repository: <code>1-create_dynamic_lib.sh</code> and <code>101-make_me_win.sh</code>. Finally, there is a separate dynamic library named <code>100-operations.so</code>.</p>

  <h2>Files</h2>

  <h3>libdynamic.so</h3>
  <p>This dynamic library contains the following functions:</p>
  <ul>
    <li><code>int _putchar(char c);</code></li>
    <li><code>int _islower(int c);</code></li>
    <li><code>int _isalpha(int c);</code></li>
    <li><code>int _abs(int n);</code></li>
    <li><code>int _isupper(int c);</code></li>
    <li><code>int _isdigit(int c);</code></li>
    <li><code>int _strlen(char *s);</code></li>
    <li><code>void _puts(char *s);</code></li>
    <li><code>char *_strcpy(char *dest, char *src);</code></li>
    <li><code>int _atoi(char *s);</code></li>
    <li><code>char *_strcat(char *dest, char *src);</code></li>
    <li><code>char *_strncat(char *dest, char *src, int n);</code></li>
    <li><code>char *_strncpy(char *dest, char *src, int n);</code></li>
    <li><code>int _strcmp(char *s1, char *s2);</code></li>
    <li><code>char *_memset(char *s, char b, unsigned int n);</code></li>
    <li><code>char *_memcpy(char *dest, char *src, unsigned int n);</code></li>
    <li><code>char *_strchr(char *s, char c);</code></li>
    <li><code>unsigned int _strspn(char *s, char *accept);</code></li>
    <li><code>char *_strpbrk(char *s, char *accept);</code></li>
    <li><code>char *_strstr(char *haystack, char *needle);</code></li>
  </ul>

  <h3>main.h</h3>
  <p>This header file contains the function prototypes for all the functions included in <code>libdynamic.so</code>. It is used to ensure proper usage and function declaration in other source files.</p>

  <h3>1-create_dynamic_lib.sh</h3>
  <p>This shell script is used to create the dynamic library <code>libdynamic.so</code> from the source files containing the listed functions. It compiles the necessary source files and generates the dynamic library file.</p>

  <h3>100-operations.so</h3>


  <p>This is another dynamic library, <code>100-operations.so</code>, present in the repository. Its purpose and contents are not specified in this README.</p>

  <h3>101-make_me_win.sh</h3>
  <p>This shell script is provided, but its purpose and contents are not specified in this README.</p>

  <h2>Usage</h2>
  <p>To use the functions within <code>libdynamic.so</code>, follow these steps:</p>
  <ol>
    <li>Compile the source files and create the dynamic library by running the <code>1-create_dynamic_lib.sh</code> script.</li>
    <li>Include the <code>main.h</code> header file in your C program.</li>
    <li>Link your program with <code>libdynamic.so</code> during the compilation process using the appropriate flags.</li>
    <li>Call any of the listed functions from <code>libdynamic.so</code> in your program.</li>
  </ol>

  <p>Example compilation command:</p>
  <pre><code>gcc -Wall -Werror -Wextra -pedantic -o my_program my_program.c -L. -ldynamic</code></pre>

  <p>Replace <code>my_program.c</code> with the name of your C source file, and <code>my_program</code> with the desired name for your compiled program.</p>

  <p>Note: Make sure that <code>libdynamic.so</code> is in the same directory or provide the appropriate path when linking.</p>

  <h2>Credits</h2>
 <p>&copy; 2023 Laila Tabourit</p>
  <p>This repository is created for educational purposes as part of the Holberton School curriculum.</p>
</body>
</html>
