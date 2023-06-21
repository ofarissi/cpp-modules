#include    "Zombie.hpp"

int main()
{
    int n = 3;

    std::string user = "othm";
    
    Zombie  *arr = zombieHorde(n, user);
    for (int i = 0; i < n; i++) {
        arr[i].announce();
    }

    delete[] arr;
}