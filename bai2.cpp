#include <stdio.h>

float trung_binh(int s[], int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        sum += s[i];
    }
    return (float)sum / n;
}

int main() {
    int s[] = {1, 2, 3, 4, 5};
    int n = sizeof(s) / sizeof(s[0]);
    printf("Trung binh cua mang la %.2f", trung_binh(s, n));
    return 0;
}
