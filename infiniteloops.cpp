#include<iostream>
using namespace std;

int main()
{
    //int password;
    //int count=0;

    //do
    //{
    //    cin>>password;
    //}
     /*while(1)
     {
        cout<<"Chocolates ";
        count++;

        if(count>100) break;
     }*/

    

    /*cout<<"Enter the password: "<<endl;
    cin>>password;

    while(password<999999)
    {
        cout<<"The password does not meet the required conditions, Please enter the password again"<<endl;
        cin>>password;
    }

    cout<<"The user has now entered a correct password"<<endl;*/
    
    
    int i;

    for(i=0;  ;i++)
    {
        cout<<i<<" ";
        if(i>100) break;    // This statement gets executed when i is 101
    }

    return 0;
}