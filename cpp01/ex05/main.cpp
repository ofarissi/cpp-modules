#include    "Harl.hpp"

int main()
{
    Harl obj;

    obj.complain("DEBUG");
    std::cout << "*******************\n";
    obj.complain("INFO");
    std::cout << "*******************\n";
    obj.complain("WARNING");
    std::cout << "*******************\n";
    obj.complain("ERROR");
    std::cout << "*******************\n";
    obj.complain("nothing");
    std::cout << "*******************\n";

    return 0;
}