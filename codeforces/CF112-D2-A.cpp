#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<string>
using namespace std;
int main(){

int ans;
string a,b;
cin>>a>>b;
for(int i=0;i<a.length();i++){
	if(a[i]<97)
		a[i]+=32;
	if(b[i]<97)
		b[i]+=32;

}
//cout<<a<<endl<<b<<endl;
	bool m=true;
	for(int i=0;i<a.length();i++){
		if(a[i]==b[i])
			continue;
		else if(a[i]>b[i]){
			m=true;
			break;
		}
		else{
			m=false;
			break;
		}
	}
	if(a==b)
   cout<<"0";
	else if(m==true)
		cout<<"1";
	
	else
		cout<<"-1";
 //system("pause");
	return 0;
}