#include <stdbool.h>
#include <stdio.h>

#define MAX_IDS 32
#define MAX_EMP 1000

struct employee_t {
  int id;
  char firstname[64];
  char lastname[64];
  float income;
  bool ismanager;
};

int main() {
  struct employee_t employees[MAX_EMP];
  int i = 0;
  for (i = 0; i < MAX_EMP; i++) {
    employees[i].income = 25;
    employees[i].ismanager = true;
    if (employees[i].ismanager == true)
      employees[i].income = employees[i].income * 4;
  }
  printf("%f\n", employees[10].income);
  return 0;
}
