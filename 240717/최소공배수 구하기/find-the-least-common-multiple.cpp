#include <iostream>
using namespace std;

void print(int n, int m, int realn, int realm){
    if(m==0){
        cout<< (realn*realm) / n;
    }
    else{
        print(m, m%n, realn, realm);
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    print(n,m,n,m);
}