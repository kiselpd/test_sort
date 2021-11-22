#include <stdio.h>

#include "includes/algorithms.h"

void shell_sort(int* arr, int size, int reverse_bit) {

	//printf("called shell_sort, size = %d\n", size);

    int i, j, step;
    int tmp;

    for (step = size / 2; step > 0; step /= 2)
        for (i = step; i < size; i++) {

        tmp = arr[i];

            for (j = i; j >= step; j -= step) {

                if (tmp < arr[j - step])
                    arr[j] = arr[j - step];
                else
                    break;
            }

            arr[j] = tmp;
        }
}

void insertion_sort(int* arr, int size, int reverse_bit) {

	//printf("called insertion_sort, size = %d\n", size);

    int newElement, location;

    for (int i = 1; i < size; i++) {

        newElement = arr[i];
        location = i - 1;

        while (location >= 0 && arr[location] > newElement) {

            arr[location + 1] = arr[location];
            location = location - 1;
        }

        arr[location + 1] = newElement;
    }
}