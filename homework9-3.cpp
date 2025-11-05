#include <iostream>
using namespace std;

void countdown(int n) 
{
    // если n = 0
    if (n == 0) 
    {
        return;
    }
    
    cout << n << " ";

    countdown(n - 1);
}

int main() 
{
    int n;
    
    cout << "Введите число: ";
    cin >> n;
    
    countdown(n);
    cout << endl;
    
    return 0;
}