#include "./taskHandler.h"
#include "./task.h"

TaskHandler NewTaskHandler()
{
  TaskHandler taskHandler = {0};

  return taskHandler;
};

void AddTask(TaskHandler *taskHandler, Task task, int at)
{
  taskHandler->tasks[at] = task;
}
