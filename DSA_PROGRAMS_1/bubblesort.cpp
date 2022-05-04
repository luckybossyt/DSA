#include<iostream>
using namespace std;

int main()
{
    int i,j ,temp,swapn=0;
    int a[10]={10,2,0,14,43,25,18,1,5,45};
    cout<<"input the list to be sorted....\n";
    for(i=0;i<10;i++)
    {

        cout<<a[i]<<"\t";

    }
    cout<<endl;
    for(i=0;i<10;i++)
    {

        for(j=i+1;j<10;j++)
        {

            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;            }
        }
    }
    swapn++;


cout<<"sorted elements are..\n";
for(int i=0;i<10;i++)
{

    cout<<a[i]<<"\t";

}
cout<<"\n number of sorting taken are \n"<<swapn<<endl;
return 0;
}

