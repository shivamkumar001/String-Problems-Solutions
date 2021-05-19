#include<bits/stdc++.h>
using namespace std;

int main()
{
    string text="Hello Bitsian's . Bits is one of the best engineering institute in india";
    string pattern="Bits";
    string replace_with_="IITB";
    int found=text.find(pattern);
    vector<int>vec;
    while(found!=string::npos)
    {
        cout<<"Pattern found at "<<found<<endl;
        vec.push_back(found);
        found=text.find(pattern,found+1);
    }
    // Replace pattern with other string/pattern

    cout<<"\nText after replace "<<pattern<<" with "<<replace_with_<<endl;
    for(auto i:vec)
    {
        text.replace(i,4,replace_with_);
    }
    cout<<text<<endl;
    return 0;
}