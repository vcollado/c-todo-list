#pragma once

typedef struct _task {
  int id;
  char *name;
  char *description;
} Task;

Task* NewTask(int id, char *name, char *description);
