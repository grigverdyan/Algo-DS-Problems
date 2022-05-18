#include <iostream>
#include <cstdarg>
#include <string>

std::string replace(std::string str, ...);

int main()
{
    std::string str = "He#llo w#o#rl d# -> C#++ W#orld#";
    std::cout << "\nBefore replacing : " << str;
    std::cout << "\nAfter replacing : " << replace(str, 1, 2, 3, 4, 5, 6, 7);

    return 0;
}

std::string replace(std::string str, ...)
{
    va_list n;
    va_start(n, str);
    std::string replaced = "";
    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i] == '#')
        {
            replaced += std::to_string(va_arg(n, int));
            continue ;
        }
        replaced += str[i];
    }
    va_end(n);
    return (replaced);
}
