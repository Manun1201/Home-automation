#include <stdio.h>

int main() {
    int m, n, giftId;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);
    printf("Enter the gift ID: ");
    scanf("%d", &giftId);

    int totalItems = m * n;

    if (giftId <= n || giftId > (totalItems - n) || giftId % n == 0 || giftId % n == 1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
