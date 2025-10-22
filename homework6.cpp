#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void zadanie1() {
    cout << "Задание 1" << endl;
    
    const int SIZE = 5;
    int arr[SIZE];
    srand(time(0));
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 10 + 1;
    }
    cout << "Элементы массива:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int maxElement = arr[0];
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    
    cout << "Максимальный элемент: " << maxElement << endl;
    cout << endl;
}

void zadanie2() {
    cout << "Задание 2" << endl;
    
    const int ROWS = 2;
    const int COLS = 3;
    int matrix[ROWS][COLS];
    int counter = 1;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = counter++;
        }
    }
    cout << "Элементы массива:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void zadanie3() {
    cout << "Задание 3" << endl;
    
    string str1, str2;
    cout << "Введите первую строку: ";
    getline(cin, str1);
    
    cout << "Введите вторую строку: ";
    getline(cin, str2);
    string result = str1 + str2;
    cout << "Результат: " << result << endl;
}

int main() {
    zadanie1();
    zadanie2();
    zadanie3();
    
    return 0;
}