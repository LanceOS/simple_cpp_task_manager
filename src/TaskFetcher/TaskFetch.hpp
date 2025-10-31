#include <iostream>
#include "../Types/Types.hpp"

class TaskFetcher {
  private:
    int numOfTasks;
    struct task<TaskData>;
  public:
    int getNumberOfTasks();

    std::string getTask(const std::string* taskName, const int* id);
}
