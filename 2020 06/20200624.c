#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int h, w;       // ����, ����
    int n;          // ���� ����
    int l, d, x, y; // ����, ����, ��ǥ
    int arr[100][100] = { 0 };

    scanf("%d %d", &h, &w);
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d %d %d %d", &l, &d, &x, &y);

        if (d == 0)
            for (int j = 1; j <= l; j++)
                arr[x][y + j - 1] = 1;
        else if (d == 1)
            for (int j = 1; j <= l; j++)
                arr[x + j - 1][y] = 1;
    }

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

        
    return 0;
}
