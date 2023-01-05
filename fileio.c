#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    char string[60]="This line is now being written in myfile.txt";
    /* ******For Reading A FILE******
    ptr=fopen("myfile.txt","r");
    fscanf(ptr,"%s",string);
    printf("The content of this file is:\n%s",string);*/
    //*****Writing a file*****
    ptr=fopen("myfile.txt","a");
    fprintf(ptr,"%s",string);
    return 0;
}