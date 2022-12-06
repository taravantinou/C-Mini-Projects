#include <iostream>
using namespace std;
#define N 5
int main (void)
{
    int i, x;
    int A[N];
    bool found=false;
    for (i=0; i<N; i++)
    {
    cout<<"Dwse ton "<<i+1<<"o akeraio"<<endl;
    cin>>A[i];
    }
    cout<<"poion arithmo anazitas?"<<endl;
    cin>>x;
    for (i=0; i<N; i++)
    {
        if (A[i]==x)
        {
            found=true;
            break;
        }
    }
    if (found==true)
        cout<<"Vrethike to stoixeio "<<x<<" sti thesi "<<i+1;
    else
        cout<<"De vrethike to stoixeio "<<x<<" ston pinaka"<<endl;
    
    
    return 0;
}
