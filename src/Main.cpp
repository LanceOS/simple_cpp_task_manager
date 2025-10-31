#include <iostream>
#include <fstream>
#include "FileHandler/FileHandler.hpp"
#include "TaskMaker/TaskMaker.hpp"

int main(int argc, char* argv[]) {
    TaskMaker::createTask("test", "test"); 
 
    return 0;
};
