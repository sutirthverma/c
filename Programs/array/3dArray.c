#include <stdio.h>

int main()
{
    int a[2][2][3] = {{{1, 2, 3}, {4, 5, 6}},
                      {{7, 8, 9}, {10, 11, 12}}};

    for (int h = 0; h < 2; h++)
    {
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 3; j++){
                printf("%d\n",a[h][i][j]);
            }
        }
    }
    return 0;
}