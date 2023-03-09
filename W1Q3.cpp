
#include <iostream>
#include<vector>
#include<math.h>
using namespace std;

void searchElement(vector<int> &array,int key)
{
   int start=0;
   int end=sqrt(array.size());
   int flag=0;
   int size=array.size();
   while(array[end] <= key && end < size ){
      start = end; 
      end += sqrt(size);
      if(end > size - 1)
         end = size; 
   }

   for(int i = start; i<end; i++) { 
      if(array[i] == key)
      {
         flag=1;
         cout<<"Present"<<endl; 
         break;
      }
   }
   
   
   if(flag==0)cout<<"Not Present"<<endl;
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
