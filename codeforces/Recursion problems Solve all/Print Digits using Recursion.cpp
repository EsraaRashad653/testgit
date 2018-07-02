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
int n,c,f;
void printDigits(int n){
	if(!n)
		return;
	c++;
	printDigits(n/10);
	if(f==c-1){
		cout<<n%10;
		f++;
	}
	else{
		cout<<n%10<<" ";
		f++;
	}
}
int main(){ 
	int m;
	cin>>m;
	while(m--){
		cin>>n;
		if(n==0)
			cout<<"0";
		else
		printDigits(n);
		cout<<endl;
	}
	

	//system("pause");
	return 0;
}