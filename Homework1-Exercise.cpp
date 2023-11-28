
#include <iostream>
#include <cmath>
#include <cstdlib>

void GenerateRandomNumbers(int arr[], unsigned arrSize, int endNum);
float MathPower(float number, int power);
float CalculateFunction(int arr[], unsigned arrSize, float xValue);

const unsigned MaxArraySize = 100;
const float delta = 0.01;

int main()
{
    int countIn = -1;
    int numFactors[MaxArraySize];
    unsigned numFactorsSize = 0;

    float startX = 0, endX = 0;
    float funcArea = 0;

    std::cin >> numFactorsSize;

    GenerateRandomNumbers(numFactors, numFactorsSize, 10);

    for (int i = 0; i < numFactorsSize - 1; ++i)
    {
        std::cout << numFactors[i] << "x^" << numFactorsSize - 1 - i << " + ";
    }
    std::cout << numFactors[numFactorsSize - 1] << std::endl;

    //for (int i = 0; i < numFactorsSize; ++i)
    //{
    //    std::cin >> numFactors[i];
    //    if (numFactors[i] < -10 || numFactors[i] > 10) { --i; }
    //}

    std::cin >> startX >> endX;
    if (startX > endX)
    {
        float t = startX;
        startX = endX;
        endX = t;
    }

    float funcValue = CalculateFunction(numFactors, numFactorsSize, startX), nextFuncValue = 0;
    for (float x = startX; x < endX; x += delta)
    {
        nextFuncValue = CalculateFunction(numFactors, numFactorsSize, x + delta);
        funcArea += (abs(funcValue) + abs(nextFuncValue)) / 2 * delta;
        funcValue = nextFuncValue;
    }

    std::cout << funcArea << std::endl;
}

void GenerateRandomNumbers(int arr[], unsigned arrSize, int endNum)
{
    srand(time(0));

    for (unsigned i = 0; i < arrSize; ++i) {
        arr[i] = (rand() % RAND_MAX) % endNum * (rand() % 2 ? 1 : -1);
    }
}

float MathPower(float number, int power)
{
    float result = 1;
    for (int i = 1; i <= power; ++i)
    {
        result *= number;
    }

    return result;
}

float CalculateFunction(int arr[], unsigned arrSize, float xValue)
{
    float function = 0;
    for (int i = 0; i < arrSize; ++i)
    {
        function += arr[i] * MathPower(xValue, arrSize - 1 - i);
    }

    return function;
}