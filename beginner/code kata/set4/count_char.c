#include <stdio.h>

int main(void) {
	// your code goes here
	char s[50];
	scanf("%s",s);
int n=0;
for(int i=0;s[i]!='\0';i++)
{
	n++;
}
	printf("%d",n);
	return 0;
}
