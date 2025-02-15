// Sort string in an array

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRINGS 5
#define MAX_LENGTH 20

 main() {
    int i, j;
    char **s;
    char temp[5];  
    
    
    s = (char **)calloc(20, sizeof(char *));
    
   
    for (i = 0; i < 5; i++) {
        s[i] = (char *)calloc(20, sizeof(char));
    }

    
    printf("Enter 5 strings (each with a maximum length of 19 characters):\n");
    for (i = 0; i < 5; i++) {
        scanf("%s", s[i]);
    }

    for (i = 0; i < 5 - 1; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(s[i], s[j]) > 0) {
               
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    printf("\nSorted strings:\n");
    for (i = 0; i < MAX_STRINGS; i++) {
        printf("%s\n", s[i]);
    }

   
    for (i = 0; i < MAX_STRINGS; i++) {
        free(s[i]); 
    }
    free(s); 


}
