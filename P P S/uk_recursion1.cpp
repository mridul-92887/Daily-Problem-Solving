#include <bits/stdc++.h>
using namespace std;
int count_way(int s, int e) {
    if(s==e){
        return 1;
    }

    return count_way(s+1,e)+count_way(s+2,e)+count_way(s+3,e);
}

int main() {
    int a,b;
    cin>>a>>b;
    if(a>b){
        return 0;
    }
    cout<<count_way(a,b)<<endl;
    return 0;
}
