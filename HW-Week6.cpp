
//Week 6 - Exercise 5 - 10

#include <iostream>
#include <cstdlib>

const int arraySize = 100;

int main()
{
    /*int n = 0;                        //Exercise 5
    int arr[arraySize];
    unsigned arrSize = 0;

    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
        ++arrSize;
    }

    bool isMirrored = true;

    for (int i = 0; i < arrSize / 2; i++)
    {
        if (arr[i] != arr[arrSize - i - 1]) {
            isMirrored = false;
            break;
        }
    }

    isMirrored ? std::cout << "Mirrored!" : std::cout << "NOT Mirrored!";
    */


    /*int n = 0, search = 0;              //Exercise 6
    int arr[arraySize];
    unsigned arrSize = 0;
    bool isMet = false;
    int counterMet = 0;
    bool posMet[arraySize];


    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
        ++arrSize;
    }
    std::cin >> search;

    for (int i = 0; i < arrSize; ++i)
    {
        if (search == arr[i])
        {
            isMet = true;
            ++counterMet;
            posMet[i] = true;
        }
    }

    if (isMet) {
        std::cout << "Yes, in positions: ";
        for (int i = 0; i < arrSize; i++)
        {
            posMet[i] == 1 ? std::cout << i << ", " : std::cout << "";
        }
        std::cout << "in total of " << counterMet << " times";
    }
    else
    {
        std::cout << "Never met!";
    }
    */


    /*int matrix[5][5];                 //Exercise 7
    int rowSum[] = { 0, 0, 0, 0, 0 };

    for (int row = 0; row < 5; ++row)
    {
        for (int col = 0; col < 5; ++col)
        {
            matrix[row][col] = std::rand();
            std::cout << matrix[row][col] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int row = 0; row < 5; ++row)
    {
        for (int col = 0; col < 5; ++col)
        {
            rowSum[row] += matrix[row][col];
        }
        std::cout << rowSum[row] << "\t";
    }
    std::cout << std::endl;
    */

    /*int matrix[5][5];                 //Exercise 8
    int diagonSum[] = { 0, 0 };

    for (int row = 0; row < 5; ++row)
    {
        for (int col = 0; col < 5; ++col)
        {
            matrix[row][col] = std::rand();
            std::cout << matrix[row][col] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int diagIndex = 0; diagIndex < 5; ++diagIndex)
    {
        diagonSum[0] += matrix[diagIndex][diagIndex];
        diagonSum[1] += matrix[diagIndex][5 - diagIndex - 1];
    }
    std::cout << diagonSum[0] << " " << diagonSum[1] << std::endl;
    */


    /*int matrix[5][5];                 //Exercise 10

    for (int row = 0; row < 5; ++row)
    {
        for (int col = 0; col < 5; ++col)
        {
            std::cin >> matrix[row][col];
            matrix[row][col] += 10;
        }
    }

    for (int row = 0; row < 5; ++row)
    {
        for (int col = 0; col < 5; ++col)
        {
            std::cout << matrix[row][col] << "\t";
        }
        std::cout << std::endl;
    }
    */

    return 0;
}


