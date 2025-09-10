#include<bits/stdc++.h>
using namespace std;
int f_number(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return f_number(n-1)+f_number(n-2);
}

int main(){
    int n;
    cin>>n;
    int ans=f_number(n);
    cout<<ans<<endl;
    return 0;
}