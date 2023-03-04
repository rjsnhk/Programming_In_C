// <,>,<=,>=,==,!=
// use operator between number and character(ascii value) A=65-Z=90 , a=97-z=122
#include <stdio.h>
int main(){
    int a=18,b=9,c,d,e=10,f;
    c=b++;
    d=b;
    printf("%d",a>b);
    // preference left to right
    
    
    printf("%d",a<b>c<d>b);
    printf("%d",b==c);
    printf("%d",c+1>c);
    //arithmatic(left-right) > relational
    printf("%d",a+c==b>e<c+d);
    //(<,>,<=,>=) > (==,!=)

    f=a>b>d<c;
    printf("%d",f!=1);
    printf("%d",a+c==b>=e<c+d!=1);
    printf("%d",'a'<'d');

    return 0;
}