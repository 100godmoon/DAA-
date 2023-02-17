
#include <iostream>
#include <vector>
using namespace std;


void equalIndicies(vector<int> v,int testcase)
{
    cout<<"Testcase "<<testcase<<" : ";
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            for(int k=0;k<v.size();k++)
            {
                if(v[i]+v[j]==v[k] && i!=j)
                {
                    cout<<v[i]<<" + "<< v[j]<<" = "<<v[k]<<endl;
                }
            }
        }
    }
}



int main()
{
   int input,val,numinp;
   vector<vector<int>> v;
   
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
       v.push_back(temp);
   }
   
   
   
   
   for(int i=0;i<input;i++)
   {
       equalIndicies(v[i],i+1);
       cout<<endl;
   }

    return 0;
}
