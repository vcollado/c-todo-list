#pragma once
#include <stdbool.h>

typedef struct {
  char name[50];
  char description[400];
  bool completed;
} Task;

Task NewTask(char name[50], char description[400]);
