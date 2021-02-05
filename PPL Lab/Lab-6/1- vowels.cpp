//1-WAP in C/C++ to delete all vowels from the string using call by value.
#include<iostream>
using namespace std;

string deleteVowels(string str)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
           ||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            int j=i;
            while(str[j]!='\0')
            {
                str[j]=str[j+1];
                j++;
            }
        }
        i++;
    }

    return str;
}

int main()
{
    string str;
    cout<<"Enter a string: "<<endl;
    cin>>str;
    cout<<"Deleted Vowels Strings"<<endl<<endl;

    cout<<deleteVowels(str);

    return 0;
}
