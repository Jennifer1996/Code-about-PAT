/*��ѡ������
void selectSort(){//����n�˲���
    for(int i=1;i<=n;i++){
        int k = i;
        for(int j=i;j<=n;j++){//ѡ��[i,n]����С��Ԫ�أ��±�Ϊk
            if(a[j]<a[k]){
                k = j;
            }
        }
    }
    int temp = a[i];//����a[k]��a[i]
    a[i] = a[k];
    a[k] =temp;
}*/
/*��������
int a[max],n;//nΪԪ�ظ����������±�Ϊ1-n
void inserSort(){
    for(int i=2;i<=n;i++){//����n-1������
        int temp = a[i],j = i;//temp��ʱ���A[i],j��i��ʼ��ǰö��
        while(j>1&&temp<a[j-1]){//ֻҪtempС��ǰһ��Ԫ��a[j-1]
            a[j] = a[j-1];//��a[j-1]����һλ��a[j]
            j--;
        }
        a[j] = temp;//����λ��Ϊa[j]
    }
}*/
//sort������ѧϰ
/*
#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(string str1,string str2){
    return str1.length()<str2.length();
}
/*bool cmp(int a,int b){//��Ϊvector�е�����Ϊint�ͣ��������int�ıȽ�
    return a>b;
}*/
/*struct node{
    int x,y;
}ssd[10];
bool cmp(node a,node b){
    //return a.x>b.x;//��xֵ�Ӵ�С�Խṹ����������
    if(a.x != b.x) return a.x>b.x;//����ʱ��x�Ӵ�С����
    else return a.y<b.y;//���ʱ��y��С��������
}
int main(){
    //��������Ƚ�
    int a[6] = {9,4,2,5,6,-1};
    //��a[0]~a[3]��С��������
    sort(a,a+4);
    for(int i=0;i<6;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    //��a[0]~a[5]��С��������
    sort(a,a+6);
    for(int i=0;i<6;i++){
        printf("%d ",a[i]);
    }
    double a[] = {1.4,-2.1,9};
    sort(a,a+3);
    for(int i=0;i<3;i++){
        printf("%.1f ",a[i]);
    }
    char c[] = {'T','W','A','K'};
    sort(c,c+4);
    for(int i=0;i<4;i++){
        printf("%c ",c[i]);
    }
    //���ʵ�ֱȽϺ���cmp
    //���������������������
    int a[5] = {3,1,4,2};
    sort(a,a+4,cmp);
    for(int i=0;i<4;i++){
        printf("%d ",a[i]);
    }
    double a[] = {1.4,-2.1,9};
    sort(a,a+3,cmp);
    for(int i=0;i<3;i++){
        printf("%.1f ",a[i]);
    }
    char c[] = {'T','W','A','K'};
    sort(c,c+4,cmp);
    for(int i=0;i<4;i++){
        printf("%c ",c[i]);
    }
    ssd[0].x = 2;//{2,2}
    ssd[0].y = 2;
    ssd[1].x = 1;//{1.3}
    ssd[1].y = 3;
    ssd[2].x = 2;//{3,1}
    ssd[2].y = 1;
    sort(ssd,ssd+3,cmp);//һ������
    for(int i=0;i<3;ibool cmp(char a,char b){
    return a>b;//�������Ϊ��a>bʱ��a����bǰ��
}++){
        printf("%d %d\n",ssd[i].x,ssd[i].y);
    }
    vector<int> vi;
    vi.push_back(3);
    vi.push_back(1);
    vi.push_back(2);
    sort(vi.begin(),vi.end(),cmp);//������vector����
    for(int i=0;i<3;i++){
        printf("%d ",vi[i]);
    }
    string str[3] = {"bbbb","cc","aaa"};
    sort(str,str+3,cmp);//��string�����鰴�ֵ����С�������
    for(int i=0;i<3;i++){
        cout<<str[i]<<endl;
    }

    return 0;
}
struct Student{
    char name[10];//����
    char id[10];//׼��֤��
    int score;//����
    int r;//����
}stu[100010];

bool cmp(Student a,Student b){
    if(a.score != b.score) return a.score>b.score;
    else return strcmp(a.name,b.name)<0;
}
//�����������1��
stu[0].r = 1;
for(int i=1;i<n;i++){
    if(stu[i].score == stu[i-1].score){
        stu[i].r = stu[i-1].r;
    }else{
        stu[i].r = i+1;
    }
}
//����2
int r = 1;
for(int i=0;i<n;i++){
    if(i>0 && stu[i].score != stu[i-1].sore){
        r = i+1;
    }
    //�����ǰ������Ϣ��������stu[i].r = r;
}*/
