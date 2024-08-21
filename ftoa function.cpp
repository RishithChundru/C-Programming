#include<stdio.h>
#include<conio.h>
#include<string.h>
void ftoa(float f, char str[])
{
	sprintf(str,"%f",f);
}
int main()
{
	char str[20];
	float f=12.34;
	ftoa(f,str);
	printf("\n\nstr=%s\n\n",str);
	return 0;
}

