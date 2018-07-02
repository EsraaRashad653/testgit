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
int n,m;
int a[101][101];
int b[101][101];
int res[101][101];
void sumofmatrix(int r,int c){
	if(r==n || c>m)
		return;
	if(c==m)
		sumofmatrix(r+1,0);
	res[r][c]=a[r][c]+b[r][c];
	sumofmatrix(r,c+1);
}
int main(){
	int count=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>b[i][j];
	sumofmatrix(0,0);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<res[i][j];
			if(j!=m-1)
				cout<<" ";
		
		}
		cout<<endl;
	}
	//system("pause");
	return 0;
}