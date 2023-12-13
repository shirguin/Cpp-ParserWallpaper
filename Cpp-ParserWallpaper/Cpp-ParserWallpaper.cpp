#include <iostream>
#include <fstream>
#include <string>

#include <regex>

int main()
{
    setlocale(LC_ALL, "ru");

    //std::ofstream out;
    //out.open("hellow.txt");
    //if (out.is_open())
    //{
    //    out << "adidas" << std::endl;
    //}
    //out.close();

    std::string line;
    std::cmatch result;
    std::regex regular("[0-9]{5}[-]{1}[0-9]{2}");

    std::string article;

    std::ifstream in("data.txt"); // окрываем файл для чтения
    if (in.is_open())
    {
        while (std::getline(in, line))
        {
            //std::cout << line << std::endl;
            std::regex_search(line.c_str(), result, regular);
            
            article = result[0];
            std::cout << article << std::endl;
        }
    }
    in.close();     // закрываем файл
}


