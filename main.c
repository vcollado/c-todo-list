#include <stdio.h>
#include "./tasks/taskHandler.h"
#include "./tasks/task.h"

main()
{
  TaskHandler taskHandler = NewTaskHandler();
  Task task1 = NewTask("foo", "this is the first task");
  AddTask(&taskHandler, task1, 0);

  return 0;
}
