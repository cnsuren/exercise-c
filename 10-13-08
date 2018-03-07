/*********************************************************************
* title:	copy No.3 ~ No.5 elements from a 7 elements's array to 
		a 3 elements's array. 
*	
* C primer Plus  charpter 10 exerices 10-13-08
* 2018/03/06
*********************************************************************/

#include <stdio.h>
#define NUM 7
#define T_NUM 3

void copy_some_arr(double *target_arr,double *source_arr,int number);

int main (void)
{
	int number,check,i,count;
	char ch;
	double source_arr[NUM] = {};
	double target_arr[T_NUM] = {};
	printf("\nEnter some double type value into a array named 'source_arr'.\n");
	printf("\nthe array elements number limited by %d \n",NUM);
	printf("\nother type input or '#' will finish the input.^_^\n:");
	check = 1;
	for(i = 0;check == 1 && i < NUM;i++)
	{
		check = scanf("%lf",&source_arr[i]);
		while((ch = getchar()) == '#')
			break;
		if(check == 1)
			printf("received:source_arr[%d] =  %g.\n",i,source_arr[i]);
		else
			printf("Sorry,the value you have entered is not a double type.\n Quit!.\n: (\n");

	}
	if(check == 1 || ch == '#')
	{
		printf("\ninput done.\n");
		copy_some_arr(target_arr,source_arr+2,T_NUM);/*function call*/
	}
return 0;
}

void copy_some_arr(double *target_arr,double *source_arr,int number)
{
	int j,k;
	printf("The target array copied from source_arr 's No.%d to No.%d is:\n\ntarget_arr[%d] = {",number,number+2,number);
	for(j = 0;j < number;j++)
	{
		target_arr[j] = *(source_arr + j);
		printf((j == (number-1))?"%g":"%g,",target_arr[j]);
	}
	printf("}\n");
}
