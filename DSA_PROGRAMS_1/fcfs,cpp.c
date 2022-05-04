#include<iostream>
using namespace std;
int main()
{   int n,bt[20],wt[20],tat[20],ct[20],at[20],avwt=0,avtat=0,i,j;
    cout<<"Enter total number of processes(maximum 20):";
    cin>>n;

    cout<<"\nEnter Process Burst Time aka DURATION \n";
    for(i=0;i<n;i++)
    {
        cout<<"P["<<i+1<<"]:";
        cin>>bt[i];
    }
     cout<<"\nEnter Process arrival Time aka  \n";
    for(i=0;i<n;i++)
    {
        cout<<"P["<<i+1<<"]:";
        cin>>at[i];
    }
    ct[0]=0;    //waiting time for first process is 0
    //calculating waiting time
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            ct[0]+=bt[i];
        }
    }
    cout<"the ct is";
    for (i=0;i<n;i++)
    {
        cout<<ct[i];
    }

    cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time";
    //calculating turnaround time
    for(i=0;i<n;i++)
    {
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        cout<<"\nP["<<i+1<<"]"<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
    }
    avwt/=i;
    avtat/=i;
    cout<<"\n\nAverage Waiting Time:"<<avwt;
    cout<<"\nAverage Turnaround Time:"<<avtat;

    return 0;
}

