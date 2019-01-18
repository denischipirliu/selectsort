#include <iostream>
using namespace std;
int main()
{
    int n,k;
    int i,j;
    int maxim=-1000000;
    int V[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"V["<<i<<"]=";
        cin>>V[i];}
        //maxim=max(maxim,V[i]);
        cout<<"Initial \n";
        for(i=n-1;i>=0;i--)
        {
            cout<<V[i]<<" ";
        }
        for(i=0;i<n;i++)
        {
            maxim=-10000000;
            for(j=i;j<n;j++)
            {
                if(maxim<V[j])
                {
                    maxim=V[j];
                    k=j;
                }
            }
            swap(V[i],V[k]);
        }
        cout<<"\nSortat\n";
        for(i=0;i<n;i++)
        {
            cout<<V[i]<<" ";
        }
}
