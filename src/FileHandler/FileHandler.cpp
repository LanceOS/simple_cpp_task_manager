#include <iostream>
#include <fstream>
#include "FileHandler.hpp"

bool FileHandler::openFile(const std::string& fileName) {
  storageFile.open(fileName, std::ios::in | std::ios::out);

  return storageFile.is_open();
};

void FileHandler::closeFile() {
  if(storageFile.is_open()) {
    storageFile.close();
  };
};



