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
    int k=1,maxscore=-1;//maxscore��ʼ��ҪΪ-1����Ϊ���ڿ��ܵ÷�Ϊ0��ѧУ
    for(int i=1;i<=n;i++)//��Ҫ��1��ʼѭ������ΪѧУ��Ŵ�1��ʼ����
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
