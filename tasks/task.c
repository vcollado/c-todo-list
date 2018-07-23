#include <string.h>
#include "./task.h"

// NewTask creates a new task with its basic configuration
Task NewTask(char name[50], char description[400])
{
  Task task = {
    completed : false,
  };
  strcpy(task.name, name);
  strcpy(task.description, description);

  return task;
};
