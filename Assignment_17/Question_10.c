#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i,c,hash[123]={0};
	printf("Enter a string\n");
	fgets(str,50,stdin);
	str[strlen(str)-1]='\0';
	for(i=0;str[i]!='\0';i++)
	     {
	     	if(str[i]!=' ')
	     	  hash[str[i]]++;
		 }
	for(i=0;i<123;i++)
	  {
	  	if(hash[i]>=1)
		  printf("%c --> %d\n",i,hash[i]);
	  }
	return 0;
}
