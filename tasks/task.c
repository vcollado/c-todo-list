#include <string.h>
#include "./task.h"

// NewTask creates a new task with its basic configuration
struct Task NewTask(char name[50], char description[400])
{
  struct Task task = {
    completed : 0
  };
  strncpy(task.name, name, sizeof(name - 1));
  strncpy(task.description, description, sizeof(description - 1));

  return task;
};
