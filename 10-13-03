/*********************************************************************
* title:	return the biggest integer value in array.
*	
* C primer Plus  charpter 10 exerices 10-13-03
* 2018/03/05
*********************************************************************/

#include <stdio.h>

int biggest(int *arr);

int main (void)
{
	int biggest_arr;
	int arr[3] = {-2,0,5};

	biggest_arr = biggest(arr);

	printf("The biggest in arr is %d.\n",biggest_arr);

return 0;
}

int biggest(int *arr)
{
	int big;
	if(*arr < *(arr + 1))
	{
		big = *(arr + 1);
		if(big < *(arr + 2))
			big = *(arr + 2);
	}	

	else
	{	big = *arr;
		if(big < *(arr + 2))
			big = *(arr + 2);
	}
return big;
}
