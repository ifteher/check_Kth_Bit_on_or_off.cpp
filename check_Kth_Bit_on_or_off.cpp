#include<bits/stdc++.h>
using namespace std;
int check_kth_bit_on_or_off(int x,int k)
{
    return (x >> k)&1;///on_off check korar niyom holo sei number ke 'k' bar right shift kore 1 er sathe and kora.
}
int main()
{
  ///44 er Binary er 4,3th bit on(1)/of(0) kina seta check korbo.44 er binary:00101100 jar 3rd bit=1,4th bit=0.
 cout<<check_kth_bit_on_or_off(44,3)<<endl;
 cout<<check_kth_bit_on_or_off(44,4)<<endl;
return 0;
}
