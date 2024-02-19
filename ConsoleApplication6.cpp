#include <iostream>
#include <Windows.h>
#include <string>
#include <cstdio>
#include <cmath>
#include <vector>
#include <complex>
using namespace std;
int main() {
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    const int str = 3;
    const int elem = 5;
    float mas[str][elem];
    cout << "Введите элементы массива:" << endl;
    int i = 0;
    int a = 0;
    while (i < str)
    {
        int j = 0;   
        while (j < elem)
        {
            cout<<"Строка "<<i+1<< " столбец с номером " << j+1<<" ";
            cin >> mas[i][j];
            j++;
        }
        i++;

    }
    while (a < str)
    {
        float sum = 0;
        int b = 0;
        while (b < elem)
        {
            sum += mas[a][b];
            b++;
        }
        float otvet = sum / elem;
        cout << "Среднее арифметическое ряда " << a + 1 << " равняется " << otvet << endl;
        a++;
    }
    return 0;
}