//arithmatic= +,-,*,/,%
//priority 1=* / %
       //  2= + -
       //left to right

// % = it cant use in floating point it always take sign of first operand
// #include<stdio.h>
// int main(){
//     int a= -10,b=6,c=10,d=-6;
//     float x=6.0;
//     printf("%d\n",a%b); //-4
//     printf("%d\n",c%d); //4
//     // printf("%d\n",a%x); error
//     // printf("%f\n",a%x); error

    
//     return 0;
// }

//assignment operator (=)
//a=5
//a=4*5  ==first calculate value
//lhs=rhs == lhs--must be variable
//a=b=c=d=10 -- right to left first d=10
//a=a+1 -- a+=1
//a=a-5 -- a-=5
//a=a+(c*100) -- a+=c*100


//q1
// #include <stdio.h>
//     int main()
//     {
//         int i = -3;
//         int k = i % 2;
//         printf("%d\n", k);
//         return 0;
//     } //-1


// q2
    // #include <stdio.h>
    // int main()
    // {
    //     int i = 3;
    //     int l = i / -2;
    //     int k = i % -2;
    //     printf("%d %d\n", l, k);
    //     return 0;
    // } //-1 1

// q3
// #include <stdio.h>
//     int main()
//     {
//         int x = 5.3 % 2;
//         printf("Value of x is %d", x);
//         return 0;
//     } //invalid operator / ans=1

// q4
// #include <stdio.h>
//     int main()
//     {
//         int a = 10;
//         double b = 5.6;
//         int c;
//         c = a + b;
//         printf("%d", c);
//         return 0;
//     } //15
