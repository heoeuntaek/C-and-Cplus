#include <stdio.h>

void print_arr(int sort[4][4], int x, int y) {
    int i, j;
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            printf("%2d ", sort[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{

#include<stdio.h>

    int sort[4][4] = { {5,8,10,15},{6,9,2,14}, {3,12,16,13},{1,11,7,4} };


    int i, j;
    int x = sizeof(sort[0]) / sizeof(int);
    int y = sizeof(sort) / sizeof(sort[0]);
    int tmp1 = sizeof(sort) / sizeof(int);

    print_arr(sort, x, y);
    for (i = 0; i < tmp1; i++) {
        for (j = 0; j < tmp1; j++) {
            if (*(*sort + i) < *(*sort + j)) {
                int tmp2 = *(*sort + j);
                *(*sort + j) = *(*sort + i);
                *(*sort + i) = tmp2;
            }
        }
    }
    print_arr(sort, x, y);
    return 0;
}