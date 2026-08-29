#include<stdio.h>
int main()
{
float radius=7.5;
float pi=3.14159;
float Diameter=2*radius;
float Circumference=2*pi*radius;
float Area=pi*radius*radius;
printf("==========CIRCLE GEOMETRY REPORT===========\n");
printf("Given Radius:\t\t%.3f cm\n",radius);
printf("Calculated Dameter:\t\t%.3f cm\n",Diameter);
printf("Calculated Circumference:\t%.3f cm\n",Circumference);
printf("Calculated Area:\t\t%.3f sq.cm\n",Area);
printf("==============================================\n");
return 0;
}
