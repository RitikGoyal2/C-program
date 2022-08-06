#include<iostream>
using namespace std ;

int main()
{

    int count=0;
    // string A,B;         // take input string in c++ -----
    char A[]="ritik";
    char B[]="ritik";
    // cin>>A;
    // cin>>B;
    if(sizeof(A)==sizeof(B))
    {                                 // Anagram means compression between two string firstly                    // dj
    int i;                            // length should be same of two string 
    int H[26]={0};                    //  each character must be match in the second string without duplicacy
    for(int i=0;A[i]!='\0';i++)
    {
        H[A[i]-97]+=1;
    }

    for(int i=0;B[i]!='\0';i++)
    {
        H[B[i]-97]-=1;
        if(H[B[i]-97]<0)
        {
            break;
        }
        else 
        {
            count++;
            continue;
        }
       
    }
    if(count==sizeof(A)-1)
    cout<<"yes it is anagram";
    else 
    cout<<"No it is not an anagram";
    }
    else 
    {
        cout<<"----- you have entered different length string . String length should be same -----";
    }
    return 0;
}
