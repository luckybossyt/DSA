#include<iostream>
using namespace std;
int main()
{   int n,bt[20],wt[20],tat[20],ct[20],At[20],avwt=0,avtat=0,i,j;
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
        cin>>At[i];
    }
        //waiting time for first process is 0
    //calculating waiting time
    ct[0]=0;
    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
        {
            ct[i]+=bt[i];

        }
    }
    cout<<"the ct is\n";
     for(i=0;i<n;i++)
    {
        cout<<"P["<<i+1<<"]:";
        cout<<ct[i]<<"\n";
    }

    cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time";
    //calculating turnaround time
    for(i=0;i<n;i++)
    {
        tat[i]=ct[i]-At[i];
        wt[i]=tat[i]-bt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        cout<<"\nP["<<i+1<<"]"<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
    }
    avwt/=i;
    avtat/=i;
    cout<<"\n\nAverage Waiting Time:"<<avwt;
    cout<<"\nAverage Turnaround Time:"<<avtat;
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<ct[i]<<"  ";

    }
    for(i=0;i<n;i++)
    {
        cout<<" "<<At[i];

    }

    return 0;
}

