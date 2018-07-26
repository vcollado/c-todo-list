#pragma once
#include "./task.h"

#define MAX_TASKS 100

typedef struct
{
  const int timestamp;
  Task *tasks[MAX_TASKS];
} TaskHandler;

TaskHandler NewTaskHandler();
void AddTask(TaskHandler *taskHandler, Task *task);
void RemoveTask(TaskHandler *taskHandler, int id);
