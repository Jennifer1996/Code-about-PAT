/*#include<cstdio>
int main(){
    int num = 0;//���ʵĸ���
    char ans[90][90];
    while(scanf("%s",ans[num])!=EOF){//һֱ���뵽�ļ�ĩβ
        num++;//���ʸ�����1
    }
    for(int i = num - 1;i>=0;i--){//�����������
        printf("%s",ans[i]);
        if(i>0)printf(" ");
    }
    return 0;
}
*/
/*1009. ˵���� (20)

����һ��Ӣ�Ҫ�����д���򣬽��������е��ʵ�˳��ߵ������
�����ʽ�������������һ��������������һ���ڸ����ܳ��Ȳ�����80���ַ������ַ��������ɵ��ʺ����ɿո���ɣ����е�������Ӣ����ĸ����Сд�����֣���ɵ��ַ���������֮����1���ո�ֿ������뱣֤����ĩβû�ж���Ŀո�
�����ʽ��ÿ���������������ռһ�У���������ľ��ӡ�
����������
Hello World Here I Come

���������
Come I Here World Hello*/
#include<cstdio>
#include<cstring>
int main(){
    char str[90];
    gets(str);
    int len = strlen(str),r = 0,h = 0;//rΪ�У�hΪ��
    char ans[90][90];//ans[0]~ans[r]��ŵ���
    for(int i = 0;i<len;i++){
        if(str[i] != ' '){//������ǿո�������ans[r][h]�ڣ�����h++
            ans[r][h++] = str[i];
        }else{ //����ǿո�˵��һ�����ʽ�������r����1����h�ָ���0
            ans[r][h] = '\0';//ĩβ�ǽ�����\0
            r++;
            h = 0;
        }
    }
    for(int i = r;i >= 0;i--){//����������ʼ���
        printf("%s",ans[i]);
        if(i>0)printf(" ");
    }
    return 0;

}
