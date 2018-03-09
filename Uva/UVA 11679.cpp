#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
int B,N;
while(cin){
	cin>>B>>N;
	if(B==0 && N==0)
		break;
	int *a=new int[B+1];
	int d,c,v;
	for(int i=1;i<=B;i++)
		cin>>a[i];
	for(int i=1;i<=N;i++){
		cin>>d>>c>>v;
		a[d]-=v;
		a[c]+=v;
	}
	bool m=true;
	for(int i=1;i<=B;i++)
		if(a[i]<0){
			m=false;
			break;
		}
		if(m==true)
			cout<<"S"<<endl;
		else
			cout<<"N"<<endl;
}


 //system("pause");
	return 0;
}