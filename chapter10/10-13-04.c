/*********************************************************************
* title:	return the serial number of the biggest double type 
		value in array.
*	
* C primer Plus  charpter 10 exerices 10-13-04
* 2018/03/06
*********************************************************************/

#include <stdio.h>
#define NUM 10

int biggest_ser(double *arr,int i);

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
	printf("\nThe array 'arr' have  %d elements.\n",i);/*confirm the array elements*/
	printf("\nand the biggest element is arr[%d].\n",biggest_ser(arr,i));/*function call*/

return 0;
}

int biggest_ser(double *arr,int i)
{
	int j;
	int ser_big = 0; /*define variable for the serial number of the bigger value*/
	double big = arr[0];
	for(j = 0;j < i;j++)
	{
		if(arr[j] > big)
		{	
			ser_big = j;
			big = arr[j];
		}
		
	}
return ser_big;
}
