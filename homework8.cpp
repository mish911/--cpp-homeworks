#include <iostream>
#include <string>

bool isIsogram(const std::string& word) 
{
    for (int i = 0; i < word.length(); i++) 
    {
        if (word[i] == ' ') 
        {
            continue;
        }
        for (int j = i + 1; j < word.length(); j++) 
        {
            if (word[j] == ' ') 
            {
                continue;
            }
            if (word[i] == word[j]) 
            {
                return false;
            }
        }
    }
    return true;
}

int main() 
{
    std::string word;
    std::cout << "Введите строку: ";
    std::getline(std::cin, word);
    if (isIsogram(word)) 
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }
    return 0;
}