#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],str2[50];
	int i;
	printf("Enter a string\n");
	fgets(str,50,stdin);
	str[strlen(str)-1]='\0';
	for(i=0;str[i]!='\0';i++)
	    str2[i]=str[i];
	printf("Copied string\n%s",str2);
  return 0;
}
