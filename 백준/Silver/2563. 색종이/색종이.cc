#include <iostream>
#include <string>
using namespace std;
    int a[100][100];
  
int main() {
    

        int n,x,y,cnt = 0;
        cin>>n;
        while(n--){
            //색종이 개수만큼 반복
            cin>>x>>y;
            for(int i=y; i<y+10; i++){
                for(int j=x; j<x+10; j++){
                    if(!a[i][j]){
                        cnt++; //겹치지 않는 영역의 개수
                        a[i][j]=1; //해당 영역이 이미 선택되었음을 표시
                    }
                }
            }

        }
   
     cout<<cnt;
    return 0;
}