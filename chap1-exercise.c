//area of rectangle
// #include <stdio.h>
// int main(){
//     int len,bred;
//     printf("length of rectangle \n");
//     scanf("%d",&len);
//     printf("breadth of rectangle \n");
//     scanf("%d",&bred);
//     printf("area of rectangle \n %d",len*bred);
//     return 0;
// }


// //area of circle and cylinder
// #include <stdio.h>

// int main(){
//     float p=3.14;
//     int r,h;
//     printf("radius of circle \n");
//     scanf("%d",&r);
//     printf("area of circle %f \n",p*r*r);
//     printf("height of cylinder \n");
//     scanf("%d",&h);
//     printf("area of cylinder \n %f",(2*p*r*h)+(2*p*r*r));

//     return 0;
// }

// // celcius to farenite
// #include <stdio.h>

// int main(){
//     float cel , far;
//     printf("enter temp in celcius \n");
//     scanf("%f",&cel);
//     far=(cel*9/5)+32;
//     printf("Your temp. in farenite is %f",far);
//     return 0;
// }

// simple interest
#include <stdio.h>

int main(){
    int p,r,t;
    printf("principle \n");
    scanf("%d",&p);
    printf("rate of interest \n");
    scanf("%d",&r);
    printf("time \n");
    scanf("%d",&t);
    printf("your simple interest is \n %d",p*r*t/100);
    return 0;
}