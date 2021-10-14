/// 14-Oct-2021 HW_Task1

#include <iostream>
#include <cmath>

using namespace std;
int main()
{

    double floor_x, floor_y, tile_size;

    cout << "Input 2 floor lengths and size of a tile (3 parameters):\n";
    cin >> floor_x >> floor_y >> tile_size;

    cout << "Minimum tiles needed: " << ceil(floor_x / tile_size) * ceil(floor_y / tile_size) << endl;

    return 0;
}