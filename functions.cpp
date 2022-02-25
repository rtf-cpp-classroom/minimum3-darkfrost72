#include <iostream>
#include <cstdio>
#include "functions.h"

float findMinValue(float arr[])
{
    float min = arr[0];
    for(int i = 0; i < 3; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    std::cout << min;
    return 0;
}
