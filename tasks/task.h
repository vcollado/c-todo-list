struct Task {
  char name[50];
  char description[400];
  int completed[1];
};
struct Task NewTask(char name[50], char description[400]);
