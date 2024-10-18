#include <stdio.h>
int main()
{
    int a,b;
    printf("How many itigo?");
    scanf("%d",&a);
    
    do{
       printf("How many ringo?");
       scanf("%d",&b);
     }while(a==b);
     
    int sum =a+b;
    
    printf("total %d",sum);
    
    return 0;
}
