#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<string>
using namespace std;
int main(){
int n;
cin>>n;
string s;
int ans;

for(int i=1;i<=n;i++){
	cin>>s;
	int count_1=0,count_2=0;
	if(s.length()>3)
		ans=3;
	else{
		
			if((s[0]=='o' && s[2]=='e')||(s[1]=='n' && s[2]=='e')||(s[0]=='o' && s[1]=='n'))
				ans=1;
		 if((s[0]=='t' && s[2]=='o')||(s[1]=='w' && s[2]=='o')||(s[0]=='t' && s[1]=='w'))
			ans=2;
	}
	cout<<ans<<endl;
	
}

 //system("pause");
	return 0;
}