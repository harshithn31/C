#include<stdio.h>
int main(){
	char ch;
	char s[20],str[20];

	printf("Scanning... ");scanf(" %c",&ch);
	printf("%c\n",ch);
	printf("Scanning... ");scanf(" %s",s);
	printf("%s\n",s);
	printf("Scanning... ");scanf(" %[^\n]",str);
	printf("%s\n",str);

	return 0;
}
