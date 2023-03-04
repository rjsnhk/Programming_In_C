// && , || , !
//prio -- ! > && > ||
// arith > reln > logical(left-right)
//use truth table
//&& koi ek 0 to all 0
//|| koi ek 1 to all 1

// 10 && 5 return 1
// 10 || 5 return 1
#include <stdio.h>
int main(){
    // printf("%d",10 && 5); //1
    // printf("%d",10 || 5); //1
    // int a=10,b=5,f;
    // f=a>b&&b!=10&&b<11&&a>5;
    // printf("%d",f);

    int x=4,y=6,z,h,m,n,r,s;
    // z= x>y && printf("rajesh");
    // printf("%d",z); // 0 and 1 = 0
    
    // h= x<y && printf("rajesh");
    // printf("%d",h); // 1 and 1 =rajesh1
    
    // m= x>y || printf("rajesh");
    // printf("%d",m); // 0 or 1 = rajesh1
    
    // n= x<y || printf("rajesh");
    // printf("%d",n); //1 or 1= 1


    r=x>y && printf("rajesh")||printf("lecture")||printf("jk");
    // r=x>y && printf("rajesh")||printf("lecture")&&printf("jk");
    printf("%d\n",r); //lecturejk1
    

int l=1,o=6,r1,r2;
r1=l--&&++o;
r2=--l&&++o;
printf("%d",-1&&2);
printf("%d",r1);
printf("%d",r2);
    return 0;
}