#include<cstdio>
int main()
{

/*���������Ǹ�10��������A��B(<=230-1)�����A+B��D (1 < D <= 10)��������

    �����ʽ��

    ������һ�������θ���3������A��B��D��

    �����ʽ��

    ���A+B��D��������

    ����������
    123 456 8
    ���������
    1103

*/
//Ԥ��֪ʶ��
    /* P������xת��Ϊʮ������y���˻�ȡ����
   int x,P; //����һ��P������x
    scanf("%d%d",&x,&P);
    int y = 0,product = 1;
    while(x != 0)
    {
        y = y + (x%10)*product;
        x = x/10;
        product = product * P;
    }
    printf("%d",y);*/

    /*ʮ������yת��ΪQ������Z������ȡ�ࣩ
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
//Դ����
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
