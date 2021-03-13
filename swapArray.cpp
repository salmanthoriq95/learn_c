#include <iostream>
using namespace std;


int main()
{
  int a,i;
  cout<<"enter nunber of array: ";
  cin>>a;
  int r[a];
  for (i=1;i<=a;i++){
    cout<<"enter value of array no. "<<i<<": ";
    cin>>r[i];
  }
  cout<<"swap it!\n";
  for(i=a;i>=1;i--){
    cout<<r[i]<<" ";
  }
  return 0;
}
