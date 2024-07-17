#include <iostream>
using namespace std;

int find(int n, int m){
    int k = 1;
    while(true){
        if(k%n==0 && k%m==0){
            return k;
        }
        k++;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<find(n,m);
}