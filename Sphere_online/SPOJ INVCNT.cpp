#include <iostream>
#include<vector>
using namespace std;
 long long inv_count;
//int  _mergeSort(int arr[], int left, int right);
//int merge(int arr[], int left, int mid, int right);
 void merge(int arr[],  int left, int mid, int right)
{
	vector<int>v;
  int i=left, j=mid+1;
 // int inv_count = 0;
  for(int k=left;k<=right;k++){
	  if(i>mid)
		  v.push_back(arr[j++]);
	  else if (j>right)
		  v.push_back(arr[i++]);

   else if (arr[i] <arr[j])
    {
		v.push_back(arr[i++]);
    }
    else
    {
		v.push_back( arr[j++]);
      inv_count +=  ((mid+1)- i);
    }
  }
 
  for (int k=0; k <v.size(); k++)
    arr[left++] = v[k];
 
 
}
 
void mergeSort(int arr[], int left, int right)
{
  int mid;//inv_count = 0;
  if (left<right)
  {
    mid = (right + left)/2;
		mergeSort(arr, left, mid);
		mergeSort(arr,  mid+1, right);
		merge(arr,  left, mid, right);
  }
 
}


int main(){

  int t,n;
  cin>>t;
  while(t--){
	  inv_count=0;
	  cin>>n;
	  int *arr=new int[n];
	  for(int i=0;i<n;i++)
		  cin>>arr[i];
  int start=0,end=n-1;
  mergeSort(arr,start,end);
  cout<<inv_count<<endl;
  }

// system("pause");
  return 0;
}
