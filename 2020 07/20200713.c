#include <stdio.h>
#include <string.h>

int main() {
    int k, s = 0;
    char str[21];

    scanf("%d", &k);
    scanf("%s", &str);

    for (int i = 0; i < strlen(str); i++) {
        s = (int)str[i] - 65 - (3 * (i + 1) + k) + (26 * 3);
        s %= 26; 
        s += 65;
        printf("%c", (char)s);
    }
}
