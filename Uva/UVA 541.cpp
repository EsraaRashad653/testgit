#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){ 
int n;
while(cin>>n){
	if(n==0)
		break;
	int a[101][101];
	int row[101]={0};
	int colume[101]={0};
	int count_R=0,count_c=0,index_R=0,index_c=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		row[i]+=a[i][j];
		colume[j]+=a[i][j];
		}
		if(row[i]%2!=0){
			count_R++;
			index_R=i;
		}
	}
	for(int i=1;i<=n;i++){
		if(colume[i]%2!=0){
			count_c++;
			index_c=i;
		}
	}
	//cout<<count_R<<" "<<count_c<<endl;
	if(count_R==0 && count_c==0)
		cout<<"OK"<<endl;
	else if(count_R==1 && count_c==1){
			cout<<"Change bit ("<<index_R<<","<<index_c<<")"<<endl;
	}
	else
		cout<<"Corrupt"<<endl;
}
	
//system("pause");
	return 0;
}