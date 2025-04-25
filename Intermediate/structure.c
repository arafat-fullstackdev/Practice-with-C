#include <stdio.h>
#include <string.h>

// structure in C 
   struct student {
    char name[100];
    char address[100];
    int id;
    int grade;
   };

 int main()
  {
    int a;

    struct student std;
    std.id = 04;
    std.grade = 3;

    strcpy( std.name, "Kamal");
    strcpy( std.address, "Chittagong");
    printf("%s %s %d %d\n", std.name,std.address, std.grade,std.id);
    
    return 0;
}