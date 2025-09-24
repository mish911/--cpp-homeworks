#include <iostream>
#include <string>

int main() 
{
    // Запрос имени пользователя
    std::string userName;
    std::cout << "Введите ваше имя: ";
    std::getline(std::cin, userName);

    // Вывод персонального приветствия
    std::cout << "Привет, " << userName << "! Добро пожаловать!" << std::endl;

    return 0;
}