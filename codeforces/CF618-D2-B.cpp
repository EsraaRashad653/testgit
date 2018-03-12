#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){ 
	int a[55][55];
	int b[51];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	}
	int min=0,count=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i!=j){
			if(a[j][i]>min)
				min=a[j][i];
			}
		}
		b[count]=min;
		count++;
		min=0;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(b[i]==b[j])
				b[j]++;
		}
	}
	for(int i=1;i<=n;i++){
			cout<<b[i]<<" ";
		
	}

//system("pause");
	return 0;
}
