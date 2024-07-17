#include <iostream>
using namespace std;

void maxi(int n, int m){
    int k;
    if(n>m){
        k = n;
    }
    else{
        k = m;
    }
    while(true){
        if(n%k==0 && m%k==0){
            cout<<k;
            return;
        }
        else{
            k--;
        }
    }
}

int main() {
    int n,m;
    cin>>n>>m;
    maxi(n,m);
}