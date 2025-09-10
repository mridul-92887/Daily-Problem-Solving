#include<bits/stdc++.h>
using namespace std;
int f_number(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int f_nth_number=f_number(n-1)+f_number(n-2);
    return f_nth_number;
}
int sum_f_number(int n){
    if(n==0){
        return 0;
    }
    return f_number(n)+sum_f_number(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans=sum_f_number(n);
    cout<<ans<<endl;
    return 0;
}