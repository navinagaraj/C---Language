/************************************************/
/* Author       : Naveenkumar N                 */
/* Date         : 26-08-2020                    */
/* Filename     : callback_fun.c                */
/* Description  : Using callback function       */
/************************************************/

#include <stdio.h>

int fun(int a);
int fun_callback(int(*)(int));

int main(){
	int (*ptr)(int)= &fun;
	fun_callback(ptr);
}


int fun(int a){
	printf("This is from Fun %d\n",a);
}



int fun_callback(int(*ptr)() ){
	printf("This is from Fun_callback \n");
	ptr(12);
}
