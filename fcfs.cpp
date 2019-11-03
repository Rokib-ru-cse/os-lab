//#include<bitstd/c++.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p[100],b[100],wt[100],turn_at[100];
    cout<<"enter burst time"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"p["<<i+1<<"] = ";
        cin>>b[i];

    }
//    for(int i=0;i<3;i++)
//    {
//
//        cout<<b[i];
//
//    }
    wt[0]=0;
    int buffer =0;
    for(int i=1;i<3;i++)
    {

        wt[i] = b[i-1]+buffer;
        buffer = wt[i];

    }
//    for(int i=0;i<3;i++)
//    {
//
//        cout<<wt[i];
//
//    }
    buffer =0;
    for(int i=0;i<3;i++)
    {

        turn_at[i] = b[i]+buffer;
        buffer = turn_at[i];

    }
//    for(int i=0;i<3;i++)
//    {
//
//        cout<<turn_at[i];
//
//    }
    cout<<endl<<"Process\tBurst Time\tWaiting Time\tTurnaround Time"<<endl;
    for(int i=0;i<3;i++)
    {


        cout<<"p["<<i+1<<"]\t"<<b[i]<<"\t\t"<<wt[i]<<"\t\t"<<turn_at[i]<<endl;

    }

    return 0;
}
