/// 14-Oct-2021 Task2

#include <iostream>
#include <cmath>

using namespace std;
int main()
{

    double x1, x2, y1, y2;

    cout << "Input X coordinates:\n";
    cin >> x1 >> y1;
    cout << "Input Y coordinates:\n";
    cin >> x2 >> y2;

    double x_distance, y_distance;

    x_distance = abs(x1 - x2);
    y_distance = abs(y1 - y2);

    cout << "Range between X and Y is: " << sqrt(pow(x_distance, 2) + pow(y_distance, 2)) << "\n";

    return 0;
}