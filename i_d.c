#include<stdio.h>
#define MAX_SIZE 100
int main()
{
	int arr[MAX_SIZE], i, pos, n, value, choice;
	
	printf("Enter the number of element of the array:\n");
	scanf("%d", & n);
	printf("Enter %d elements of the array: \n", n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", & arr[i]);
	}
	
	printf("Operations:\n");
	printf("1. Insertion operation\n");
	printf("2. Deletion operation\n");
	printf("Enter your choice: \n");
	scanf("%d", & choice);
	
	switch(choice)
	{
		case 1:
			printf("Enter the position you want to insert the element: \n");
			scanf("%d", & pos);
			
			if (pos < 1 || pos > n + 1)
			{
				printf("Invalid position");
				break;
			}
			
			printf("Enter the value you want to insert: \n");
			scanf("%d", & value);
			
			for(i = n - 1; i >= pos; i--)
			{
				arr[i + 1] = arr[i];
			}
			arr[pos - 1] = value;
			n++;
			
			printf("Insertion operation successfull\n");
			break;
		
		case 2:
			printf("Enter the position of the element to be deleted: \n");
			scanf("%d", & pos);
			
			if(pos < 1 || pos > n)
			{
				printf("The position is invalid");
				break;
			}
			
			for(i = pos - 1; i < n - 1; i++)
			{
				arr[i] = arr[i + 1];
			}
			
			n--;
			
			printf("The element has been deleted successfully\n");
			break;
		
		default:
			printf("Invalid choice!\n");
			break;
	}
	
	printf("The array after operation is:\n");
	
	for(i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
	
}
