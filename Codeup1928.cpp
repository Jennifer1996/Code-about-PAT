#include<cstdio>
int month[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
bool isLeap(int year)//�ж��Ƿ�������
{
    if (year%4 == 0&&year%100 !=0||year%400 == 0)
        return 1;
}
int main(){
    int time1,y1,m1,d1;
    int time2,y2,m2,d2;
    while(scanf("%d%d",&time1,&time2)!=EOF){
        if(time1>time2)//ȷ��time1���ڱ�ime2������ǰ
        {
            int temp;
            temp = time2;
            time2 = time1;
            time2 = temp;
        }
        y1=time1/10000;m1=(time1%10000)/100;d1=time1%100;
        y2=time2/10000;m2=(time2%10000)/100;d2=time2%100;
        int ans = 1;//��¼���
        //��һ������û�е���ڶ�������ʱ����ѭ��
        //������y1 == y2��&&(m1 == m2)&&(d1==d2)
        while(y1<y2||m1<m2||d1<d2){
            d1++;
            if(d1 == month[m1][isLeap(y1)]+1){ //����������
                m1++;//���ڱ�Ϊ��һ���µ�1��
                d1 = 1;
            }
            if(m1 == 13){//�·���12����
                y1++;
                m1 = 1;
            }
            ans++;;//�ۼ�
        }
        printf("%d\n",ans);//������
    }
    return 0;
}

//��������˼·�ǿ���û�мӵ����ڵ����ڣ����¼��£�������ꡣע��ƽ�������2�·ݵ�����
