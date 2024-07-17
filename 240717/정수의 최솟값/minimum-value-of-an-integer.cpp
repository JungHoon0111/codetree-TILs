#include <iostream>
using namespace std;

int sol(int a, int b, int c){
    if(a<b&&a<c){
        return a;
    }
    else if(b<a&&b<c){
        return b;
    }
    else if(c<a&&c<b){
        return c;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin>>a>>b>>c;
    cout<<sol(a,b,c);
}