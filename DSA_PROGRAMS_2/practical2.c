#include <iostream>
#include <string.h>

using namespace std;

int main()
{
   char pre[100];
   int i,k;

   cin>>pre;

   for(i=0;i<strlen(pre);i++)
   {
       for(k=0;k<i;k++)
       {
           if(k==0)
           {
               cout<<pre[k]<<endl;
           }else
           {
             for(k=1;k<=i;k++){
                 if(k==i) cout<<endl;
                 cout<<pre[k];
             }
           }
       }
   }
}
