#include    <iostream>
#include    <fstream>

int main(int ac, char **av)
{
    if (ac != 4) {
        std::cout << "wrong count of arg!" << std::endl;
        return 0;
    }

    if (!av[2][0])
        return ((void)(std::cout << "Nothing To Replace\n"), 1);
    // Step1: Open file and read the content

    std::string     tmp;
    std::ifstream   infile(av[1]);

    if (infile.is_open()){
        std::string line;
        while (getline(infile, line)){
            tmp += line;
            if (!infile.eof()){
                tmp += "\n";
            }
        }
    }

    // Step2: Find occurence and replace it

    std::string s1 = av[2];
    std::string s2 = av[3];
    size_t i = 0;
    size_t pos;

    while ((pos = tmp.find(s1, i)) != std::string::npos)
    {
        tmp.erase(pos, s1.length());
        tmp.insert(pos, s2);
        i = pos + s2.length();
    }

    // Step3: Create the .replace file

    std::ofstream outfile;
    outfile.open((av[1] + std::string(".replace")).c_str());
    outfile << tmp;
    return 0;
}