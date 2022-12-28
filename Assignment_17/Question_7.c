#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i,alphac=0,digitc=0,spclc=0;
	printf("Enter a string\n");
	fgets(str,50,stdin);
	str[strlen(str)-1]='\0';
	for(i=0;str[i]!='\0';i++)
	 {
	 	if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
	 	    alphac++;
	 	else if((str[i]>='0')&&(str[i]<='9'))
	 	         digitc++;
	 	     else
	 	         spclc++;
	 }
	 printf("Alphabate = %d\nDigit = %d\nSpecial Character = %d",alphac,digitc,spclc);
	return 0;
}
