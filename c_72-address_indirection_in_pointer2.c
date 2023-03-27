//&=it store address in variable int a=&b

// * =it convert address to value


#include<stdio.h>
int main(){
    int a=10,b=9,c,d;
    int *p,*q;
    p=&a;
    q=&b;
    c=*q;
    d=*p;
    printf("a=%d\n",a);
    printf("a=%d\n",*p);
    printf("b=%d\n",*q);
    printf("address of a=%d\n",&a);
    printf("address of a=%x\n",&a);
    printf("address of a=%x\n",p);
    printf("address of a=%x\n",&d); //2 bite kam
    printf("c=%d\n",c);
    printf("c=%d\n",c);
    *p=20;
    printf("p=%d\n",*p);
    printf("a=%d\n",a);
    return 0;
}