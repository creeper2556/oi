#include <bits/stdc++.h>
using namespace std;
int l,n,t,a,b,c,d;
int main(){
    scanf("%d%d",&l,&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&t);
        c=50000;
        d=0;
        if (t<=c)
        {
            c = t;
        }
        if (t>=d)
        {
            d = t;
        }
        if ((l+1)-t<=c)
        {
            c = (l+1)-t;
        }
        if ((l+1)-t>=d)
        {
            d = (l+1)-t;
        }
        if (c>=a)
        {
            a = c;
        }
        if (d>=b)
        {
            b = d;
        }
        
        
    }
    printf("%d %d",a,b);
    
    return 0;
}