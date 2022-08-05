#include<iostream>
#include<string>
using namespace std;



void additivecipher(string str, int key)
{
if(key>=1 && key<=25)
{

for(int i=0;i<str.size();i++)
{
    if(isspace(str[i]))  
    {
        continue;
    }
    str[i]=97+((((int(str[i]))-97)+key)%26);
}
cout<<"Recived cipher text is : \n";
for(int i=0;i<str.size();i++)
{
   cout<<str[i];
}
cout<<"\n";
for(int i=0;i<str.size();i++)
{

    if(isspace(str[i]))
    {
        continue;
    }

    int x=((int(str[i]))-97)-key;
    if(x<0)
    {
            x=26+x;
            str[i]=97+x%26;


    }
    else 
    {
            str[i]=97+((((int(str[i]))-97)-key)%26);

    }
}

cout<<"Reciver converted cipher text into plain text by using a key is : \n";
for(int i=0;i<str.size();i++)
{
   cout<<str[i];
}
}

else 
{
    cout<<"you have entered wrong key ";
}
}





int main()
{ 


cout<<"Olny you have to enter the lower case string ----- \n";
string str1 ;
cout<<"write the plain text : \n";
getline(cin,str1);
int key ;
cout<<"write the key : \n";
cin>>key;



additivecipher(str1,key);

    return 0;
}