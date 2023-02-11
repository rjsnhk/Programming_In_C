//q1
#include <stdio.h>
int main(){
    int a=10;
    if (a=11){
        printf("I am 11");
    }
    else{
        printf("i am not 11");
    }
    return 0;
} 
//q2
// #include <stdio.h>
// int main(){

//     int mth,phy,chem;
//     float total;
//     printf("enter math num \n");
//     scanf("%d",&mth);
//     printf("enter phy num \n");
//     scanf("%d",&phy);
//     printf("enter chem num \n");
//     scanf("%d",&chem);
//     total =(mth+phy+chem)/3;
//     if (mth<33 || phy<33 || chem<33 || total<40){
//         printf("You fail \n");
//     }
//     else{
//         printf("you pass \n");
//     }
//     return 0;
// }

//q3
// #include <stdio.h>
// int main(){
//     int income;
//     printf("enter ur income \n");
//     scanf("%d",&income);
//     if (income>=250000 && income<=500000){
//         printf(" you pay tax %f",5.0/100*income);
//     }
//     else if (income>500000 && income<1000000){
//         printf(" you pay tax %f",20.0/100*income);
//     }
//     else if (income>1000000){
//         printf(" you pay tax %f",30.0/100*income);
//     }
//     else{
//         printf(" there is no tax you pay");
//     }
//     return 0;
// }

//method-2
// #include <stdio.h>
// int main(){
//     int income;
//     float tax=0;
//     printf("enter ur income \n");
//     scanf("%d",&income);
//     if (income>=250000 && income<=500000){
//         tax= tax+(0.05 * income);
//     }
//     if (income>=500000 && income<1000000){
//         tax= tax+(0.20 * income);
//     }
//     if (income>=1000000){
//         tax= tax+(0.30 * income);
//     }
//     printf("your net tax to paid %f \n",tax);
// if (income<250000){
//     printf("no need to pay tax \n");
// }
//     return 0;
// }

// q4
// #include <stdio.h>
// int main (){
//     int year;
//     printf("enter year \n");
//     scanf("%d",&year);

//     if (year%4==0 && year%100!=0 || year%100==0 && year%400==0){
//         printf("%d is a leap  year \n",year);
//     }
//     // else if(year%100==0 && year%400==0){
//     //     printf("%d is a leap  year \n",year);
//     // }
//     else{
//         printf("%d is not a leap year \n",year);
//     }
//     return 0;
// }


//q5
//ascii value likh ke banana he a=97,z=122
#include <stdio.h>
int main(){
    char x;
    printf("enter a character \n");
    scanf("%c",&x);

    if (x>=97 && x<=122){
        printf("it is lower case \n");
    }
    else{
        printf("it is not lower case \n");
    }
    return 0;
}







// q6
// #include <stdio.h>
// int main(){

//     int a,b,c,d;
//     printf("enter 1st num\n");
//     scanf("%d",&a);
//     printf("enter 2nd num\n");
//     scanf("%d",&b);
//     printf("enter 3rd num\n");
//     scanf("%d",&c);
//     printf("enter 4th num\n");
//     scanf("%d",&d);
//     if (a>b && a>c && a>d){
//         printf("%d is gretest",a);
//     }
//     else if (b>c && b>a && b>d){
//         printf("%d is gretest",b);
//     }
//     else if (c>b && a<c && c>d){
//         printf("%d is gretest",c);
//     }
//     else if (d>b && d>c && a<d){
//         printf("%d is gretest",d);
//     }
//     else{
//         printf("invalid");
//     }
//     return 0;
// }
