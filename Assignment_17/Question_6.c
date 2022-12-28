#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],t;
	int i,j;
	printf("Enter a string in uppercase\n");
	fgets(str,50,stdin);
	str[strlen(str)-1]='\0';
	for(i=0,j=strlen(str)-1;i<j;i++,j--)
	 {
	 	t=str[i];
	 	str[i]=str[j];
	 	str[j]=t;
	 }
	printf("%s",str);
	return 0;
}
