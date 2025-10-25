
class TaskMaker {
    private:
        int priority;
        char type;
    public:
       void createTask(const std::string& taskName, const std::string& taskDesc);
        
       int getNumOfTasks();


}
