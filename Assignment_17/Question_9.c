#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],c;
	int i,j;
	printf("Enter a string\n");
	fgets(str,50,stdin);
	str[strlen(str)-1]='\0';
	for(i=0;i<strlen(str)-1;i++)
	 {
	 	for(j=i+1;str[j]!='\0';j++)
	 	 {
	 	 	if(str[i]>str[j])
	 	 	 {
	 	 	 	c=str[i];
	 	 	 	str[i]=str[j];
	 	 	 	str[j]=c;
			 }
		 }
	 }
	 printf("Sorted String\n%s",str);
  return 0;
}
