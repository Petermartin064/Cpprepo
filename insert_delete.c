#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int array[MAX_SIZE], i, n, pos, value, choice;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++) { 
        scanf("%d", &array[i]);
    }

    while (1) {
        printf("\nChoose an operation:\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the position where you want to insert an element: ");
                scanf("%d", &pos);

                if (pos < 1 || pos > n+1) {
                    printf("Invalid position!\n");
                    break;
                }

                printf("Enter the value you want to insert: ");
                scanf("%d", &value);

                for (i = n-1; i >= pos-1; i--) {
                    array[i+1] = array[i];
                }

                array[pos-1] = value;
                n++;

                printf("Element inserted successfully!\n");
                break;

            case 2:
                printf("Enter the position where you want to delete an element: ");
                scanf("%d", &pos);

                if (pos < 1 || pos > n) {
                    printf("Invalid position!\n");
                    break;
                }

                for (i = pos-1; i < n-1; i++) {
                    array[i] = array[i+1];
                }

                n--;

                printf("Element deleted successfully!\n");
                break;

            case 3:
                printf("Exiting program...");
                return 0;

            default:
                printf("Invalid choice!\n");
                break;
        }

        printf("\nArray after operation:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}

