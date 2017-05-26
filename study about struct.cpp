//补充知识;结构体的使用
//定义
/*struct Name{
    //一些基本的数据结构或者自定义的数据类型
};
struct studentInfo{
    int id;
    char gender;//'F'or'M'
    char name[20];
    char major[20];
}Alice,Bob,stu[1000];

studentInfo Alice;
stduentInfo stu[1000];

struct node{
    node n;//不能定义node型变量
    node* next;//可以定义node*型变量
};
//访问结构体内的元素
struct studentInfo{
    int id;
    char name[20];
    studentInfo* next;
    studentInfo(){}
}stu,*p;
//访问stu中变量的写法：
stu.id;
stu.name;
stu.next
//访问指针变量p的写法：
(*p).id = p->id;
(*p).name = p->name;
(*p).next = p->next;
stu.id = 10086;
int getId = stu.id;

//结构体的初始化
stu.id=1;
stu.gender = "M";
scanf("%d %c",&stu.id,&stu.gender);

struct studentInfo{
    int id;
    char gender;
    //下面的参数用以对结构体内部变量进行赋值
    studentInfo(int _id,char _gender){
    //赋值
    id = _id;
    gender = _gender;
    }

};*/
#include<cstdio>
struct Point{
    int x,y;
    Point(){}//用以不经初始化地定义pt[10]
    Point(int _x,int _y):x(_x),y(_y){}//用以提供x,y的初始化
}pt[10];
int main(){
    int num = 0;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            pt[num++] = Point(i,j);//直接使用构造函数
        }
    }
    for(int i=0;i<num;i++){
        printf("%d,%d\n",pt[i].x,pt[i].y);
    }
    return 0;
}

























