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
int main(){
	int t;
	int a,b,c;
	cin>>t;
while(t--){
	cin>>a>>b>>c;
	int x,y,z;
	bool f=true;
   for( x=-100;x<=100;x++){
	for( y=x+1;y<=100;y++){
		for( z=y+1;z<=100;z++){
			if((x+y+z)==a && (x*y*z)==b && (x*x + y*y +z*z)==c){
				f=false;
				break;

			}
		}
		if(!f)
			break;

	}
	if(!f)
	  break;
  }
   if(f)
	   cout<<"No solution."<<endl;
   else
	   cout<<x<<" "<<y<<" "<<z<<endl;
}
//system("pause");
	return 0;
}	