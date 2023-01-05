#include<stdio.h>
#include<string.h>
struct Student
{
    int id;
    int marks;
    char bloodgr;
    char name[];
}dip,gutu;
int main()
{
    struct Student ronty;
    dip.id=1324;
    gutu.id=824;
    ronty.id=2873;
    dip.marks=465;
    gutu.marks=480;
    ronty.marks=497;
    dip.bloodgr='a';
    gutu.bloodgr='b';
    ronty.bloodgr='c';
    strcpy(dip.name,"Sudip");
    strcpy(gutu.name,"Udit");
    strcpy(ronty.name,"Arghya");
    printf("Details of %s:-\nid:%d\nmarks:%d\nblood group:%c\n",dip.name,dip.id,dip.marks,dip.bloodgr);
    printf("Details of %s:-\nid:%d\nmarks:%d\nblood group:%c\n",gutu.name,gutu.id,gutu.marks,gutu.bloodgr);
    printf("Details of %s:-\nid:%d\nmarks:%d\nblood group:%c\n",ronty.name,ronty.id,ronty.marks,ronty.bloodgr);
    return 0;
}
