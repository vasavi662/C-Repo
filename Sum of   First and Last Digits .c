#include<stdio.h>
int main()
{
    int N,firstdigit,lastdigit;
    scanf("%d",&N);
    lastdigit = N%10;
    firstdigit = N;
    while(firstdigit>=10)
    {
        firstdigit/=10;
    }
    int sum = firstdigit + lastdigit;
    printf("%d",sum);
    return 0;
}