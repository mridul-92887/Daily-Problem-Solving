#include <bits/stdc++.h>
using namespace std;
int main() {
    string input;
    getline(cin, input);
    auto it = find(input.begin(), input.end(), '\\');
    int index=-1;
    if (it != input.end()) {
         index = distance(input.begin(), it);
    }
    for(int i=0;i<=index;i++){
        cout<<input[i];

    }
    cout<<endl;
    return 0;
}
