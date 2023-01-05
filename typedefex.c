#include<stdio.h>
typedef struct Student
{
    int id;
    int marks;
    char bloodgr;
    char name[];
}stu;
int main()
{
    typedef int* intptr;
    intptr a,b;
    int c=4;
    a=&c;
    b=&c;
    printf("a=%p,b=%p\n",a,b);
    stu s1,s2,s3;
    s1.id=123;
    s2.id=124;
    s3.id=125;
    printf("The value of s1 id is %d\n",s1.id);
    printf("The value of s2 id is %d\n",s2.id);
    printf("The value of s3 id is %d\n",s3.id);
    return 0;

}