#include<stdlib.h>
#include<stdio.h>
int *dangfunc()
    {
        int a=54;
        return &a;
    }
int main()
{
    //case 1: Deallocation of memory.
    int *ptr= (int *)malloc(4*sizeof(int));
    ptr[0]=123;
    ptr[1]=15;
    ptr[2]=16;
    ptr[3]=125;
    free(ptr);//ptr now becomes a dangling pointer
    //case 2: Returning local variables in function calls
    int*ptr2;
    ptr2=dangfunc();//this is a dangling pointer as 'a' is a local var in dangfunc.
    //case 3: var going out of scope.
    int* ptr3;
    {
        int b=66;
        ptr3=&b;
    }//var b goes out of scope here
    //ptr3 becomes a dangling pointer here.

    return 0;
}