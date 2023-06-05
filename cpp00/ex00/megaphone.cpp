#include    <iostream>
#include    <cctype>

int main(int ac, char *av[])
{
    if (ac != 2){
        std::cout << "wrong count of argument" << std::endl;
        return 0;
    }
    for (int i = 0; av[1][i] != '\0'; i++){
        if (av[1][i] >= 'a' || av[1][i] <= 'z'){
            std::cout << (char)toupper(av[1][i]);
        }
        else {
            std::cout << (char)av[1][i];
        }
    }
    std::cout << std::endl;
    return 0;
}