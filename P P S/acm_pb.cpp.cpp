// #include<iostream>
// #include<cstdio>

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,q;
  cin >> n >> q;
  vector<int> v(n);
  
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  
  while(q--)
  {
    int a,b;
    cin >> a >> b;
    
    int index1 = a-1; // adjusting the index
    int index2 = b-1;
    
    int sum = 0;
   
      for(int i = index1; i <= index2;i++)
      {
        sum += v[i]; // calculating sum
      }
    
    
    cout <<  sum << endl;
  }
  
  return 0;
  
}