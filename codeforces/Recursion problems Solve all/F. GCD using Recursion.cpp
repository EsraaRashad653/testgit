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
int getgcd(int n,int m){
	if(m==0)
		return n;
	getgcd(m,n%m);
}

int main(){
int n,m;
cin>>n>>m;
if(n<m)
	swap(n,m);
/*while(m!=0){
	int x=n%m;
	n=m;
	m=x;

}
cout<<n;*/
	cout<<abs(getgcd(n,m));
	system("pause");
	return 0;
}