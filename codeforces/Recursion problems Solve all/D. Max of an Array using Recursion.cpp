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
int a[1001],n;
int maxnum(int i){
	if(i==n-1)
		return a[i];
	return max(a[i],maxnum(i+1));	
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int i=0;
	cout<<maxnum(i);
	
	
	//system("pause");
	return 0;
}