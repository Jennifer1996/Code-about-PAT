#include <iostream>
using namespace std;
int main() {

    int N;
    char c;
    cin >> N >> c;

    int h = N;
    if( h % 2 == 1){ //根据四舍五入确定行
        h += 1;
    }

    for (int i = 0; i < h/2; i++){

        if(i==0||i==h/2-1){//首先确定第一行和最后一行，全部打满
                for(int j=0;j<N;j++){
                     cout << c;
                }
              cout<<endl;
        }else{
        for(int j=0;j<N;j++){
            if(j==0||j==N-1){
                cout<<c;
            }else{
                cout<<" ";
            }
            }
             cout<<endl;
        }
        }
          return 0;
    }

//对于图形输出类问题，关键在于寻找规律，打印出字符组成相应图案，在这一块比较薄弱。注意勤加练习。

