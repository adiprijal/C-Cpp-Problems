// Learn to take input

#include <stdio.h>

int main() {
	int i, j;
	


    // Input for integer
    printf("Enter an integer: ");
    int num;
    scanf("%d", &num);

    // Input for string (without spaces)
    printf("Enter a string: ");
    char str_array[100];
    scanf("%s", str_array);

    // Input for string (possibly with spaces)
    printf("Enter a string with spaces: ");
    char str_gets[100];
    scanf(" %[^\n]", str_gets);
    
    // Input for array size and elements
    printf("Enter the size of the array: ");
    int arr_size;
    scanf("%d", &arr_size);
    printf("Enter the elements of the array of integer: ");
    int arr[arr_size];
    for (i = 0; i < arr_size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input for 2D array size and elements
    printf("Enter the number of rows in the 2D array: ");   
    int rows;
    scanf("%d", &rows);
    printf("Enter the elements of the 2D array of integer: ");
    int arr2D[rows][2];
    for (i = 0; i < rows; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &arr2D[i][j]);
        }
    }

    // Print all the data
    printf("%d\n", num);
    printf("%s\n", str_array);
    printf("%s\n", str_gets);
    for (i = 0; i < arr_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", arr2D[i][j]);
        }
        printf("\n");
    }

    return 0;
}
