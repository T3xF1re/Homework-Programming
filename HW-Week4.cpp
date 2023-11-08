
//Week 4 - Exercise 3 - 8

#include <iostream>
#include <cmath>

void CreateMatrix(unsigned, unsigned);

double Pow2x(double);

double BiggestFrom3(double, double, double);

double Deposit(double, double);
double Withdraw(double, double);
double CheckBalance(double);

int DigitCount(unsigned, unsigned);

bool ifTwoGoUp(int, int);
bool ifThreeGoUp(int, int, int);
bool ifFourGoUp(int, int, int, int);
bool ifFiveGoUp(int, int, int, int, int);

int main()
{
    //unsigned n = 0, m = 0;    //Exercise 3
    //std::cin >> n >> m;
    //CreateMatrix(n, m);

    //double x = 0;               //Exercise 4
    //std::cin >> x;
    //std::cout << Pow2x(x);

    //double num1 = 0, num2 = 0, num3 = 0;               //Exercise 5
    //std::cin >> num1 >> num2 >> num3;
    //double biggest = BiggestFrom3(num1, num2, num3);
    //std::cout << biggest << std::endl;

    //double balance = 0;                                //Exercise 6
    //char operation = ' ';
    //std::cout << "What is your balance (in $): ";
    //std::cin >> balance;
    //do
    //{
    //    std::cout << "What do you want to do now? (Write d:deposit, w:withdraw, c:check the current balance, e:end): ";
    //    std::cin >> operation;
    //    switch (operation)
    //    {
    //    case 'd':
    //    {
    //        double money = 0;
    //        std::cout << "How much you want to deposit: ";
    //        std::cin >> money; 
    //        balance = Deposit(balance, money); break;
    //    }
    //    case 'w':
    //    {
    //        double money = 0;
    //        std::cout << "How much you want to withdraw: ";
    //        std::cin >> money;
    //        balance = Withdraw(balance, money); break;
    //    }
    //    case 'c':
    //    { 
    //        std::cout << "You have " << CheckBalance(balance) << "$ in your bank account!" << std::endl; break;
    //    }
    //    case 'e': break;
    //    default:
    //    {
    //        std::cout << "Unknown operation!";
    //        return 1;
    //    }
    //    }
    //} while (operation != 'e');

    //unsigned number = 0, digit = 0;                    //Exercise 7
    //do 
    //{
    //    std::cin >> number;
    //} while (number < 1000 || number > 999999999);
    //std::cin >> digit;

    //int count = DigitCount(number, digit);
    //std::cout << "The digit " << digit << " has been met " << count << " times!";

    //I didn't know what should the main program do for Exercise 8 ;(
}

//Exercise 3
void CreateMatrix(unsigned n, unsigned m)
{
    while (n != m)
    {
        std::cout << "Try with equal numbers:" << std::endl;
        std::cin >> n >> m;
    }
    for (unsigned i = 0; i < n; ++i)
    {
        for (unsigned j = 0; j < m; ++j)
        {
            if (i == j) {
                std::cout << i << " ";
            }
            else if (j > i) {
                std::cout << j - i << " ";
            }
            else {
                std::cout << i * j << " ";
            }
        }
        std::cout << std::endl;
    }
}

//Exercise 4
double Pow2x(double x)
{
    return x * x;
}

//Exercise 5
double BiggestFrom3(double number1, double number2, double number3)
{
    if (number1 >= number2) {
        if (number1 >= number3) {
            return number1;
        }
        else {
            return number3;
        }
    }
    else {
        if (number2 >= number3) {
            return number2;
        }
        else {
            return number3;
        }
    }
}

//Exercise 6
double Deposit(double balance, double money)
{
    return balance += money;
}

double Withdraw(double balance, double money)
{
    return balance -= money;
}

double CheckBalance(double balance)
{
    return balance;
}

//Exercise 7
int DigitCount(unsigned number, unsigned digit)
{
    int counter = 0;
    while (number > 0)
    {
        if (number % 10 == digit) {
            counter++;
        }
        number /= 10;
    }
    return counter;
}

//Exercise 8
bool ifTwoGoUp(int num1, int num2)
{
    if (num1 < num2) {
        return true;
    }
    else {
        return false;
    }
}

bool ifThreeGoUp(int num1, int num2, int num3)
{
    if (ifTwoGoUp(num1, num2) && num2 < num3) {
        return true;
    }
    else {
        return false;
    }
}

bool ifFourGoUp(int num1, int num2, int num3, int num4)
{
    if (ifThreeGoUp(num1, num2, num3) && num3 < num4) {
        return true;
    }
    else {
        return false;
    }
}

bool ifFiveGoUp(int num1, int num2, int num3, int num4, int num5)
{
    if (ifFourGoUp(num1, num2, num3, num4) && num4 < num5) {
        return true;
    }
    else {
        return false;
    }
}