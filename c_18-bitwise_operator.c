//deci -- base 10
//bina--base 2
//for binary to decimal
// num ke upper wo series likho jiske niche 1 hoga wo sabko add kro
// 1,2,4,8,16,32,...n
// arith > bitwise > logical




//bitwise(&,|,<<,>>,^,~)

// & operator
#include <stdio.h>
int main(){
    int a=5,d,b=10,c,e=6,f;
    c=a&b;
    d=a|b;
    f=e^b;
    printf("%d",c);//0
    printf("%d",d);//15
    printf("%d\n",f);//12
    // printf("%d %d\n",e&b && b+1 || 0 || b++,b); //b ka value increase nhi hoga because or operator me pehle hi 1 aya to next wala run hi nhi hoga
    // printf("%d %d",e&b && e+1 || 0 && e++,e);
    

    return 0;
}
