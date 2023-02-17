#include <stdio.h>
int main()
{
    int rating;
    printf("enter rate (1-5)\n");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("you rate 1 \n");
        break;
    case 2:
        printf("you rate 2 \n");
        break;
    case 3:
        printf("you rate 3 \n");
        break;
    case 4:
        printf("you rate 4 \n");
        break;
    case 5:
        printf("you rate 5 \n");
        break;

    default:
        printf("invalid rate \n");
        break;
    }

    return 0;
}

// #include <stdio.h>
// int main(){
//     int mark;
//     printf("enter mark \n");
//     scanf("%d",&mark);

//     if (90<mark && mark<100){
//         printf("A");
//     }
//     else if(80<mark && mark<90){
//         printf("B");
//     }
//     else if(70<mark && mark<80){
//         printf("C");
//     }
//     else if(60<mark && mark<70){
//         printf("D");
//     }
//     else if(mark<60){
//         printf("fail");
//     }
//     else{
//         printf("invalid");
//     }
//     return 0;
// }
