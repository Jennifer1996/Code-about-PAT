//����֪ʶ;�ṹ���ʹ��
//����
/*struct Name{
    //һЩ���������ݽṹ�����Զ������������
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
    node n;//���ܶ���node�ͱ���
    node* next;//���Զ���node*�ͱ���
};
//���ʽṹ���ڵ�Ԫ��
struct studentInfo{
    int id;
    char name[20];
    studentInfo* next;
    studentInfo(){}
}stu,*p;
//����stu�б�����д����
stu.id;
stu.name;
stu.next
//����ָ�����p��д����
(*p).id = p->id;
(*p).name = p->name;
(*p).next = p->next;
stu.id = 10086;
int getId = stu.id;

//�ṹ��ĳ�ʼ��
stu.id=1;
stu.gender = "M";
scanf("%d %c",&stu.id,&stu.gender);

struct studentInfo{
    int id;
    char gender;
    //����Ĳ������ԶԽṹ���ڲ��������и�ֵ
    studentInfo(int _id,char _gender){
    //��ֵ
    id = _id;
    gender = _gender;
    }

};*/
#include<cstdio>
struct Point{
    int x,y;
    Point(){}//���Բ�����ʼ���ض���pt[10]
    Point(int _x,int _y):x(_x),y(_y){}//�����ṩx,y�ĳ�ʼ��
}pt[10];
int main(){
    int num = 0;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            pt[num++] = Point(i,j);//ֱ��ʹ�ù��캯��
        }
    }
    for(int i=0;i<num;i++){
        printf("%d,%d\n",pt[i].x,pt[i].y);
    }
    return 0;
}

























