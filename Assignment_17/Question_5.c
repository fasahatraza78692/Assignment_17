#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i;
	printf("Enter a string in uppercase\n");
	fgets(str,50,stdin);
	str[strlen(str)-1]='\0';
	for(i=0;str[i]!='\0';i++)
      {
      	if(str[i]>='A'&&str[i]<='Z')
      	  str[i]=str[i]+32;
	  }
	printf("Lowercase\n");
    printf("%s",str);
	return 0;
}
