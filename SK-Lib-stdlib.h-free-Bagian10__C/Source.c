#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    int* ptr, i, n1, n2;

    printf("Enter size: ");
    scanf("%d", &n1);

    ptr = (int*)malloc(n1 * sizeof(int));

    printf("Addresses of previously allocated memory:\n");
    
    for (i = 0; i < n1; ++i) {
        printf("%pc\n", ptr + i);
    }
        
    printf("\nEnter the new size: ");
    scanf("%d", &n2);

    ptr = realloc(ptr, n2 * sizeof(int));

    printf("Addresses of newly allocated memory:\n");

    for (i = 0; i < n2; ++i) {
        printf("%pc\n", ptr + i);
    }
        
    free(ptr);

    _getch();
    return 0;
}