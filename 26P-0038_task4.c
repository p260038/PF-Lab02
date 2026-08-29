#include<stdio.h>
int main()
{
	char var1='M';
	int var2=42;
	float var3=3.141590;
	double var4=98.765432;
	printf("Type Name\tVariable Value\tSize in Memory\n");

	printf("-------------------------------------------------------------\n");
	printf("char\t\t '%c'\t\t%zu byte(s)\n",var1,sizeof(var1));
	printf("int \t\t %d\t\t%zu byte(s)\n",var2,sizeof(var2));
	printf("float\t\t%f\t%zu byte(s)\n",var3,sizeof(var3));
	printf("double\t\t%1f\t%zu byte(s)\n",var4,sizeof(var4));
	printf("-------------------------------------------------------------\n\n");
	return 0;
	
}
