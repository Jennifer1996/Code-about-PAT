/*��Ŀ����
����һ���ַ����ж��Ƿ��ǻ��Ĵ��������Ĵ�����һ�������ͷ�����һ�����ַ��������硰level�����ߡ�noon���ȵȾ��ǻ��Ĵ���
����
һ���ַ��������Ȳ�����255��
���
����ǻ��Ĵ��������YES�������������NO����
��������
12321

�������
YES*/
#include<cstdio>
#include<cstring>
const int maxn = 256;
//�ж��ַ���str�Ƿ��ǡ����Ĵ���
bool judge(char str[])
{
    int len = strlen(str);//�ַ�������
    for(int i = 0;i<len/2;i++)//iö���ַ�����ǰһ��
    {
        if(str[i] != str[len-i-1]){//����Գ�λ�ò�ͬ
            return false;//���ǻ��Ĵ�
        }
    }
    return true;//�ǻ��Ĵ�
}
int main(){
    char str[maxn];
    while(gets(str)){
        bool flag = judge(str);//�ж��ַ���str�Ƿ��ǡ����Ĵ���
        if(flag == true){
            printf("YES\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}
