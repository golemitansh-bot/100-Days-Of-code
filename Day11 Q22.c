#include <stdio.h>

int main() {
    double costPrice, sellingPrice, percentage;

    scanf("%lf %lf", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        percentage = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit %g%%", percentage);
    } else if (sellingPrice < costPrice) {
        percentage = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss %g%%", percentage);
    } else {
        printf("No Profit No Loss");
    }

    return 0;
}
