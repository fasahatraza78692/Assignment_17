#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i;
	printf("Enter a string in lowercase\n");
	fgets(str,50,stdin);
	str[strlen(str)-1]='\0';
	for(i=0;str[i]!='\0';i++)
      {
      	if(str[i]>='a'&&str[i]<='z')
      	  str[i]=str[i]-32;
	  }
	printf("Uppercase\n");
    printf("%s",str);
	return 0;
}
