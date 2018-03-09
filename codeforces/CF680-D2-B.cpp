#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<string>
using namespace std;
int main(){
int n,a,count=0,t;
cin>>n>>a;
int *s=new int [n+1];
s[0]=0;
for(int i=1;i<=n;i++)
	cin>>s[i];
if(s[a]==1)count=1;
if(a<=n/2){
 for(int i=1;i<a;i++){
	 int dif=a-i;
	 if(s[i]==1 && s[a+dif]==1 )
		 count+=2;
 }
	 for(int k=a+a;k<=n;k++)
		 if(s[k]==1)
			 count++;
 
}
else{
	int dif=n-a;
	for(int i=1;i<a-dif;i++){
		if(s[i]==1)count++;
	}
		for(int k=a-dif;k<a;k++){
			int difr=a-k;
			if(s[k]==1 && s[a+difr]==1)
				count+=2;
		}
	}

	cout<<count;

 //system("pause");
	return 0;
}