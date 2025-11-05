#include <iostream>
using namespace std;

void changeSigns(int &a, int &b) 
{
    a = -a;
    b = -b;
}

int main() 
{
    int num1, num2;
    
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;
    
    changeSigns(num1, num2);
    
    cout << "После изменения знаков: " << num1 << " " << num2 << endl;
    
    return 0;
}