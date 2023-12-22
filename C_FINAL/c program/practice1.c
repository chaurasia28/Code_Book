#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,root1,root2,d;
    printf("Enter the value of a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
    if (d>0)
    {root1=(-b-d)/2*a;
    root2=(-b+d)/2*a;
    printf("root1=%0.2f",root1);
    printf("root2=%0.2f",root2);
    }
    else if (d==0)
    {root1=(-b)/2*a;
    root2=(-b)/2*a;
    printf("root1=%0.2f",root1);
    printf("root2=%0.2f",root2);
    }
    else
    {
     printf("imaginary roots");
    }


}
