#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<bitset>
using namespace std;

int main(){ 
int n;
cin>>n;
int *a=new int[n+1];
for(int i=0;i<n;i++)
	cin>>a[i];
sort(a,a+1);

int q,r=0;
cin>>q;
int *b=new int[q+1];
for(int i=0;i<q;i++)
	cin>>b[i];
while(r<q){
	int min=0,max=0;
bool l=true,s=true;
	if(b[r]<=a[0])
		s=false;   
	if(b[r]>=a[n-1])
		l=false;
	//bool found=binary_search(a,a+n,b[r]);
	//if(found){
		 max=*(upper_bound(a,a+n,b[r]));
		 min=*(lower_bound(a,a+n,b[r])-1);

	//}
	
	if(s && l)
		cout<<min<<" "<<max<<endl;
	else if(!s && l)
		cout<<"X"<<" "<<max<<endl;
	else if(s && !l)
		cout<<min<<" "<<"X"<<endl;
	else{
		cout<<"X"<<" "<<"X"<<endl;
	}
	r++;


}
//system("pause");
	return 0;
}