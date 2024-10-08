#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: invalid amount of arguments" << std::endl;
        return (1);
    }
    if (!argv[1][0])
    {
        std::cerr << "Error: empty argument" << std::endl;
        return (1);
    }
    ScalarConverter::convert((const std::string)argv[1]);
    return (0);
}
