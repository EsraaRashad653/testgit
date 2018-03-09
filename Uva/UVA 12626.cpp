#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++){
		cin>>s;
		int a[6]={0};
		for(int k=0;k<s.length();k++){
			if(s[k]=='A')
				a[0]++;
			else if(s[k]=='G')
				a[1]++;
			else if(s[k]=='I')
				a[2]++;
			else if(s[k]=='M')
				a[3]++;
			else if(s[k]=='R')
				a[4]++;
			else if(s[k]=='T')
				a[5]++;
		}
		a[0]/=3;
		a[4]/=2;
		int ans=10000;
		for(int t=0;t<6;t++)
			if(a[t]<ans)
				ans=a[t];
		cout<<ans<<endl;
	}

 //system("pause");
	return 0;
}