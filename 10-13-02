/*********************************************************************
* title:	copy a array value to other three arraies.
*	
* C primer Plus  charpter 10 exerices 10-13-02
* 2018/03/05
*********************************************************************/

#include <stdio.h>

double copy_arr(double target1[5], double source[5], int m);	/*array in function*/

void copy_ptr(double *target2,double *source,int m);	/*ptr in function*/

double copy_ptrs(double target3[],double source[],double *m);	/*empty array in function*/

int main(void)
{
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];
	double target3[5];

	target1[5] = copy_arr(target1,source,5);	/*function call*/
	copy_ptr(target2,source,5);
	target3[5] = copy_ptrs(target3,source,source + 5);
	
	printf("At first,source array is:\n");	/*show source array*/
	printf("source[5] = {");
	for(int i = 0;i < 5;i++)
		printf((i != 4)?"%g,":"%g",source[i]);
	printf("}\n");

	printf("copy to target1 array:\n");
	printf("target1[5] = {");	/*show number one target array*/
        for(int i = 0;i < 5;i++)
                printf((i != 4)?"%g,":"%g",target1[i]);
        printf("}\n");

	printf("copy to target2 array:\n");
	printf("target2[5] = {");	/*show number two target array*/
        for(int i = 0;i < 5;i++)
                printf((i != 4)?"%g,":"%g",target2[i]);
        printf("}\n");
	
	printf("copy to target3 array:\n");
	printf("target3[5] = {");	/*show number three target array*/
        for(int i = 0;i < 5;i++)
                printf((i != 4)?"%g,":"%g",target3[i]);
        printf("}\n");

	printf("at last,source array is:\n");	/*verification source array not changed*/
	printf("source[5] = {");
        for(int i = 0;i < 5;i++)
                printf((i != 4)?"%g,":"%g",source[i]);
        printf("}\n");

return 0;
}

double copy_arr(double target1[5],double source[5],int m)	/*function delication*/
{
	for(int i = 0;i < m;i++)
	
		target1[i] = source[i];

return target1[5];
}

void copy_ptr(double *target2,double *source,int m)
{
	for(int i = 0;i < m;i++)
		*(target2 + i) = *(source + i);
}

double copy_ptrs(double target3[],double source[],double *m)
{
	
	for(int i = 0;i < (m - source);i++)
		target3[i] = source[i];
return target3[5];
}
