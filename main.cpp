#include <iostream>
#include <cstdio>
#include "functions.h"


int main()
{
    std::setlocale(LC_ALL, "Russian");
    float arr[3];
    int n;
    n=3;
    for(int i = 0; i < 3; i++) {
        std::cout << "Enter number" << i << "=";
        std::cin >> arr[i];
    }
    findMinValue(arr);
    return 0;
}
