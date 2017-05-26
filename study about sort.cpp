/*简单选择排序
void selectSort(){//进行n趟操作
    for(int i=1;i<=n;i++){
        int k = i;
        for(int j=i;j<=n;j++){//选出[i,n]中最小的元素，下标为k
            if(a[j]<a[k]){
                k = j;
            }
        }
    }
    int temp = a[i];//交换a[k]与a[i]
    a[i] = a[k];
    a[k] =temp;
}*/
/*插入排序
int a[max],n;//n为元素个数，数组下标为1-n
void inserSort(){
    for(int i=2;i<=n;i++){//进行n-1趟排序
        int temp = a[i],j = i;//temp临时存放A[i],j从i开始往前枚举
        while(j>1&&temp<a[j-1]){//只要temp小于前一个元素a[j-1]
            a[j] = a[j-1];//把a[j-1]后移一位至a[j]
            j--;
        }
        a[j] = temp;//插入位置为a[j]
    }
}*/
//sort函数的学习
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
/*bool cmp(int a,int b){//因为vector中的因素为int型，因此仍是int的比较
    return a>b;
}*/
/*struct node{
    int x,y;
}ssd[10];
bool cmp(node a,node b){
    //return a.x>b.x;//按x值从大到小对结构体数组排序
    if(a.x != b.x) return a.x>b.x;//不等时按x从大到小排序
    else return a.y<b.y;//相等时按y从小到大排序
}
int main(){
    //基本排序比较
    int a[6] = {9,4,2,5,6,-1};
    //将a[0]~a[3]从小到大排序
    sort(a,a+4);
    for(int i=0;i<6;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    //将a[0]~a[5]从小到大排序
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
    //如何实现比较函数cmp
    //基本数据类型数组的排序
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
    sort(ssd,ssd+3,cmp);//一级排序
    for(int i=0;i<3;ibool cmp(char a,char b){
    return a>b;//可以理解为当a>b时把a放在b前面
}++){
        printf("%d %d\n",ssd[i].x,ssd[i].y);
    }
    vector<int> vi;
    vi.push_back(3);
    vi.push_back(1);
    vi.push_back(2);
    sort(vi.begin(),vi.end(),cmp);//对整个vector排序
    for(int i=0;i<3;i++){
        printf("%d ",vi[i]);
    }
    string str[3] = {"bbbb","cc","aaa"};
    sort(str,str+3,cmp);//将string型数组按字典序从小到大输出
    for(int i=0;i<3;i++){
        cout<<str[i]<<endl;
    }

    return 0;
}
struct Student{
    char name[10];//姓名
    char id[10];//准考证号
    int score;//分数
    int r;//排名
}stu[100010];

bool cmp(Student a,Student b){
    if(a.score != b.score) return a.score>b.score;
    else return strcmp(a.name,b.name)<0;
}
//输出排名方法1：
stu[0].r = 1;
for(int i=1;i<n;i++){
    if(stu[i].score == stu[i-1].score){
        stu[i].r = stu[i-1].r;
    }else{
        stu[i].r = i+1;
    }
}
//方法2
int r = 1;
for(int i=0;i<n;i++){
    if(i>0 && stu[i].score != stu[i-1].sore){
        r = i+1;
    }
    //输出当前个体信息，或者令stu[i].r = r;
}*/
