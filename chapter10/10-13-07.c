/*********************************************************************
* title:	copy 2D array to another 2D array.use a function. 
*	
* C primer Plus  charpter 10 exerices 10-13-07
* 2018/03/06
*********************************************************************/

#include <stdio.h>
#define ROW 2
#define COL 3

void copy_2d_arr(double (*target_arr)[COL],double (*arr)[COL],int row,int column);

int main (void)
{
	int row,column,count,check;
	char ch;
	double arr[ROW][COL] = {};
	double target[ROW][COL]={};
	printf("\nEnter some double type value into a 2D array named 'arr'.\n");
	printf("\nthe array elements number limited by %d row,%d column\n",ROW,COL);
	printf("\nother type input or '#' will finish the input.^_^\n:");
	check = 1;
	for(row = 0;check == 1 && row < ROW;row++)
	{
		for(column = 0;column < COL && check == 1;column ++)
		{
			check = scanf("%lf",&arr[row][column]);
			while((ch = getchar()) == '#')
				break;
			if(check == 1)
				printf("received.arr[%d][%d] =  %g.\n",row,column,arr[row][column]);
			else
				printf("Sorry,the value you have entered is not a double type.\n Quit!.\n: (\n");

		}
	}
	if(check == 1 || ch == '#')
	{
		printf("\ninput done.\n");
		count = sizeof arr / sizeof arr[0][0];
		printf("\nThe 2-D array 'arr' have  %d elements.\n\n",count);/*verify the array elements*/
		copy_2d_arr(target,arr,ROW,COL);/*function call*/
	}
return 0;
}

void copy_2d_arr(double (*target_arr)[COL],double (*arr)[COL],int row,int column)
{
	int j,k;
	printf("The copy of array arr is:\n\ntarget_arr[%d][%d] = {",ROW,COL);
	for(j = 0;j < row;j++)
	{
		printf("{");
		for(k = 0;k < column;k++) /*copy*/
		{
			target_arr[j][k] = *(arr[j] + k);
			printf((k == (column-1))?"%g":"%g,",target_arr[j][k]);
		}
		printf((j == (row -1))?"}":"},");
	}
	printf("}\n");
}
