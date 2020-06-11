#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    int arr[11][11], result;

    for (int i = 0; i < 11; i++)
        for (int j = 0; j < 10; j++)
            scanf("%d", &arr[i][j]);

    for (int i = 0; i < 10; i++)
    {
        if (arr[10][i] == 0) continue;
        result = 0;
        for (int j = 9; j >= 0; j--)
        {
            if (arr[j][i] != 0)
            {
                result = arr[j][i];
                break;
            }
        }

        if (result == 0) printf("%d safe\n", i + 1);
        else if (result > 0) printf("%d crash\n", i + 1);
        else printf("%d fall\n", i + 1);
    }
}