#include <cstdio>
const int maxn = 210;
int a[maxn];
int main(){
    int n,x;
    while(scanf("%d",&n) != EOF){ //��һ��ǳ��ؼ������Ա�֤���������������в���
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]); //����n����
        }
        scanf("%d",&x);//��������ѯ����
        int k; //�±�
        for(k=0;k<n;k++) //��������
        {
            if(a[k] == x){ //����ҵ�x
                printf("%d\n",k);//�����Ӧ���±�
                break;//�˳�����
            }
        }
        if(k == n){//���û���ҵ�
            printf("-1\n"); //���-1
        }
    }
    return 0;
}

/*�Լ�����
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

//Ψһ�Ĳ��������� while(scanf("%d",&n) != EOF)
 //��һ��ǳ��ؼ������Ա�֤���������������в���
