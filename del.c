#include<stdio.h>

int main() {
   int arr[] = {18, 30, 15, 70, 12}; // declare and initialize array
   int k = 30, n = 5; // element to be deleted and size of array
   int i, j; // loop counters

   printf("Given array elements are :\n");
   for(i = 0; i < n; i++) {
      printf("arr[%d] = %d,  ", i, arr[i]); // print array elements
   }

   j = 0; // initialize index counter to 0

   while (arr[j] != k && j < n) {
      j++; // search for index of element to be deleted
   }

   if (j == n) { // if element is not found
      printf("\nElement %d not found in array.\n", k);
   } else { // if element is found
      for (i = j; i < n - 1; i++) {
         arr[i] = arr[i + 1]; // shift array elements left
      }
      n--; // decrement size of array
      printf("\nArray elements after deleting %d:\n", k);
      for (i = 0; i < n; i++) {
         printf("arr[%d] = %d,  ", i, arr[i]); // print updated array elements
      }
   }

   return 0; // indicate successful program completion
}

