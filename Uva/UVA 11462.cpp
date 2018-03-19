#include<iostream>
#define _CRT_SFCURE_NO_WARNINGS
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
using namespace std;
int main(){ 
int n;
while(cin>>n){
	if(n==0)
		break;
	vector<int>v(n);
	int a;
	for(int i=0;i<n;i++){
		scanf("%d",&(v[i]));
		
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		printf("%d",v[i]);
		if(i!=n-1)
		printf(" ");
	}
	printf("\n");
}
	
//system("pause");
	return 0;
}