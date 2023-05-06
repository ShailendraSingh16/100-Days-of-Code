#include<iostream>
using namespace std;

int getPower(int x, int n){
    if(n==0){
        return 1;
    }

    return x*getPower(x,n-1);
}

int main(){
    int x,n;
    cin>>x>>n;

    int ans=getPower(x,n);

    cout<<ans;

    return 0;
}
