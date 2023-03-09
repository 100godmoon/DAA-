
#include <iostream>
#include<vector>
using namespace std;

void searchElement(vector<int> &v,int num)
{
    int i=0;
    while(v[i]!=num && i<v.size())
    {
        i++;
    }
    
    if(v[i]==num)
    {
        cout<<"Present "<<i+1<<endl;
    }
    else{
    cout<<"Not Present"<<endl;
    }
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
        
        cout<<"Enter number you want to search: "<<endl;
        cin>>num;
        searchElement(v,num);
       testCase--;
    }
    
    return 0;
}