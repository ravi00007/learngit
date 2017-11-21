#include<iostream>
using namespace std;
class operation
{  int s=0, n;
   public:
   	int sum()
   	{
      cout<<"Enter one no upto where you want to add"<<endl;
      cin>>n;
      /*if(n<=0)
      {  return -1;
      }*/
      while(n!=0)
      {  s=s+n;
         n--;
         cout<<"sum is "<<s<<endl;
      }
      cout<<"sum is "<<s<<endl;
      return 0;
    }
};
int main()
{ class operation ob;
  ob.sum();
  return 0;
}
