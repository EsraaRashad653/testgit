#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<string>
using namespace std;
int main(){
int n;
long long ans;
cin>>n;
long long *a=new long long [n+1];
long long *sum_1=new long long [n+1];
long long *sum_2=new long long [n+1];
a[0]=0;
sum_1[0]=0;
sum_2[0]=0;
for(int i=1;i<=n;i++){
	cin>>a[i];
	sum_1[i]=a[i]+sum_1[i-1];
}
sort(a,a+n+1);
for(int i=1;i<=n;i++){
	sum_2[i]=a[i]+sum_2[i-1];
}
int m,l,r,type;
cin>>m;
for(int i=1;i<=m;i++){
	cin>>type>>l>>r;
	if(type==1)
		ans=sum_1[r]-sum_1[l-1];
	else
		ans=sum_2[r]-sum_2[l-1];
	cout<<ans<<endl;
}


 //system("pause");
	return 0;
}