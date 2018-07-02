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
int arr[1001];
void even_indices(int n,int a[]){
	for(int i=n-1;i>0;i--){
		if(i%2==0)
			cout<<arr[i]<<" ";
	}
	cout<<arr[0];

}
int main(){
	int n; 
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	even_indices(n,arr);

	//system("pause");
	return 0;
}