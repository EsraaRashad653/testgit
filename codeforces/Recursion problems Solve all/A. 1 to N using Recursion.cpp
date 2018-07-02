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
void printnum(int n){
	if(n<=0)
		return;
	printnum(n-1);
	cout<<n<<endl;

}
int main(){
	int n;
	cin>>n;
	printnum(n);
	
	//system("pause");
	return 0;
}