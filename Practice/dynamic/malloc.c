#include <stdio.h>
#include <stdlib.h>
  
int main()
{
  
    // This pointer will hold the
    // base address of the block created
    int* ptr;
    int n, i;
  
    // Get the number of elements for the array
    printf("Enter number of elements: \n");
    scanf("%d",&n);
  
    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));
    int* arr = ptr;
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
  
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
  
        // Get the elements of the array
        for (i = 0; i < n; ++i) 
        {
            (*ptr) = i+1;
            ptr++;
        }

        ptr-- ;
        // Print the elements of the array
        printf("The elements of the array are: \n");
        for (i = 0; i < n; ++i) 
        {
            printf("%x  ",arr);
            printf("%d\n", *arr);
            arr++;
        }
    }
    
    return 0;
}