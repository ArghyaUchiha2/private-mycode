#include<stdio.h>
int main()
{
    printf("Todays date is: %s\n",__DATE__);
    printf("Time now: %s\n",__TIME__);
    printf("File name is: %s\n",__FILE__);
    printf("Line no: %d\n",__LINE__);
    printf("ANSI: %d\n",__STDC__);
    return 0;
}