#include <iostream>

int main(int argc, char **argv)
{
    std::string end = "";

    if (!argv[1])
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; i < argc; i++)
    {
        std::string bob = argv[i];

        for (size_t j = 0; j < bob.length(); j++)
            end += std::toupper(bob[j]);
    }
    std::cout << end << std::endl;
    return (0);
}