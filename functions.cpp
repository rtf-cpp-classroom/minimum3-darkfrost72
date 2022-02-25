#include <iostream>
#include <cstdio>
#include "functions.h"

float findMinValue()
{
    std::setlocale(LC_ALL, "Russian");
    float arr[3];
    int n;
    n=3;
    for(int i = 0; i < 3; i++) {
        std::cout << "Enter number" << i << "=";
        std::cin >> arr[i];
    }
    float min = arr[0];
    for(int i = 0; i < 3; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    std::cout << min;
    return 0;
}
