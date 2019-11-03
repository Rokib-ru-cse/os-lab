//#include<bitstd/c++.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p[100],avt[100],b[100],wt[100],turn_at[100];
    int n;
    cout<<"enter the number of process : ";
    cin>>n;
    cout<<endl;
    for(int i = 0; i<n ;i++)
    {
        cout<<"enter process "<<i+1<<" arival time : ";
        cin>>avt[i];

    }
    cout<<endl;
    for(int i = 0; i<n ;i++)
    {
        cout<<"enter burst time of process "<<i+1<<" : ";
        cin>>b[i];

    }



    cout<<endl<<"Process\tArival Time\tBurst Time\tWaiting Time\tTurnaround Time"<<endl;
    for(int i=0;i<3;i++)
    {


        cout<<"p["<<i+1<<"]\t"<<avt[i]<<"\t\t"<<b[i]<<endl;

    }
    cout<<endl;
    return 0;
}


