#include <iostream>
using namespace std;

bool tsn(int n){
    for(int i=1;i<=n;i*=10){
        if((n/i)%10==3 ||(n/i)%10==6 || (n/i)%10==9){
            return true;
        }
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    int sol = 0;
    for(int k = a; k<=b; k++){
        if(tsn(k) || k%3==0){
            sol++;
        }
    }
    cout<<sol;
}