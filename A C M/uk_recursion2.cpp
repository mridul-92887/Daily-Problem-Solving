#include<bits/stdc++.h>
using namespace std;
int sum_lgy(int n){
    if(n<10){
        return n;
    }
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n/=10;
    }
    return sum_lgy(sum);
}
int main(){
    int n;
    while(n!=0){
        cin>>n;
        int sum=sum_lgy(n);
        if(sum==0){
            return 0;
        }else{
            cout<<sum<<endl;
        }
    }
    return 0;
}
