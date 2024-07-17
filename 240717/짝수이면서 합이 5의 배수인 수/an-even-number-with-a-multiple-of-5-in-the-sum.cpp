#include <iostream>
using namespace std;

void sol(int n){
    int ten = n/10;
    int one = n%10;
    if(n%2==0 && (ten+one)%5==0 ){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    sol(n);
}