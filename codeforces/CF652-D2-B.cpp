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
#include<functional>
using namespace std;
int main(){
	int n;
	cin>>n;
	int *a=new int [n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		if(i!=1 && i%2!=0){
			swap(a[i],a[i-1]);
		}
	}
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";

//system("pause");
	return 0;
}
