#include <stdio.h>

int main()
{
    int a = 6, b = 3, c = 8;

    int sum;
    float avg;

    sum = a + b + c;
    avg = sum / 3.0;

    printf("sum: %d\n", sum);
    printf("avg: %.2f\n", avg);

    return 0;
}