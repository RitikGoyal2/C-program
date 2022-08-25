#include<iostream>
#include<string>
using namespace std;
string str;
void encryption()
{
cout<<"Enter the string : ";
getline(cin,str);

cout<<"Enter key : ";
int key;
cin>>key;

int a=str.size();
int b;
int A[a];
int B[a];


for(int i=0;i<a;i++)
{
A[i]=int(str[i])-97;
}
    
B[0]=(A[0]+key)%26;
for(int i=1;i<a;i++)
{
   B[i]=(A[i-1]+A[i])%26;
}

cout<<"Encrypted text is  :  ";
for(int i=0;i<a;i++)
{
    cout<<char(B[i]+97);
    
}
cout<<"\n";

for(int i=1;i<a;i++)
{
   B[i]=(B[i]-A[i-1])%26;
   if(B[i]<0)
   {
    B[i]=B[i]+26;
   }
   
}
B[0]=(B[0]-key)%26;
if(B[0]<0)
{
    B[0]=B[0]+26;
}
cout<<"Decrypted text is  :  ";
for(int i=0;i<a;i++)
{
    cout<<char(B[i]+97);
    
}

}
int main()
{

encryption();
    return 0;
}