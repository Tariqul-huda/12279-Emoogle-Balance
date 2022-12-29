#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,input,e_treat,e_given,caSe,balance;
    int total[75];

    caSe=0;
//    freopen("index.txt","r",stdin);

    do
    {
        cin>>n;
        e_treat=0;
        e_given=0;
        for(int i=1; i<=n; i++)
        {
            cin>>input;
            if(input)
            {
                e_treat++;
            }
            else
            {
                e_given++;
            }

        }

        balance=e_treat - e_given;
        for(int j=caSe; j<75; j++)
        {
            total[j]=balance;
        }
        caSe++;
    }
    while(n);
    for(int i=0; i<caSe-1; i++)
    {
        cout<<"Case "<<i+1<<": "<<total[i]<<endl;
    }
    return 0;
}
