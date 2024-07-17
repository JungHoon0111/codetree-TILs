#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int k =1;
    for(int i=0;i<b;i++){
        k*=a;
    }
    cout<<k;
}