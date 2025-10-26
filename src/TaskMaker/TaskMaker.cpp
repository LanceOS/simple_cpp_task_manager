#include <iostream>
#include "TaskMaker.hpp"
#include <fstream> 

bool TaskMaker::createTask(const std::string& taskName, const std::string& taskDesc) {
  std::ofstream myFile ("storage.txt");
  if(myFile.is_open()) { 
    myFile << "Test write";
    myFile.close();
    return true;
  };
  std::cout << "Failed to open file and write" << std::endl;
  return false;
};

int TaskMaker::getNumOfTasks() {
  return 0;
};


