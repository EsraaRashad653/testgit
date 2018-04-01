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
		int x=0,y=0,z=1,w=0;
		while(n){
			if(w==1){
				if(n%2==1){
					x+=z;
					w=0;
				}
			}
			else{
				if(n%2==1){
					y+=z;
					w=1;
				}
			

			}
			z*=2;
			n/=2;
		}
		cout<<y<<" "<<x<<endl;
	}
 //system("pause");
	return 0;
}
