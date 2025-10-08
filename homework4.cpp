#include <iostream>
using namespace std;

int main() {
    char symbol;
    
    cout << "Введите символ: ";
    cin >> symbol;
    
    cout << "Символ: " << symbol << endl;
    cout << "Код: " << static_cast<int>(symbol) << endl;
    cout << "Код следующего символа: " << static_cast<int>(symbol + 1) << endl;
    cout << "Следующий символ: " << static_cast<char>(symbol + 1) << endl;
    
    return 0;
}