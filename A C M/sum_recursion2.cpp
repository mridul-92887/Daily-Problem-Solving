#include<bits/stdc++.h>
using namespace std;
int mridul(int array[],int n){
    if(n==0){
        return 0;
    }
    return array[0]+mridul(array+1,n-1);  
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        int array[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        int ans=mridul(array,n);
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}