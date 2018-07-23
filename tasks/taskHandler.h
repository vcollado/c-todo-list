#pragma once
#include "./task.h"

#define MAX_TASKS 100

typedef struct
{
  int timestamp;
  Task tasks[MAX_TASKS];
} TaskHandler;

TaskHandler NewTaskHandler();

void AddTask(TaskHandler *taskHandler, Task task, int at);
