//ponter contain always adress of variable
//pointer=2byte 
//derived datatype
// datatype * pointer_name;


#include<stdio.h>
int main(){
    int a=10,*p;
    float b=1.6,*po;
    p=&a;
    po=&b;
    printf("%d\n",sizeof(*p));
    printf("%f\n",*p);

    printf("%f\n",*po);
    printf("%d\n",*po);



    p=&b;
    po=&a;
    printf("%d\n",*p);
    printf("%f\n",*p);

    printf("%f\n",*po);
    printf("%d\n",*po);
    return 0;
}