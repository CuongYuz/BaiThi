#include <stdio.h>
#define MAX 100 

void nhap_mang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}


int tim_so_chan_cuoi_cung(int a[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] % 2 == 0) {
            return a[i]; 
        }
    }
    return -1; 
}


int main() {
    int a[MAX]; 
    int n; 
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n); 
    nhap_mang(a, n);
    int kq = tim_so_chan_cuoi_cung(a, n); 
    if (kq == -1) {
        printf("Khong co so chan\n");
    } else {
        printf("So chan cuoi cung la: %d\n", kq); 
    }
    return 0;
}

