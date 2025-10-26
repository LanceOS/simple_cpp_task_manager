#include <iostream>
#include <fstream>
#include "FileHandler/FileHandler.hpp"

int main(int argc, char* argv[]) {
    std::string line;

    FileHandler fileHandler;

    fileHandler.openFile("../storage.txt");
    std::fstream& file = fileHandler.getFileStream();
    
    if(file.is_open()) {
        std::cout << "File is open" << std::endl;
    };
    while(getline(file, line)) {
        std::cout << line << std::endl;
    };
    
    fileHandler.closeFile();
 
    return 0;
};
