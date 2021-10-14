/// 14-Oct-2021 HW_Task2

/*
Преминаването от Фаренхайт към Целзий се извършва като извадите 32, умножите по 5 и разделите на 9. 
За преминаване от Целзий към Келвини добавяте 273.15. 
Напишете програма, която по въведени градуси по Фаренхайт да изведе на екрана градусите по Целзий и/или Келвини.
Изборът на изход зависи от въведена команда (след като сте въвели числената стойност)

*/

#include <iostream>
#include <cmath>

using namespace std;
int main()
{

    double celsius;

    cout<<"Input temperature in Celsius:\n";
    cin>>celsius;

    char choice;

    cout<<"Enter a choice of conversion (F or K):\n";
    cin>>choice;

    if(choice == 'F'){
        cout<<"F has been selected, value is: "<<(celsius-32)*5/9<<endl;
    }else if(choice == 'K'){
        cout<<"Kelvin has been selected, value is: "<<celsius+273.15<<endl;
    }else cout<<"Invaid choice, converting to F: "<<(celsius-32)*5/9<<endl;

    return 0;
}