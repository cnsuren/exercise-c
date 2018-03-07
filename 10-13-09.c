/*********************************************************************
* title:	use a VLA array function copy an 3x5 2D array to another 3x5 2D 
		array.use another VLA array function to show all the elements of
		the two 2D arraies. 
*	
* C primer Plus  charpter 10 exerices 10-13-09
* 2018/03/06
*********************************************************************/

#include <stdio.h>
#define ROW 3
#define COL 5

void copy_2d_arr(int row,int col,double target_arr[row][col],double (*source_arr)[COL]);
void show_all(int row,int col,int a_row,double target_arr[row][col],double source_arr[row][col]);

int main (void)
{
	int row,col,a_row,a_col,count,check,i,j;
	char ch;
	row = ROW;col = COL;
	a_row = row + ROW;
	a_col = col;
	double source_arr[ROW][COL] = {};
	double target_arr[row][col];

	printf("\nEnter some double type value into a 2D array named 'source_arr'.\n");/*man-machine interaction*/
	printf("\nthe array elements number limited by %d row,%d column\n",ROW,COL);
	printf("\nother type input or '#' will finish the input.^_^\n:");
	check = 1;
	for(i = 0;check == 1 && i < ROW;i++) /*array assignment*/
	{
		for(j = 0;j < COL && check == 1;j ++)
		{
			check = scanf("%lf",&source_arr[i][j]);/*check input*/
			while((ch = getchar()) == '#')
				break;
			if(check == 1)
				printf("received.source_arr[%d][%d] =  %g.\n",i,j,source_arr[i][j]);/*receive succeed*/
			else
				printf("Sorry,the value you have entered is not a double type.\n Quit!.\n: (\n");

		}
	}

	if(check == 1 || ch == '#')
	{
		printf("\ninput done.\n");

		count = sizeof source_arr / sizeof source_arr[0][0];
		printf("\nThe 2-D array 'source_arr' have  %d elements.\n\n",count);/*verify the array elements*/

		copy_2d_arr(row,col,target_arr,source_arr);/*function call*/
		show_all(row,col,a_row,target_arr,source_arr);
	}
return 0;
}

void copy_2d_arr(int row,int col,double target_arr[row][col],double (*source_arr)[COL])
{
	int j,k;
	printf("The copy of array arr is:\n\ntarget_arr[%d][%d] = {",row,col);
	for(j = 0;j < row;j++)
	{
		printf("{");
		for(k = 0;k < col;k++) /*copy*/
		{
			target_arr[j][k] = *(source_arr[j] + k);
			printf((k == (col-1))?"%g":"%g,",target_arr[j][k]);
		}
		printf((j == (row -1))?"}":"},");
	}
	printf("}\n");
}

void show_all(int row,int col,int a_row,double target_arr[row][col],double source_arr[row][col])
{
	int j,k;
	printf("All the two 2D arraies' elements are:\nall_arr[%d][%d] = {\n",a_row,col);
	for(j = 0;j < a_row;j++)
	{
		printf("\t\t{");
		for(k = 0;k < col;k++)
		{
			if(j >= row)
				printf((k == (col-1))?"%g":"%g,",target_arr[j-row][k]);
			else
				printf((k == (col-1))?"%g":"%g,",source_arr[j][k]);
		}
		printf((j == (a_row-1))?"}\n":"},\n");
	}
	printf("\t\t}\n");
}
