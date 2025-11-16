# Домашнее задание к 11 работе
### Условие:
<img width="811" height="93" alt="image" src="https://github.com/user-attachments/assets/7f13ba05-361d-438d-b9a4-1c7c65f36911" />

### Найти сумму элементов массива, за исключением минимального и максимального значения

### Алгоритм:
  1. Начало
  2. Ввести количество чисел массива(n)
  3. Ввод самих чисел
  4. Через цикл for перебираем числа, далее проверяем их через if и тем самым находим максимальное и минимальное.
  5. Далее находим сумму всех остальных
  6. Конец.

### Блок-схема:
<img width="121" height="821" alt="Диаграмма без названия Lab11 drawio" src="https://github.com/user-attachments/assets/b5388183-1372-4bbf-902a-ac67551cbe5c" />

### Программа:
```
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "rus");
    int n;
    printf("Сколько чисел? \n");
    scanf("%d", &n);
    int A[10]; 
    printf("Введите %d чисел: \n", n);
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
    printf("Сумма без %d и %d = %d\n", min, max, sum);
    return 0;
}
```
### Контрольный пример:
Возьмём 5 чисел: 1, 2, 3, 4, 5
Минимальное - 1
Максимальное - 5
Сумма остальных = 9
Результат 9

### Результат работы программы:
Пусть n = 5
Введём числа от 1 - 5
Получим результат 9

### Информация о разработчике:
Лантрат Артём, бИЦ - 251
