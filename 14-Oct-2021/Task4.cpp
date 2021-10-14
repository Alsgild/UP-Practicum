/// 14-Oct-2021 Task4

#include <iostream>

using namespace std;
int main()
{

    int threeDigitNum;

    cout << "Input a 3-digit number:\n";
    cin >> threeDigitNum;

    int firstDigit = threeDigitNum / 100, secondDigit = (threeDigitNum / 10) % 10, thirdDigit = (threeDigitNum % 10);

    cout << "The number's digits are: " << firstDigit << " " << secondDigit << " " << thirdDigit << endl;
    cout << "Their total sum is: " << firstDigit + secondDigit + thirdDigit << endl;

    return 0;
}