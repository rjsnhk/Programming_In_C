#include <stdio.h>
int main(){
	int a=123;
	char ch='a',star='*';
	float d=34.454;
	char str[20]="welcome here";
	printf("\n%50.5d",a);
	printf("\n%50.6c",ch);
	printf("\n%8.7f",d);
	printf("\n%5s",str);
	printf("\n%3c",star);
	printf("\n%2c%c%c",star,star,star);
	printf("\n%c%c%c%c%c",star,star,star,star,star);
	
	return 0;
}