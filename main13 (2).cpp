#include <iostream>
#include <vector>
using namespace std;

int binarysearch1 (vector<int> a , int target){
  int start=0;
  int end=a.size()-1;
  int mid=(start+end)/2;
  int ans1 =-1;

  while(start<=end){
  if(target==a[mid]){
    ans1= mid;
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
return ans1;
}

int binarysearch2 (vector<int> a , int target){
  int start=0;
  int end=a.size()-1;
  int mid=(start+end)/2;
  int ans2 =-1;

  while(start<=end){
  if(target==a[mid]){
    ans2= mid;
    end=mid-1;
  }
  else if(target<a[mid]){
    end=mid-1;
  }
  else if (target> a[mid]){
    start=mid+1;
  }
  mid=(start+end)/2;
}
return ans2;
}

int main() {
 vector <int> a{1,2,3,4,4,4,4,5,5,5};
  int target =5;
  int ans1 = binarysearch1(a,target);
  cout<<ans1<<endl;

  int ans2 = binarysearch2(a,target);
  cout<<ans2<<endl;
  
  int ans =ans1-ans2+1;
  cout<<ans;
  
  return 0;
}
  
