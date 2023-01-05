#include<stdio.h>
union Student
{
    int id;
    int marks;
    char bloodgr;
    char name[34];
};
int main()
{
    union Student s1;
    s1.marks=262;
    strcpy(s1.name,"ronty");
    s1.id=124;
    s1.bloodgr='o';
    //union er khetre last e jeta thake shetai sudhu consider kora hoy.
        printf("name: %s:-\nid:%d\nmarks:%d\nblood group:%c\n",s1.name,s1.id,s1.marks,s1.bloodgr);
        return 0;

}