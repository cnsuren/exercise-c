/*********************************************************************
* title:	reverse order the double type array elements. 
*	
* C primer Plus  charpter 10 exerices 10-13-06
* 2018/03/06
*********************************************************************/

#include <stdio.h>
#define NUM 10

void reverse_order_arr(double *arr,int i);

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
	reverse_order_arr(arr,i);/*function call*/

return 0;
}

void reverse_order_arr(double *arr,int i)
{
	int j,l;
	l = i;
	double re_arr[i];
	printf("The reverse order of array arr is:\n\nre_arr = {");
	for(j = 0;j < l,i > 0;j++,i--) /*reverse order*/
	{
		re_arr[j] = *(arr + i -1);
		printf((j == (l-1))?"%g":"%g,",re_arr[j]);
	}
	printf("}\n");
}
