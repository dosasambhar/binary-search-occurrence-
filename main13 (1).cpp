#include <iostream>
#include <vector>
using namespace std;

int binarysearch (vector<int> a , int target){
  int start=0;
  int end=a.size()-1;
  int mid=(start+end)/2;
  int ans =-1;

  while(start<=end){
  if(target==a[mid]){
    ans= mid;
    start=mid+1;
  }
  else if(target<a[mid]){
    end=mid-1;
  }
  else if (target> a[mid]){
    start=mid+1;
  }
  mid=(start+end)/2;
}
return ans;
}

int main() {
 vector <int> a{1,2,3,4,4,4,4,5,5,5};
  int target =5;
  int ans = binarysearch(a,target);
  cout<<ans;
  return 0;
}
  
