#include<stdio.h>
#define MAX_SIZE 20

int main()
{
	int arr[MAX_SIZE] = {2, 3, 6, 7, 8};
	int i, pos, x, n = 5;
	
	printf("The array before insertion is:\n");
	
	for(i = 0; i < n; i++)
	
		printf(" %d ", arr[i]);
	
	printf("\n");
	
	x = 10;
	pos = 3;
	n++;
	
	for(i = n-1; i >= pos; i--)
	
		arr[i] = arr[i - 1];
	
	arr[pos - 1] = x;
	
	printf("The array after insertion is:\n");
	
	for(i = 0; i < n; i++)
	
		printf(" %d ", arr[i]);
	
	
	return 0;
}
