#include <bits/stdc++.h>
using namespace std;
int main() {
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    char m=a[0];
    a[0]=b[0];
    b[0]=m;
    cout<<a<<"\n"<<b<<endl;
    return 0;
}
