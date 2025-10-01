#include <iostream>
using namespace std;

int main() 
{
    int num1, num2;

    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;

    int remainder = num1 % num2;

    cout << "Остаток от деления: " << remainder << endl;
    
    return 0;
}