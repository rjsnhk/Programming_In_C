// bitwise(<<(left),>>(right),~)

#include <stdio.h>
int main(){
    int a=10,d,b=2,c,f,e=5;
    c=a<<b;
    printf("%d",c);
    printf("%d",a); //no change
    d=a>>b;

    // ~a = -(a+1)
    f=~a;
    
    printf("%d",d);
    printf("%d\n",f);
    

    return 0;
}