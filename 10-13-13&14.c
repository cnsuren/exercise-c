/*********************************************************************
* title:	write aprogram to assignment an 2D double type array,
*		and average of each row,average of all elements,the 
*		biggest element of all. 
*	
* C primer Plus  charpter 10 exerices 10-13-13
* 2018/03/07
*********************************************************************/

#include <stdio.h>
double ave_of_row(int row,int col,double (*arr)[col]);
double ave_of_all(int row,int col,double (*arr)[col]);
double max_of_all(int row,int col,double (*arr)[col]);
double get_double(void);
int get_int(void);

int main (void)
{
	int row,col,i,j;
	char ch;
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
		double source_arr[row][col]; /*define array*/
		printf("\nNow,please input some double type value into the array named 'source_arr'.\n");
		for(i = 0;i < row;i++)
			for(j = 0;j < col;j++)
				printf("received:source_arr[%d][%d] = %g\n",i,j,*(*(source_arr + i) +j) = get_double());
		printf("Input done!\n");
		for(i = 0;i < row;i++)
			printf("The average of No %d row is %4.2f.\n",i,ave_of_row(i,col,source_arr));/*function call(b)*/
		printf("The average of all the elements is %4.2f.\n",ave_of_all(row,col,source_arr));/*function call(c)*/
		printf("The maximum of all the elements is %4.2f.\n",max_of_all(row,col,source_arr));/*function call(d)*/
		printf("Try again? y/n?\n");
		while(ch = getchar() != '\n')
			continue;
	}
printf("Bye! ^_^ \n");
return 0;
}
double ave_of_row(int row,int col,double(*arr)[col]) 
{
	int j;
	double total_row;
	total_row = 0;
	for(j = 0;j < col;j++)
		total_row += *(*(arr + row) + j);		
return total_row / col;
}
double ave_of_all(int row,int col,double (*arr)[col]) 
{
	int j,k;
	double total_arr;
	total_arr = 0;
	for(j = 0;j < row;j++)
	{
		for(k = 0;k < col;k++)
			total_arr += *(*(arr + j) + k);
	}
return total_arr / (row + col);
}

double max_of_all(int row,int col,double (*arr)[col])
{
	int j,k;
	double max = arr[0][0];
	for(j = 0;j < row;j++)
		for(k = 0;k < col;k++)
		{	if (max < *(*(arr + j) + k))
				max = *(*(arr + j) + k);
			else
				;
		}
return max;
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

double get_double(void)
{
	double a;
	int ch;
	while(scanf("%lf",&a) != 1)
	{
		while(ch = getchar() != '\n')
			continue;
		printf("Not a double value,try again!\n");
	}
return a;
}
