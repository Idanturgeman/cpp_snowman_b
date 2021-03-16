#include <string>
#include <array>

namespace ariel {
    
    std::string snowman(int number);

    const std::array<std::string, 4> base = {" ( : ) ", " (\" \") ", " (___) ", " (   ) "};
    const std::array<std::string, 4> hat = {" _===_ \n", "  ___  \n ..... \n", "   _   \n  /_\\  \n", "  ___  \n (_*_) \n"};
    const std::array<char, 4> nose = {',','.','_',' '};
    const std::array<char, 4> eyes = {'.','o','O','-'};
    const std::array<char, 4> Rarm = {'>', '/', '\\', ' '};
    const std::array<char, 4> Larm = {'<', '\\', '/', ' '};
    const std::string head_tmp = " (   ) \n";
    const std::array<std::string, 4> body = {" ( : ) \n", " (] [) \n", " (> <) \n", " (   ) \n"};
    const int NUM = 8;
};