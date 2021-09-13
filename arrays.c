#include <stdio.h>

int sum(int array[], int size){
    int a=0;
    for(int i=0;i<size;i++){
        a+=array[i];
    }
    return a;
}
int main(){

    int a[4] = {10,11,12,13};   

    for(int i=0;i<4;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }

    printf("a=%p\n",a);
    printf("*a=%d\n",*a);
    printf("*(a+1)=%d\n",*(a+1));
    printf("*(a+2 )=%d\n",*(a+2));

    int * p = &a[1];
    for(int i=0;i<3;i++){
        printf("p[%d]=%d\n",i,p[i]);
    }

    printf("sizeof(a)=%d\n",sizeof(a));
}