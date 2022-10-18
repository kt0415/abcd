#include<bits/stdc++.h>
using namespace std;


#define fastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);



void sam()
{
    int mx = INT_MIN;
    while (1)
    {
        int x;
        cin>>x;
        if(x<0)
        {
            if (mx==INT_MIN)
            {
                cout<<0<<endl;
            }
            else{
                cout<<mx<<endl;
            }
            break;
            
        }
        else
        {
            if (x<100)
            {
                mx = max(mx,x);

            }
            
        }
    }
    
}

int main()
{
    fastIO;
    sam();
    return 0;
}