#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i,l=0;
	printf("Enter a string\n");
	fgets(str,50,stdin);
	str[strlen(str)-1]='\0';
	for(i=0;str[i]!='\0';i++)
	    l++;
	printf("Length = %d",l);
	return 0;
}
