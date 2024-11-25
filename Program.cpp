#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
  cout<<"Enter three numbers: ";
  cin>>a>>b>>c;  //Taking three numbers from user
  if(a>b&&a>c)
  {
    cout<<a;
  }
  else if(b>a&&b>c)
  {
    cout<<b;
  }
  else
  {
    cout<<c;
     /*If a and b is smaller then c is greater*/
  }
}
