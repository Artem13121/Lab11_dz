#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "rus");
    int n;
    printf("—колько чисел? \n");
    scanf("%d", &n);
    int A[10]; 
    printf("¬ведите %d чисел: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    int min = A[0], max = A[0];
    for (int i = ; i < n; i++) {
        if (A[i] < min) min = A[i];
        if (A[i] > max) max = A[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] != min && A[i] != max) {
            sum += A[i];
        }
    }
    printf("—умма без %d и %d = %d\n", min, max, sum);
    return 0;
}