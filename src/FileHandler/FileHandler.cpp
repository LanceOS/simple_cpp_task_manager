#include <iostream>
#include <fstream>
#include "FileHandler.hpp"

bool FileHandler::openFile(const std::string& fileName) {
  storageFile.open(fileName, std::ios::in);
  if(!storageFile.is_open()) {
    std::cout << "File failed to open" << std::endl;
  };
  return storageFile.is_open();
};

void FileHandler::closeFile() {
  if(storageFile.is_open()) {
    std::cout << "File closed" << std::endl;
    storageFile.close();
  };
};



