/// 14-Oct-2021 Task3

#include <iostream>

using namespace std;
int main()
{

    double firstNumber, secondNumber;

    cout << "Input 2 numbers:\n";

    cin >> firstNumber >> secondNumber;

    double temp = firstNumber;

    firstNumber = secondNumber;
    secondNumber = temp;

    cout << "First number now hold a value of: " << firstNumber << "\n";
    cout << "Second number now hold a value of: " << secondNumber << "\n";

    return 0;
}