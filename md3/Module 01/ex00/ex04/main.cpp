#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    if(ac != 4)
        exit(1);
    std::string contents;
    std::string search;
    std::string replace;
    std::ifstream  myfile;
    std::ofstream otfile;
    size_t position = 0;
    search = av[2];
    replace = av[3];
    myfile.open(av[1]);
    otfile.open(((std::string)av[1] + ".replace"));
    if(!myfile)
    {
       std::cout << "l'files machi huma haduk"<<std::endl;
       exit(1);
    }
    if(search.empty())
    {
       std::cout << "Search is empty"<<std::endl;
       exit(1);
    }
    if(myfile.is_open())
    {
        while(getline(myfile, contents))
        {
            position = 0;
            while((position = contents.find(search, position)) != std::string::npos)
            {
                contents.erase(position, search.size());
                contents = contents.substr(0, position) + replace + contents.substr(position, contents.size());
                position += replace.size();
            }
               otfile << contents + "\n";
        }
        myfile.close();
        otfile.close();
        std::cout<<"File close successfully."<<std::endl; 

    }
    else 
        std::cout << "maymknch" << std::endl;

}