#include <iostream>
using namespace std;

int gcd(int n, int m){
    int x,y;
    if(m>n) {
        x = n;
        y = m;
    }
    else {
        x = m;
        y = n;
    }
    while(y!=0){
        int temp = x;
        x = y;
        y = y % temp;
    }

    return x;
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<< (n*m) / gcd(n,m);
}