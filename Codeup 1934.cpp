#include <cstdio>
const int maxn = 210;
int a[maxn];
int main(){
    int n,x;
    while(scanf("%d",&n) != EOF){ //这一句非常关键，可以保证不断输入样例进行测试
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]); //输入n个数
        }
        scanf("%d",&x);//输入欲查询的数
        int k; //下标
        for(k=0;k<n;k++) //遍历数组
        {
            if(a[k] == x){ //如果找到x
                printf("%d\n",k);//输出对应的下标
                break;//退出查找
            }
        }
        if(k == n){//如果没有找到
            printf("-1\n"); //输出-1
        }
    }
    return 0;
}

/*自己代码
int j;
int main()
{
    int n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(j=0;j<n;j++)
    {
        if(a[j] == x)
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
}*/

//唯一的差别就是少了 while(scanf("%d",&n) != EOF)
 //这一句非常关键，可以保证不断输入样例进行测试
