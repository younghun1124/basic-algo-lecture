// http://boj.kr/d7178d89538a42ababf4455443e60fe2
#include<bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin>>s;
  int freq[26]={};
  for(auto c:s){
    freq[c-'a']++;
  }
  for(auto ans:freq){
    cout<<ans<<' ';
  }
}
