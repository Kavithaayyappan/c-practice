#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    double arr[n], sum = 0;

    for(int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }

    double mean = sum / n;
    double variance = 0;

    for(int i = 0; i < n; i++)
        variance += pow(arr[i] - mean, 2);

    variance /= n;
    double stddev = sqrt(variance);

    printf("Mean: %.2f\nVariance: %.2f\nStdDev: %.2f\n", mean, variance, stddev);
    return 0;
}