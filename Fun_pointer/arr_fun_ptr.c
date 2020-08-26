/************************************************/
/* Author	: Naveenkumar N                 */
/* Date		: 26-08-2020                    */
/* Filename	: arr_fun_ptr.c	                */
/* Description	: Array function pointer matrix */
/************************************************/

#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);

int main(){

	int (*fun_arr[])(int, int) = {add, sub, mul};
	fun_arr[0](1,2);
}
int add(int a, int b){
	printf("Add = %d\n",a+b);
}
int sub(int a, int b){
	printf("sub = %d\n",a+b);
}
int mul(int a, int b){
	printf("sub = %d\n",a+b);
}
