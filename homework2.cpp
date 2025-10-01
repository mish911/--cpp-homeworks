#include <iostream>
using namespace std;

int main() 
{
    double num1, num2, num3;
    
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;
    cout << "Введите третье число: ";
    cin >> num3;

    double average = (num1 + num2 + num3) / 3;
    
    cout << "Среднее арифметическое: " << average << endl;
    
    return 0;
}
