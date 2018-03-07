/*********************************************************************
* title:	return the difference between the maximum and minimum value in a		double type array. 
*	
* C primer Plus  charpter 10 exerices 10-13-05
* 2018/03/06
*********************************************************************/

#include <stdio.h>
#define NUM 10

double div_max_min(double *arr,int i);

int main (void)
{
	int biggest_ser_arr;
	int i = 0;
	double arr[NUM];
	printf("\nEnter some double type value into a array named 'arr'.\n");
	printf("\nthe array element number limited by %d\n",NUM);
	printf("\nother type will finish the input.^_^\n:");

	while((scanf("%lf",&arr[i]) == 1) && i < NUM)/*receive array elements*/
		i++;

	printf("\ninput done.\n");
	printf("\nThe array 'arr' have  %d elements.\n",i);/*verify the array elements*/
	printf("\nand the difference between maximum and minimum:max - min = %g.\n",div_max_min(arr,i));/*function call*/

return 0;
}

double div_max_min(double *arr,int i)
{
	int j;
	double max,min,div; /*define variable*/
	max = arr[0];/*initialize variable*/
	min = arr[0];
	for(j = 0;j < i;j++)
	{
		if(arr[j] > max) /*get the maximum value*/
			max = arr[j];
		if(arr[j] < min) /*get the minimum value*/
			min = arr[j];
	}
	printf("\nThe maximun value is max = %g.\nthe minimum value is min = %g.\n",max,min); /*verify results*/
	div = max - min;
return div; /*return value*/
}
