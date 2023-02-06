// here operator == +-*/
// operand=4,5

#include <stdio.h>

int main(){
    int a=4;
    int b=6;
    int k=3.0/9;

    printf("%d\n",k);  

    printf("the value of a+b is %d \n",a+b);
    printf("the value of a-b is %d \n",a-b);
    printf("the value of a*b is %d \n",a*b);
    printf("the value of a/b is %d \n",a/b);
    printf("the value of 6+5.6 is %f \n",6+5.6);
    //float--f==f
    //int--f==f
    //f--i==f
    //int--int==int
    printf("the value of 5/2 is %d \n",5/2); //2
    printf("the value of 5/2 is %f \n",5.0/2); // 2.500000//f ke liye float rhna jruri he

    printf("the value of 2/5 is %d \n",2/5);
    printf("the value of 2/5 is %f \n",2.0/5);
    return 0;
}