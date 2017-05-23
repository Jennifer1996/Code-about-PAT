/*#include<cstdio>
int main(){
    int num = 0;//单词的个数
    char ans[90][90];
    while(scanf("%s",ans[num])!=EOF){//一直输入到文件末尾
        num++;//单词个数加1
    }
    for(int i = num - 1;i>=0;i--){//倒着输出单词
        printf("%s",ans[i]);
        if(i>0)printf(" ");
    }
    return 0;
}
*/
/*1009. 说反话 (20)

给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。
输入格式：测试输入包含一个测试用例，在一行内给出总长度不超过80的字符串。字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）组成的字符串，单词之间用1个空格分开，输入保证句子末尾没有多余的空格。
输出格式：每个测试用例的输出占一行，输出倒序后的句子。
输入样例：
Hello World Here I Come

输出样例：
Come I Here World Hello*/
#include<cstdio>
#include<cstring>
int main(){
    char str[90];
    gets(str);
    int len = strlen(str),r = 0,h = 0;//r为行，h为列
    char ans[90][90];//ans[0]~ans[r]存放单词
    for(int i = 0;i<len;i++){
        if(str[i] != ' '){//如果不是空格，则存放至ans[r][h]内，并令h++
            ans[r][h++] = str[i];
        }else{ //如果是空格，说明一个单词结束，行r增加1，列h恢复至0
            ans[r][h] = '\0';//末尾是结束符\0
            r++;
            h = 0;
        }
    }
    for(int i = r;i >= 0;i--){//倒着输出单词即可
        printf("%s",ans[i]);
        if(i>0)printf(" ");
    }
    return 0;

}
