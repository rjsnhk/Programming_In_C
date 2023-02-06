// #include <stdio.h>

// int main(){
//     int a;
//     printf("enter a num \n");
//     scanf("%d",&a);

//     if(a%2==0){
//         printf("%d is even \n",a);
//     }
//     else{
//         printf("%d is odd \n",a);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int age;
    printf("enter your age \n");
    scanf("%d", &age);

    if (age >= 18) // ==,>=,<=,>,<.!=
    {
        printf("you are 18+\n");
    }
    // elif (age == 50)
    // {
    //     printf("half century \n");
    // } 
    else
    {
        printf("you are 18-\n");
    }

    
    return 0;
}  