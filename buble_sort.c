#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
    int vec[SIZE] = { 0 };
    srand(time(NULL));

    for (size_t i = 0; i < SIZE; ++i) {
        vec[i] = rand() % 100;
    }

    printf("===Random Vector===\n");
    printf("[");
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%d%s", vec[i], i == SIZE - 1 ? "" : ", ");
    }
    printf("]\n");

    for (size_t i = 0; i < SIZE; ++i) {
        for (size_t j = i; j < SIZE; ++j) {
            if (vec[i] > vec[j]) {
                int tmp = vec[i];
                vec[i] = vec[j];
                vec[j] = tmp;
            }
        }
    }

    return 0;
}
