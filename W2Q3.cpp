
#include <iostream>
#include<vector>

using namespace std;

void countDiff(vector<int> v,int k,int testcase)
{
    cout<<"Testcase "<<testcase<<" : ";
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            if(i!=j && v[j]-v[i]==k || v[i]-v[j]==k)
            {
                cout<<"Pair "<<v[i]<<" and "<<v[j]<<"  have difference equals to : "<<k<<endl;
            }
        }
    }
}

int main()
{
   int input,val,numinp,k;
   vector<vector<int>> v;
   vector<int> kstore;
   cout<<"enter inputs : "<<endl;
   cin>>input;
  
   for(int i=0;i<input;i++)
   {
        vector<int> temp;
       cout<<"Enter number of element you want to add in "<<i+1<<"  testcase: "<<endl;
       cin>>numinp;
       for(int j=0;j<numinp;j++)
       {
       cout<<" Enter value for "<<i+1<<" testcase: "<<endl;
       cin>>val;
       temp.push_back(val);
       }
       cout<<"enter k for testcase  "<<i+1<<" : "<<endl;
       cin>>k;
       kstore.push_back(k);
       v.push_back(temp);
   }
   
   for(int i=0;i<input;i++)
   {
       countDiff(v[i],kstore[i],i+1);
       cout<<endl;
   }
   return 0;
}
