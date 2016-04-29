#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
    int n; // length of password
    cout<<"\n     Welcome to PASSWORD GENERATOR !!!\n";
    cout<<"------------------------------------------\n";
    cout<<"\n Enter your length of password =  ";
    cin>>n;
    if(n<=12)
        cout<<"\n Password length must be greater than 12 !!!\n";
    else
    {
        char c1[75]={"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@}#($%^&*){"};
        char pws[n+1]; //password string
        int i;
        srand(time(NULL)); //cause rand() to generate random no. Each time.
        for(i=0;i<n;i++)
        {
            pws[i]=c1[rand()%74]; // generates random numbers
        }
        pws[i+1]='\0';
        cout<<"\n Your strong password is ==";
        cout<<"\t"<<pws<<endl;
    }
    return 0;
}