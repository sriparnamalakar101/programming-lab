#include <stdio.h>

int main() {
    float p, r, t, si;

    printf("Enter Principal amount: ");
    scanf("%f", &p);

    printf("Enter Rate of Interest: ");
    scanf("%f", &r);

    printf("Enter Time (in years): ");
    scanf("%f", &t);

    // Formula: SI = (P × R × T) / 100
    si = (p * r * t) / 100;

    printf("Simple Interest = %.2f\n", si);

    return 0;
}

