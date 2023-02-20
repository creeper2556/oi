#include <bits/stdc++.h>
using namespace std;
stack <int> s;
int main(){
    while (1)
    {
        char t;
        scanf("%c",&t);
        if ((t>='0')&&(t<='9'))
        {
            int f=t-'0';
            while (1)
            {
                scanf("%c",&t);
                if (t=='.')
                {
                    break;
                }
                f*=10;
                f+=t-'0';
            }
            s.push(f);
        }else if (t=='+')
        {
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            s.push(a+b);
        }else if (t=='-')
        {
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            s.push(b-a);
        }else if (t=='*')
        {
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            s.push(a*b);
        }else if (t=='/')
        {
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            s.push(b/a);
        }else if (t=='@')
        {
            printf("%d",(s.top()));
            return 0;
        }
    }
}