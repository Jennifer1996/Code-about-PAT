#include<cstdio>
const int maxn = 100010;
int school[maxn] = {0};
int main()
{
    int n,schID,score;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&schID,&score);
        school[schID] += score;
    }
    int k=1,maxscore=-1;//maxscore初始化要为-1，因为存在可能得分为0的学校
    for(int i=1;i<=n;i++)//需要从1开始循环，因为学校编号从1开始递增
    {
        if(school[i]>maxscore)
        {
            maxscore = school[i];
            k = i;
        }
    }
    printf("%d %d",k,maxscore);
    return 0;
}
