/************************************************/
/* Author	: Naveenkumar N                 */
/* Date		: 1-08-2019                     */
/* Filename	: Fun_pointer	                */
/* Description	: Using finction pointer        */
/************************************************/



#include <stdio.h>

int fun(int);//function prototype

int main(){
	int ret_val,(*fun_pointer)(int) = &fun;
	ret_val = fun_pointer(10); //function call
	if(ret_val == 1){
		printf("Sucess\n");
	}else{
		printf("Error in ret_val\n");
	}

}

int fun(int a){ //body of the function
	printf("value = %d\n",a);
	return 1;
}
