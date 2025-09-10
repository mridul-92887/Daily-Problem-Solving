#include<bits/stdc++.h>
using namespace std;
int mridul(stack<int>&mrid){
    if(mrid.empty()){
        return 0;
    }
    int top_v=mrid.top();
    mrid.pop();
    int sum=top_v+mridul(mrid);
    return sum;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    for(int i=1;i<=t;i++){
        stack<int>mrid;
        int v;
        while(cin.peek()!='\n'&&cin>>v){
            mrid.push(v);
        }
        cin.ignore();
        int ans=mridul(mrid);
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}