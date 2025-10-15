#include <iostream>
using namespace std;

int main() {
    // Задание 1
    cout << "Задание 1." << endl;
    int num1, num2;
    
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;
    
    cout << "Результат побитового AND: " << (num1 & num2) << endl;
    cout << "Результат побитового OR: " << (num1 | num2) << endl;
    cout << "Результат побитового XOR: " << (num1 ^ num2) << endl;
    
    cout << endl;

    // Задание 2
    cout << "Задание 2" << endl;
    int score;
    
    cout << "Введите количество баллов: ";
    cin >> score;
    
    if (score >= 0 && score <= 100) {
        if (score >= 80) {
            cout << "Оценка: Отлично" << endl;
        } else if (score >= 60) {
            cout << "Оценка: Хорошо" << endl;
        } else if (score >= 40) {
            cout << "Оценка: Удовлетворительно" << endl;
        } else {
            cout << "Оценка: Неудовлетворительно" << endl;
        }
    } else {
        cout << "Ошибка: баллы должны быть в диапазоне 0-100" << endl;
    }
    
    cout << endl;

    // Задание 3
    cout << "Задание 3" << endl;
    int N;
    
    cout << "Введите N: ";
    cin >> N;
    
    cout << "Чётные числа от 1 до " << N << ":" << endl;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}