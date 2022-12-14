#include<stdio.h>
int main()
{
    float u,c,t;
    scanf("%f",&u);
    printf("Units Consumed: %0.0f
",u);
    if(u<200)
    {
        c=u*1.20;
        printf("Cost per Unit: 1.20
");
        printf("Bill: %0.2f
",c);
    }
    else if(u>=200 && u<400)
    {
        c=u*1.40;
        printf("Cost per Unit: 1.40
");
        printf("Bill: %0.2f
",c);
    }
    else if(u>=400 && u<600)
    {
        c=u*1.60;
        printf("Cost per Unit: 1.60
");
        printf("Bill: %0.2f
",c);
    }
    else if(u>=600 && u<800)
    {
        c=u*1.80;
        printf("Cost per Unit: 1.80
");
        printf("Bill: %0.2f
",c);
    }
    else
    {
        c=u*2.00;
        printf("Cost per Unit: 2.00
");
        printf("Bill: %0.2f
",c);
    }
    if(c>=400)
    {
        t=c+c*0.15;
        printf("Surcharge: %0.2f
",c*0.15);
    }
    else 
    {
        t=c;
        printf("Surcharge: 0.00
");
    }
    printf("Total Amount: %0.2f
",t);
}