#include<iostream>
#include<stack>
#include<queue>
#include<cmath>
#include<string>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
#include<iomanip>
using namespace std;
int n,r,c1=0,v;
long double fact2(int r){
	if(r<=0)
		return 1;
	return r*fact2(r-1);
}
int main(){
	long long res;
	cin>>n>>r;
	if(n<r)
		res=0;
	else{
	v=n-r;
	long double ans=1;
	for(int i=1;i<=v;i++){
		ans*=n--;
	}

    res=ans/fact2(v);
	}
	cout<<res;
	
	//system("pause");
	return 0;
}