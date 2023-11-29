
//Week 7 - Exercise 5 & 6

#include <iostream>
#include <cmath>
#include <cstdlib>

const unsigned maxArraySize = 100;

void GenerateRandomArray(unsigned arr[maxArraySize][maxArraySize], unsigned arrSize);
unsigned CalculateIslands(unsigned arr[maxArraySize][maxArraySize], unsigned arrSize);

bool isSudokuSquareCorrect(unsigned matrix[9][9], unsigned rowOfSquare, unsigned colOfSquare, bool sudokuDigitsUsed[]);

int main()
{
    //unsigned matrix[maxArraySize][maxArraySize];          //Exercise 5
    //unsigned size = 0;
    //std::cin >> size;

    //GenerateRandomArray(matrix, size);

    //for (unsigned i = 0; i < size; ++i)
    //{
    //    for (unsigned j = 0; j < size; ++j)
    //    {
    //        std::cout << matrix[i][j] << " ";
    //    }
    //    std::cout << "\n";
    //}

    //std::cout << CalculateIslands(matrix, size);

    unsigned sudoku[9][9];                             //Exercise 6
    unsigned sudokuSquare[3][3];
    bool sudokuDigitsUsed[9] = { false, };
    bool isSudokuCorrect = true;

    for (unsigned i = 0; i < 9; i = i + 3)
    {
        for (unsigned j = 0; j < 9; j = j + 3)
        {
            std::cin >> sudoku[i][j];
        }
    }

    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            if (sudoku[i][j] < 1 || sudoku[i][j] > 9 || sudokuDigitsUsed[sudoku[i][j] - 1] == true) {
                isSudokuCorrect = false;
                break;
            }
        }
        if (!isSudokuCorrect)
            break;
        for (int j = 0; j < 9; ++j)
        {
            sudokuDigitsUsed[j] = false;
        }
    }

    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            if (sudoku[j][i] < 1 || sudoku[j][i] > 9 || sudokuDigitsUsed[sudoku[j][i] - 1] == true) {
                isSudokuCorrect = false;
                break;
            }
        }
        if (!isSudokuCorrect)
            break;
        for (int j = 0; j < 9; ++j)
        {
            sudokuDigitsUsed[j] = false;
        }
    }

    if (isSudokuCorrect)
    {
        for (unsigned i = 0; i < 9; i = i + 3)
        {
            for (unsigned j = 0; j < 9; j = j + 3)
            {
                isSudokuCorrect = isSudokuSquareCorrect(sudoku, i, j, sudokuDigitsUsed);
                if (!isSudokuCorrect)
                    break;
            }
            if (!isSudokuCorrect)
                break;
        }
    }

    std::cout << isSudokuCorrect;

    return 0;
}

void GenerateRandomArray(unsigned arr[maxArraySize][maxArraySize], unsigned arrSize) // Exercise 5
{
    srand(time(0));

    for (unsigned i = 0; i < arrSize; ++i)
    {
        for (unsigned j = 0; j < arrSize; ++j)
        {
            arr[i][j] = rand() % 2;
        }
    }
}

unsigned CalculateIslands(unsigned arr[maxArraySize][maxArraySize], unsigned arrSize)
{
    unsigned islandsCount = 0;

    for (unsigned i = 0; i < arrSize; ++i)
    {
        for (unsigned j = 0; j < arrSize; ++j)
        {
            if (arr[i][j] != 0)
            {
                if (arr[i][j] == 1) {
                    arr[i][j] = ++islandsCount + 1;
                }
                if (j + 1 < arrSize && arr[i][j + 1] == 1) {
                    arr[i][j + 1] = arr[i][j];
                }
                if (i + 1 < arrSize - 1 && arr[i][j + 1] == 1) {
                    arr[i + 1][j] = arr[i][j];
                }
                if (j - 1 > -1 && arr[i][j + 1] == 1) {
                    arr[i][j - 1] = arr[i][j];
                }
                if (i - 1 > -1 && arr[i][j + 1] == 1) {
                    arr[i - 1][j] = arr[i][j];
                }
            }
        }
    }

    return islandsCount;
}

bool isSudokuSquareCorrect(unsigned matrix[9][9], unsigned rowOfSquare, unsigned colOfSquare, bool sudokuDigitsUsed[]) //Exercise 6
{
    for (unsigned i = rowOfSquare; i < rowOfSquare + 3; ++i)
    {
        for (unsigned j = colOfSquare; j < colOfSquare + 3; ++j)
        {
            if (sudokuDigitsUsed[matrix[i][j] - 1] == true) {
                return false;
            }
        }
    }

    return true;
}