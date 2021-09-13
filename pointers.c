#include <stdio.h>

typedef struct {
    int left;
    int right;
} pair_t;

int main(int argc, char *argv[]){

    int * p; //the type of this is [int *]
    int a=10; //has value 10, but lives at some address.  

    p=&a; //address of a, the memory location in which a is stored

    printf("a=%d &a=%p p=%p\n",a,&a,p);

    int b = *p; //this means dereference the pointer
                //derefence ~~ "follow the pointer to the value there"
    printf("b=%d\n",b);

    b += 3;
    a++;
    p = &b;
    printf("a=%d b=%d *p=%d\n",a,b,*p);

    //--------
    pair_t pair;
    pair.left=a;
    pair.right=b;


    pair_t * pp = &pair; 

    printf("pair.left=%d\n", (*pp).left );
    printf("pair.right=%d\n", pp->right );
}