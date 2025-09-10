#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    while(t--){
        int x;
        cin>>x;
        bool found=false;
        for(int i=0;i<n;i++){
            if(v[i]==x){
                found=true;
            }
        }
        if(found){
            cout<<"found\n";
        }else{
            cout<<"not found\n";
        }
    }
    return 0;
}