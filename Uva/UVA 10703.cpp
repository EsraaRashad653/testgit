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
	int n,m,q;
	while(cin>>n>>m>>q){
		if(n==0 && m==0 && q==0)
			break;
	bool a[501][501]={0};
	for(int i=0;i<q;i++){
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		int start_min=min(x1,x2);
		int start_max=max(x1,x2);
		int last_min=min(y1,y2);
		int last_max=max(y1,y2);
		for(int i=start_min;i<=start_max;i++){
			for(int j=last_min;j<=last_max;j++){
				a[i][j]=1;
		      
			}
		}
	
	}
	int count=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			
			if(!a[i][j])
				count++;
			
		}
	}
	if(count==0)
		cout<<"There is no empty spots."<<endl;
	else if(count==1)
		cout<<"There is one empty spot."<<endl;
	else
		cout<<"There are "<<count<<" empty spots."<<endl;
	}

//system("pause");
	return 0;
}