#include <iostream>
using namespace std;

int minValue(int a, int b) 
{
    return (a < b) ? a : b;
}

int main() 
{
    int num1, num2;
    
    cout << "Введите два числа: ";
    cin >> num1 >> num2;
    
    int result = minValue(num1, num2);
    cout << "Минимум: " << result << endl;
    
    return 0;
}