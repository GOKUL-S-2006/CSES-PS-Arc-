#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
      int a,b;
      cin>>a>>b;
      if(b>a)
      {
        swap(a,b);
      }
      if(a>2*b || (a+b)%3!=0)
      {

        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
    }
    
    
    
    return 0;
}
