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
int t,n;
string s;
cin>>t;
for(int k=1;k<=t;k++){
	cin>>n>>s;
	int ans=0;
	for(int i=0;i<n;i++){
		if(s[i]=='.'){
			ans++;
			i+=2;
		}
	}
	cout<<"Case "<<k<<": "<<ans<<endl;
	
}

//system("pause");
	return 0;
}