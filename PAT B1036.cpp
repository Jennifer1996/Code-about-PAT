#include <iostream>
using namespace std;
int main() {

    int N;
    char c;
    cin >> N >> c;

    int h = N;
    if( h % 2 == 1){ //������������ȷ����
        h += 1;
    }

    for (int i = 0; i < h/2; i++){

        if(i==0||i==h/2-1){//����ȷ����һ�к����һ�У�ȫ������
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


