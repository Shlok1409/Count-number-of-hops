#include<bits/stdc++.h>
using namespace std;

long long countWays(int n)
{
       long long d =1e9+7;
       long long f1 = 1, f2 =1, f3 =2;
       if(n ==1) return f2%d;
       for(int i =3; i<=n; ++i){
           long long f4 = (f1+f2+f3)%d;
           f1 = f2;
           f2 = f3;
           f3 = f4;
}
    return f3;
}

int main()
{
    int n;
    cin>>n;
    cout<<countWays(n)<<endl;
    return 0;
}
