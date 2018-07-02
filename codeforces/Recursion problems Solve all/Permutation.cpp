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
int vis[1000];
int cur[1000];
void perm(int i,int n,int vis[],int cur[]){
	if(i==n+1){
		for(int j=1;j<n;j++)
			cout<<cur[j]<<" ";
		cout<<cur[n];
		
		cout<<endl;
		return;
	}
	for(int j=1;j<=n;j++)
		if(! vis[j]){
			vis[j]=1;
			cur[i]=j;
			perm(i+1,n,vis,cur);
			vis[j]=0;
		}		


}
int main(){
	int n; 
	cin>>n;
	perm(1,n,vis,cur);

	//system("pause");
	return 0;
}