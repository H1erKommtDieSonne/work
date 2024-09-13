#include <stdio.h>
#include <stdlib.h>


void function1() {
    int size, ii;

    printf("введи размер массива: ");
    scanf("%d", &size);

    int *array = (int *) malloc(size * sizeof(int));
    if (array == NULL) {
        fprintf(stderr, "беда с памятью\n");
        exit(1);
    }
    
    printf("вводи элементы:\n");
    for (ii = 0; ii < size; ii++) {
        scanf("%d", &array[ii]);
    }
    
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {

        for (j = i + 1; j < size; j++) {

            if (array[i] < array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    
    printf("че вышло: ");
    for (ii = 0; ii < size; ii++) {
        printf("%d ", array[ii]);
    }
    printf("\n");


    free(array);
}