
#include <iostream>
#include<vector>
using namespace std;

void searchElement(vector<int> &v,int num)
{
   int low=0;
   int high=v.size()-1;
   
   int i=1;
   int flag=0;
   
   while(low<=high)
   {
       int mid=(high+low)/2;
       
       if(v[mid]==num)
       {
           flag=1;
           cout<<"Present: "<<i;
           break;
       }
       
       if(v[mid]<num)
       {
           low=mid+1;
           i++;
       }
       else if(v[mid]>num)
       {
           high=mid-1;
           i++;
       }
       
   }
   
   if(flag==0)cout<<"Not Present";
   
   cout<<endl;
}


int main()
{
    int testCase;
    cout<<"Enter number of testcase: "<<endl;
    cin>>testCase;
    
    
    while(testCase)
    {
         vector<int> v;
         int elements,num;
         cout<<"Enter number of elements in array: "<<endl;
         cin>>elements;
        for(int i=0;i<elements;i++)
        {
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        cout<<"Enter number you want to search: "<<endl;
        cin>>num;
        searchElement(v,num);
       testCase--;
    }
    
    return 0;
}