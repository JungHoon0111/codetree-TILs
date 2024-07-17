#include <iostream>
using namespace std;

bool find(int n){
    for(int k = 2;k<n;k++){
            if(n%k==0){
                return false;
            }
        }
        return true;
}

void sol(int a, int b){
    int sub = 0;
    for(int i=a;i<=b;i++){
        if(find(i)){
            sub+=i;
        }
    }
    cout<<sub;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin>>a>>b;
    sol(a,b);
}