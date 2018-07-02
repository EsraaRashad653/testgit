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
long long fact(int n){
	if(n<=0)
		return 1;
	return n*fact(n-1);


}
int main(){
	int n;
	cin>>n;
	cout<<fact(n);
	
	//system("pause");
	return 0;
}