int main()
{
    int a,b;
    printf("How many animals?");
    scanf("%d",&a);
    printf("How many ningen?");
    scanf("%d",&b);
    int sum=a+b;
    
    if(sum>=100)
    {
        printf("There are many creature");
        
    }
    else if(sum<100,sum>=50)
    {
        printf("There are neither many nor few creature");
    }
    else
    {
        printf("There are few creature");
    }

    return 0;
}