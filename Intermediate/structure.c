#include <stdio.h>
#include <string.h>

// structure in C 
   struct student {
    char name[100];
    char address[100];
    int id;
    int grade;
   };

   struct Employee{
    char name[100];
    char address[100];
    int id;
    int grade;
   };

 int main()
  {
    // int a;

    // struct student std;
    // std.id = 04;
    // std.grade = 3;

    // strcpy( std.name, "Kamal");
    // strcpy( std.address, "Chittagong");
    // printf("%s %s %d %d\n", std.name,std.address, std.grade,std.id);

    struct Employee emp;

    printf("Enter Employee name:");
    scanf("%s", &emp.name);
    //printf("%s\n", emp.name);
 printf("Enter Employee address:");
    scanf("%s\n", &emp.address);
    strcpy(emp.address, "Irkutusk");
    printf("Enter Employee grade:");
    scanf("%d\n", &emp.grade);

    printf("Employee name : %s\n",emp.name);
    printf("Employee Address : %s\n",emp.address);
    printf("Employee grade : %d\n",emp.grade);
    
    return 0;
}