/*
Programming Ability Test (PAT) is organized by the College of Computer Science and Technology of Zhejiang University.
Each test is supposed to run simultaneously in several places, and the ranklists will be merged immediately after the test.
Now it is your job to write a program to correctly merge all the ranklists and generate the final rank.

Input Specification:

Each input file contains one test case.
For each case, the first line contains a positive number N (<=100), the number of test locations.
Then N ranklists follow, each starts with a line containing a positive integer K (<=300), the number of testees,
and then K lines containing the registration number (a 13-digit number) and the total score of each testee.
All the numbers in a line are separated by a space.

Output Specification:

For each test case, first print in one line the total number of testees. Then print the final ranklist in the following format:

registration_number final_rank location_number local_rank

The locations are numbered from 1 to N.
The output must be sorted in nondecreasing order of the final ranks.
The testees with the same score must have the same rank,
and the output must be sorted in nondecreasing order of their registration numbers.

Sample Input:
2
5
1234567890001 95
1234567890005 100
1234567890003 95
1234567890002 77
1234567890004 85
4
1234567890013 65
1234567890011 25
1234567890014 100
1234567890012 85
Sample Output:
9
1234567890005 1 1 1
1234567890014 1 2 1
1234567890001 3 1 2
1234567890003 3 1 2
1234567890004 5 1 4
1234567890012 5 2 2
1234567890002 7 1 5
1234567890013 8 2 3
1234567890011 9 2 4
*/
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct Student{
    char id[15];//׼��֤��
    int score; //����
    int location_number;//������
    int local_rank;//��������
}stu[30010];
bool cmp(Student a,Student b){
    if(a.score != b.score){//��������ͬ�����մӸߵ�������
        return a.score>b.score;
    }else{//������׼��֤�Ŵ�С��С��������
        return strcmp(a.id,b.id)<0;
    }
}
int main(){
    int n,k,num = 0;//numΪ�ܿ�����
    scanf("%d",&n);//nΪ������
    for(int i=1;i<=n;i++){
        scanf("%d",&k);
        for(int j=0;j<k;j++){
            scanf("%s %d",&stu[num].id,&stu[num].score);
            stu[num].location_number = i;
            num++;
        }
        sort(stu+num-k,stu+num,cmp);//���ÿ����Ŀ�������
        stu[num-k].local_rank = 1;
        for(int j = num - k + 1;j<num;j++){
            if(stu[j].score == stu[j-1].score){
                //�����ǰһλ����ͬ�֣�local_rankҲ��ͬ
                stu[j].local_rank = stu[j-1].local_rank;
            }else{//�����ǰһλ�Ŀ�����ͬ��
                //local_rankΪ�ÿ���ǰ������
                stu[j].local_rank = j+1-(num - k);
            }
        }
    }
    printf("%d\n",num);
    sort(stu,stu+num,cmp);
    int r = 1;
    for(int i=0;i<num;i++){
        if(i>0 && stu[i].score != stu[i-1].score){
            r = i+1;//��ǰ��������һ������������ͬʱ����r����Ϊ����+1
        }
        printf("%s ",stu[i].id);
        printf("%d %d %d\n",r,stu[i].location_number,stu[i].local_rank);
    }
    return 0;
}
/*�Լ�д��ز�۵Ĵ��룬�뷨̫���ӡ���
const int N_max = 100;//�����������Ϊ100
const int n_max = 300;//һ�����㿼���������Ϊ300
struct testee{
    char registe_number[15];
    int score;
    int final_rank;
}stu[n_max];
struct location{
    int stu_num;
    testee stu[n_max];
    int location_number;
    int local_rank;
}loc[N_max];

int main(){
    int n,number;//��������,�������㿼������
    scanf("%d",&n);
    location loc[n];
    testee stu[number];
    for(int i=0;i<n;i++){
         scanf("%d",&number);
         loc[i].stu_num = number;
         for(int j=0;j<number;j++){
            scanf("%s%d",stu[j].registe_number,&stu[j].score);
         }
         printf("\n");
    }
    printf("**********************************************\n");
    for(int i=0;i<n;i++){
            printf("%d\n",loc[i]);
            for(int j=0;j<number;j++){
                 printf("%s %d\n",stu[j].registe_number,stu[j].score);
            }
    }
}*/























