#include <cstdio>
const int maxn = 210;
int number[maxn]={0};
int j;
int main()
{
    int n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }
    scanf("%d",&x);
    for(j=0;j<n;j++)
    {
        if(number[j] == x)
        {
            printf("%d",j);
            break;
        }
    }
    if(j==n)
    {
        printf("-1");
    }


    return 0;
}

