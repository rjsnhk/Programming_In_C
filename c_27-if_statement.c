//&& , || , !

#include <stdio.h>
int main()
{
    int age;
    int vippass=0;
    // vippass=1;
    printf("enter your age \n");
    scanf("%d", &age);

    if (age >= 18 && age<=70 || !vippass==1)
    {
        printf("you can drive\n");
    }
    else
    {
        printf("you cant drive \n");
    }
    return 0;
}
