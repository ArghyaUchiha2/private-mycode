#include<stdio.h>
#define pi 3.14
float ed (int x1,int y1,int x2,int y2)
{
    return sqrt(pow((y2-y1),2)+pow((x2-x1),2));
}
float areaedcircle(int x1,int y1, int x2, int y2, float(*ptr)(int x1,int y1,int x2,int y2))
{
    float r=(*ptr)(x1,y1,x2,y2);
    return pi*r*r;
}
int main()
{
    int x1,x2,y1,y2;
    printf("Enter the values of x1,y1:");
    scanf("%d %d",&x1,&y1);
    printf("Enter the values of x2,y2:");
    scanf("%d %d",&x2,&y2);
    float(*ptr)(int ,int,int,int);
    ptr=&ed;
    printf("The euclidean dist is:%f\n",(*ptr)(x1,y1,x2,y2));
    printf("The area of the required circle is:%f",areaedcircle(x1,y1,x2,y2,(*ptr)));
    return 0;
}