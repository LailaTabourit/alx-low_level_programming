#ifndef _CALC_H
#define _CALC_H

/**
* struct op - struct op
* @op: operator
* @f: function
*
* by: lailitaaaa
*/
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op;
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
