#include <iostream>

bool isPalindrome(int x) 
{
    if (x < 0) 
    {
        return false;
    }
    if (x % 10 == 0 && x != 0) 
    {
        return false;
    }
    int reversed = 0;
    int original = x;
    while (x > 0) 
    {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    return original == reversed;
}

int main() 
{
    int x;
    std::cout << "Введите число: ";
    std::cin >> x;
    if (isPalindrome(x)) 
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }
    return 0;
}