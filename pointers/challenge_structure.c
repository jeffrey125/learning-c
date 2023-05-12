#include <stdio.h>

int main()
{
  struct employeeStructure
  {
    char name[30];
    char hireDate[15];
    float salary;
  } company[3] = {
      {"John", "01/01/2019", 1000.00},
      {"Mary", "01/01/2019", 1200.00},
      {"Mike", "01/01/2019", 1400.00}
  };

  printf("Second Employee is %s that was hired in %s with a salary of %.2f\n", company[1].name, company[1].hireDate,company[1].salary);

  for (int i = 0; i < 3; i++)
  {
    printf("\n--Employee %d--\n", i + 1);
    printf("Name: %s\n", company[i].name);
    printf("Hire Date: %s\n", company[i].hireDate);
    printf("Salary: %.2f\n", company[i].salary);
  }


  return 0;
}