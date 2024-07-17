#include <iostream>
using namespace std;

int main() {
    int k = 1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(k<10){
                cout<<k<<' ';
            }
            else{
                k = 1;
                cout<<k<<' ';
            }
            k++;
        }
        cout<<endl;
    }
}