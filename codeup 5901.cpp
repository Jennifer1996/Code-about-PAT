/*题目描述
读入一串字符，判断是否是回文串。“回文串”是一个正读和反读都一样的字符串，比如“level”或者“noon”等等就是回文串。
输入
一行字符串，长度不超过255。
输出
如果是回文串，输出“YES”，否则输出“NO”。
样例输入
12321

样例输出
YES*/
#include<cstdio>
#include<cstring>
const int maxn = 256;
//判断字符串str是否是“回文串”
bool judge(char str[])
{
    int len = strlen(str);//字符串长度
    for(int i = 0;i<len/2;i++)//i枚举字符串的前一半
    {
        if(str[i] != str[len-i-1]){//如果对称位置不同
            return false;//不是回文串
        }
    }
    return true;//是回文串
}
int main(){
    char str[maxn];
    while(gets(str)){
        bool flag = judge(str);//判断字符串str是否是“回文串”
        if(flag == true){
            printf("YES\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}
