#include<stdio.h>
int main(){
    int age;
    printf("enter your age \n");
    scanf("%d", &age);

    if (age==18) {
        printf("you are 18 \n");
    }
    else if (age==70){
        printf("you are 18+ also 70");
    }
    else{
        printf("you are not 18 ,70");
    }

    return 0;
}


// priority
//  !-- *,/,% -- +,(-) -- <,>,<=,>= -- ==,!= -- && -- || -- =
