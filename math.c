//
// Created by 김재훈 on 2021/02/13.
//

#include "math.h"

float add(float num1, float num2)
{
    float result = num1 + num2;
    return result;
}

float subtract(float num1, float num2)
{
    float result = num1 - num2;
    return result;
}

float multiply(float num1, float num2)
{
    float result = num1 * num2;
    return result;
}

float divide(float num1, float num2)
{
    float result = num1 / num2;
    return result;
}

float power(float num1, float num2)
{
    float result = 1;
    while (num2 != 0) {
        result *= num1;     // result = result * num1
        --num2;              // Decrement first and then return num2
    }
    return result;
}

float recursivePower(float num1, float num2)
{
    float result;
    if (num2 != 0)
    {
        result = num1 * (recursivePower(num1, num2 - 1));
        return result;
    }
    else
    {
        result = 1;
        return result;
    }
}
