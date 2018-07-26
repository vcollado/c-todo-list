#include <string.h>
#include <stdlib.h>
#include "./task.h"

// NewTask creates a new task with its basic configuration
Task *NewTask(int id, char *name, char *description)
{
  Task *task;
  task = (Task *)malloc(sizeof(Task));
  task->id = id;
  task->name = (char *)malloc(strlen(name) + 1);
  task->description = (char *)malloc(strlen(description) + 1);
  strcpy(task->name, name);
  strcpy(task->description, description);

  return task;
};
