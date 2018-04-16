#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<bitset>
#include<stack>
#include<queue>		
using namespace std;
int main(){
	int n;
	string s;
	cin>>n>>s;
set<char>st;
map<char,int>mp;
for(int i=0;i<n;i++){
	st.insert(s[i]);
}
int l=0,r=0,ans=1e9;
while(l<n){
	while(r<n && mp.size()<st.size()){
		mp[s[r]]++;
		r++;
	}
	if(mp.size()==st.size())
		ans=min(ans,abs(r-l));
	if(mp[s[l]])
		mp[s[l]]--;
	if(!mp[s[l]])
		mp.erase(s[l]);
	l++;

}
if(ans==1e9)
	ans=0;
cout<<ans<<endl;
//system("pause");
	return 0;
}