#include <iostream>
#include "TaskMaker.hpp"
#include "../FileHandler/FileHandler.hpp"
#include "../Types/Types.hpp"
#include "../Formatter/Formatter.hpp"
#include <vector>
#include <fstream> 



bool TaskMaker::createTask(const std::string& taskName, const std::string& taskDesc) {
  FileHandler::openFile("./storage.txt");
  std::string line;

  std::fstream file = FileHandler::getFileStream(); 

  while(getline(file, line)) {
    std::cout << linen << std::endl;
  };
  
  FileHandler::closeFile();

  return false;
};

int TaskMaker::getNumOfTasks() {
  return 0;
};


