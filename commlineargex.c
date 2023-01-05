#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    if(argc!=4)
    {
        printf
        ("The no of arguments given is incorrect.");
    }
    else{
        char* str=argv[1];
        float a=atof(argv[2]),b=atof(argv[3]);
        if(strcmp(str,"add")==0)
        {
            printf("%f",a+b);
        }
        else if (strcmp(str,"subtract")==0)
        {
            printf("%f",a-b);
        }
        else if (strcmp(str,"multiply")==0)
        {
            printf("%f",a*b);
        }
        else if (strcmp(str,"divide")==0)
        {
            printf("%f",a/b);
        }
        else{
            printf("Wrong input");
        }
    }
    return 0;
}
