#include    "Zombie.hpp"

int main()
{
    int n = 3;

    std::string user = "objmane";
    
    Zombie  *arr = zombieHorde(n,user);
    std::cout << "here" << std::endl;
    for (int i = 0; i < n; i++) {
        arr[i].announce();
    }

    delete[] arr;
}