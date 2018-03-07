/*********************************************************************
* title:	write aprogram to assignment an 2D int type array,and 
*		double the value. Use a function to print and another
*		function to double. 
*	
* C primer Plus  charpter 10 exerices 10-13-11
* 2018/03/06
*********************************************************************/

#include <stdio.h>
#define STAR "*************************************************************"
#define TITLE "This program can assignment an 2D array,and double the value."
void print_arr(int row,int col,int (*arr)[col]);
void double_arr(int row,int col,int (*arr)[col]);
int get_int(void);

int main (void)
{
	int row,col,i,j;
	char ch;
	puts(STAR);
	puts(TITLE);
	puts(STAR);
	printf("run the program? y/n?\n");
	while(ch = getchar() == 'y')
	{
		printf("Set the rows of an 2D array:\n");
		row = get_int();
		while(row < 2)
		{
			printf("row should bigger than 2,try again!\n");
			row = get_int();
		}
		printf("Set the columns of an 2D array:\n");
		col = get_int();
		while(col < 2)
		{
			printf("column should bigger than 2,try again!\n");
                	col = get_int();
		}
		printf("\nOK,the array size is %d rows,%d columnes.\n",row,col);

		int source_arr[row][col]; /*define array*/
		int (*ptr_arr)[col]; /*define a point*/
		ptr_arr = source_arr; /*assignment*/

		printf("\nNow,please input some integer type value into the array named 'source_arr'.\n");/*man-machine interaction,for assignment the array*/

		for(i = 0;i < row;i++)
			for(j = 0;j < col;j++)
				printf("received:source_arr[%d][%d] = %d\n",i,j,*(*(ptr_arr + i) +j) = get_int());
		printf("Input done!\n");

		print_arr(row,col,source_arr);/*function call*/
		double_arr(row,col,source_arr);
		printf("The array value have doubled!and now,\n");
		print_arr(row,col,source_arr);
	
		printf("Try again? y/n?\n");
		while(ch = getchar() != '\n')
			continue;
	}
printf("Bye! ^_^ \n");
return 0;
}

void print_arr(int row,int col,int(*arr)[col]) /*function definitions,display array*/
{
	int j,k;
	printf("source_arr[%d][%d] = {",row,col);
	for(j = 0;j < row;j++)
	{
		printf("{");
		for(k = 0;k < col;k++) /*print*/
			printf((k == (col-1))?"%d":"%d,",arr[j][k]);
		printf((j == (row -1))?"}":"},");
	}
	printf("}\n");
}

void double_arr(int row,int col,int (*arr)[col]) /*function definitions.double the value of array elements*/
{
	int j,k;
	printf("Double the every value of source_arr...\n");
	for(j = 0;j < row+col;j++)
		for(k = 0;k < col;k++)
			arr[j][k] = arr[j][k] * 2;/*double*/
}

int get_int(void)
{
	int a,ch;
	while(scanf("%d",&a) != 1)
	{
		while(ch = getchar() != '\n')
			continue;
		printf("Not a integet value,try again!\n");
	}	
return a;
}
