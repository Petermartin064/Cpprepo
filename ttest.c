#include<stdio.h>
#define MAX_SIZE 20

int main()
{
	int arr[MAX_SIZE] = {1, 2, 3, 4, 5};
	int k = 5, n = 5;
	int i, j;
	
	printf("The array before deletion is:\n");
	
	for(i = 0; i < n; i++)
		printf(" arr[%d] = %d ", i, arr[i]);
	
	j = k;
	
	while (j < n)
	{
		arr[j - 1] = arr[i];
		j++;
	}
	n--;
	
	printf("\nThe array after deletion is:\n");
	
	for(i = 0; i < n; i++)
		printf(" arr[%d] = %d ", i, arr[i]);
	
	return 0;
}
