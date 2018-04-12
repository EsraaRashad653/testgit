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
using namespace std;
 long long c;
void merge(int a[],int start,int mid,int end){
	int p=start,q=mid+1;
	vector<int>v;
	for(int i=start;i<=end;i++){
		if(p>mid){
			v.push_back(a[q]);
			q++;
		}
		else if(q>end){
			v.push_back(a[p]);
			p++;
		}
		else if(a[p]>a[q]){
			v.push_back(a[q]);
			q++;
			c+=((mid+1)-p);
		}
		else{
			v.push_back(a[p]);
			p++;
		}


	}
	for(int i=0;i<v.size();i++){
	
		a[start]=v[i];
		start++;
	}

}
void mergesort(int a[],int start,int end){
	if(start<end){
		int mid=(start+end)/2;
		mergesort(a,start,mid);
		mergesort(a,mid+1,end);
		merge(a,start,mid,end);
	}
}

int main(){
	int n;
	while(cin>>n){
		if(!n)
			break;
		c=0;
		int *a=new int[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int start=0,end=n-1;
		mergesort(a,start,end);
		if(c%2==0)
			cout<<"Carlos"<<endl;
		else
			cout<<"Marcelo"<<endl;

	}
	



//system("pause");
	return 0;
}