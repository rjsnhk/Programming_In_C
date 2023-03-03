//increment(++),decrement(--)

// ++x =prefix -- first increase then assign
// x++ =postfix -- first asign value then increase +1

// #include <stdio.h>
// int main(){
//     int x=10,y;
//     y=++x;
//     printf("%d\n",x);
//     printf("%d",y);

//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int x=10,y;
//     y=x++;
//     printf("%d\n",x);
//     printf("%d\n",y);
//     printf("%d\n",x+10);

//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int x=10,y;
//     y=--x;
//     printf("%d\n",x);
//     printf("%d",y);

//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int x=10,y;
//     y=x--;
//     printf("%d\n",x);
//     printf("%d\n",y);
//     printf("%d",x+10);

//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int a=5,b,c,d;
//     b=++a;
//     c=a++;
//     d=++a;
//     printf("%d\n",a);
//     printf("%d\n",b);
//     printf("%d\n",c);
//     printf("%d\n",d);

//     return 0;
// }

// q1
// #include<stdio.h>
// int main() {
//    int x = 3, y, z;
//    y = x++;
//    z = ++x;
//    printf("%d%d%d",x,y,z);
//    return 0;
// } //535

//q2
// #include <stdio.h>
//     int main()
//     {
//         int a=1,b=1,c;
//         c = a++ + b;
//         printf("%d,%d,%d", a,b,c);
//         return 0;
//     } //2 1 2

//q3
// #include <stdio.h>
//     int main()
//     {
//         int d, a = 1, b = 2;
//         d =  a++ + ++b;
//         printf("%d %d %d", d, a, b);
//         return 0;
//     } //4 2 3

//q4
// #include <stdio.h>
//     int main()
//     {
//         int i = 0;
//         int x = i++;
//         int y = ++i;
//         printf("%d % d\n", x, y);
//         return 0;
//     }

//q5
#include <stdio.h>
    int main()
    {
        int x = 4, y, z;
        y = --x;
        z = x--;
        printf("%d%d%d", x,  y, z);
        return 0;
    } //233




