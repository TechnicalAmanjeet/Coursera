#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b,c;
 double x;
 cin>>a>>b>>c;
 double d=sqrt((b*b)-(4*a*c));
 x=(-b-d)/(2*a);
 if(x==nan){x=(-b-d)/(2*a);}
 cout<<x<<endl;
return 0;
}