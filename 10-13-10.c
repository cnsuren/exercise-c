/*********************************************************************
* title:	add the same serial number element of two array into 
*		the third array. 
*	
* C primer Plus  charpter 10 exerices 10-13-10
* 2018/03/06
*********************************************************************/

#include <stdio.h>

void copy_2_arr(double *array_one,double *array_two,double *add_array,int num);

int main (void)
{
	int i,count1,count2,check1,check2,num;
	printf("Set the size of a array,and then assignment:\n");
	check1 = scanf("%d",&num);
	char ch;
	double array_one[num],array_two[num],add_array[num];

	printf("\nassignment the first double type array:named 'array_one'.\n");/*man-machine interaction*/
	printf("\nthe array elements number limited by %d\n",num);
	printf("\nother type input or '#' will finish the input.^_^\n:");

	check1 = 1;
	for(i = 0;check1 == 1 && i < num;i++) /*array assignment*/
	{
		
		check1 = scanf("%lf",&array_one[i]);/*check input*/
		while((ch = getchar()) == '#')
			break;
		if(check1 == 1)
			printf("received.array_one[%d] =  %g.\n",i,array_one[i]);/*receive succeed*/
		else
			printf("Sorry,the value you have entered is not a double type.\n Quit!.\n: (\n");
	}
	check2 = 1;
	for(i = 0;check2 == 1 && i < num;i++)
	{
		check2 = scanf("%lf",&array_two[i]);
		while((ch = getchar()) == '#')
                        break;
                if(check2 == 1)
                        printf("received.array_two[%d] =  %g.\n",i,array_two[i]);/*receive succeed*/
                else
                        printf("Sorry,the value you have entered is not a double type.\n Quit!.\n: (\n");
	}

	if((check1 == 1 && check2 == 1) || ch == '#')
	{
		printf("\ninput done.\n");

		count1 = sizeof array_one / sizeof array_one[0];
		count2 = sizeof array_two / sizeof array_two[0];
		printf("\nThe array 'array_one' have %d elements.\n\n",count1);/*verify the array elements*/
		printf("\nThe array 'array_two' have %d elements.\n\n",count2);

		copy_2_arr(array_one,array_two,add_array,num);/*function call*/
	}
	printf("The add of array one and two is:\n\nadd_array[%d] = {",num);
	for(i = 0;i < num;i++)
		printf((i == num-1)?"%g":"%g,",*(add_array + i));
	printf("}\n");
return 0;
}

void copy_2_arr(double *array_one,double *array_two,double *add_array,int num)
{
	int j;
	for(j = 0;j < num;j++)
	{
		*(add_array+j) = *(array_one+j) + *(array_two+j);
	}
}
