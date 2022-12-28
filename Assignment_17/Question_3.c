#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i,c=0;
	printf("Enter a string\n");
	fgets(str,50,stdin);
	str[strlen(str)-1]='\0';
	for(i=0;str[i]!='\0';i++)
	     if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
	         c++;
	printf("vowels = %d",c);
	return 0;
}
