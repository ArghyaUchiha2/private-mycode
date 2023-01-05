#include<stdio.h>
int main()
{
    int a=4;
    int *ptr=&a;
    printf("%d\n",ptr);
    printf("%d\n",ptr+1);
    // int takes 4 bytes hence 4 is added to the  address value of a in the second command.
    char b='3';
    char *ptr2=&b;
    printf("%d\n",ptr2);
    printf("%d\n",ptr2+1);
    printf("%d\n",ptr2-4);
    // char takes 1 byte hence 1 is added to the  address value of a in the second command.

    return 0;
}