#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	int n;
string s;
cin>>n>>s;
int a[26]={0};

for(int i=0;i<n;i++){
	if(s[i]<97)
		s[i]+=32;
	int x=s[i]-97;
	a[x]++;
}
bool m=true;
for(int i=0;i<26;i++)
	if(a[i]==0){
		m=false;
		break;
	}
	if(m==true)
		cout<<"YES";
	else
		cout<<"NO";

//system("pause");
	return 0;
}