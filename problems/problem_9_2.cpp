#include <iostream>
#include <string>

template <typename T, typename... U>
std::string replace(std::string str, T arg1, U ... args)
{
    std::string replaced = "";
    for (auto i = 0; i < str.size(); i++)
    {
        if (str[i] == '#')
        {
            replaced += std::to_string(arg1);
            continue ;
        }
        replaced += str[i];
    }
    
    return replace(replaced, args ...);
}

int main()
{
    std::string str = "He#llo w#o#rl d# -> C#++ W#orld#";
    std::cout << "\nBefore replacing : " << str;
    std::cout << "\nAfter replacing : " << replace(str, 1, 2, 3, 4, 5, 6, 7);

    return 0;
}

