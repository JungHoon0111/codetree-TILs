#include <iostream>
using namespace std;

int sol(int n){
    int k = 0;
    for(int i=1;i<=n;i++){
        k+=i;
    }
    return k/10;
}

int main() {
    int k;
    cin>>k;
    cout<<sol(k);
}