#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],ch;
	int i,count=0;
	printf("Enter a string\n");
	fgets(str,50,stdin);
	printf("Enter a character to find occurrence\n");
	scanf("%c",&ch);
	str[strlen(str)-1]='\0';
	for(i=0;str[i]!='\0';i++)
	   if(str[i]==ch) 
	      count++;
	printf("Occurrence of %c = %d",ch,count);
  return 0;
}
