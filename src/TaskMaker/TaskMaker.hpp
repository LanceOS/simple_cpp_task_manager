#include <iostream>

class TaskMaker {
    private:
        int priority;
        char type;
    public:
       bool createTask(const std::string& taskName, const std::string& taskDesc);
        
       int getNumOfTasks();


};
