#include <stdio.h>
#include "./tasks/taskHandler.h"
#include "./tasks/task.h"

int main()
{
  TaskHandler taskHandler = NewTaskHandler();

  int task1Id = 0;
  Task *task1 = NewTask(task1Id, "foo", "this is the first task");
  int task2Id = 1;
  Task *task2 = NewTask(task2Id, "baz", "this is the secord task");

  AddTask(&taskHandler, task1);
  AddTask(&taskHandler, task2);

  RemoveTask(&taskHandler, task1Id);

  return 0;
}
