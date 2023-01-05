#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    //r+ fns
    //ptr= fopen("myfile.txt","r+");
    //w+fns
    //ptr= fopen("myfile.txt","w+");
    //a+ fns
    ptr= fopen("myfile.txt","a+");
    fputc('o',ptr);
    fputs("THis is not original",ptr);
    fclose(ptr);
    return 0;
}