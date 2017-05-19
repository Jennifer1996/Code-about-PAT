#include<cstdio>
int main()
{

/*输入两个非负10进制整数A和B(<=230-1)，输出A+B的D (1 < D <= 10)进制数。

    输入格式：

    输入在一行中依次给出3个整数A、B和D。

    输出格式：

    输出A+B的D进制数。

    输入样例：
    123 456 8
    输出样例：
    1103

*/
//预备知识：
    /* P进制数x转化为十进制数y（乘积取整）
   int x,P; //定义一个P进制数x
    scanf("%d%d",&x,&P);
    int y = 0,product = 1;
    while(x != 0)
    {
        y = y + (x%10)*product;
        x = x/10;
        product = product * P;
    }
    printf("%d",y);*/

    /*十进制数y转化为Q进制数Z（除积取余）
    int y,Q;
    int z[40],num = 0;
    scanf("%d%d",&y,&Q);
    do{
        z[num++] = y % Q;
        y = y/Q;
    }while(y!=0);
    for(int i=num-1;i>=0;i--)
       {
           printf("%d",z[i]);
       }
        return 0;*/
//源代码
        int a,b,d,sum;
        scanf("%d%d%d",&a,&b,&d);

        sum = a+b;
        int z[40],num = 0;
        do{
            z[num++] = sum % d;
            sum = sum / d;
        }while(sum!=0);

        for(int i=num-1;i>=0;i--)
        {
           printf("%d",z[i]);
        }
        return 0;

}
