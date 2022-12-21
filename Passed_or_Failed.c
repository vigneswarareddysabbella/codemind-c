#include<stdio.h>
int main()
{
    int eng,mat,phy,che,cs;
    scanf("%d%d%d%d%d",&eng,&mat,&phy,&che,&cs);
    if(eng>34 && mat>34 && phy>34 && che>34 && cs>34)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}