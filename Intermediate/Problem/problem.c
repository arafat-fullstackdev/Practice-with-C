#include <stdio.h>

struct Rectangle{
    float length;
    float width;
  };

  struct Time{
    int hours;
    int minutes;
  };

  int TimeToMin(struct Time t){
    return t.hours*60 + t.minutes;
  };
int main() {
 
    
    //*  Problem 1

struct Rectangle rec;
printf("Enter Length: ");
scanf("%f", &rec.length);

printf("Enter Width: ");
scanf("%f", &rec.width);

float area = rec.length * rec.width;
float perimeter = 2*(rec.length + rec.width);

printf("Area: %.2f\n", area);
printf("Perimeter: %.2f\n", perimeter);

//? Problem 2 

 struct Time time;

 printf("Enter Hours: ");
 scanf("%d", &time.hours);
 printf("Enter Minutes: ");
 scanf("%d", &time.minutes);

 int totalMinutes = TimeToMin(time);
 printf("Total Minutes: %d\n", totalMinutes);
    return 0;
}