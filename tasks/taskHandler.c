#include "./taskHandler.h"
#include "./task.h"

TaskHandler NewTaskHandler()
{
  TaskHandler taskHandler = {0};

  return taskHandler;
};

void AddTask(TaskHandler *taskHandler, Task *task)
{
  taskHandler->tasks[task->id] = task;
}

void RemoveTask(TaskHandler *taskHandler, int id)
{
  taskHandler->tasks[id] = 0;
}
