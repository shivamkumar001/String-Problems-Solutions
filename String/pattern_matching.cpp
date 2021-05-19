#include<bits/stdc++.h>
using namespace std;

int main()
{
    string text="Hello Bits Pilani";
    string pattern="Bits";
    int found=text.find(pattern);
    while(found!=string::npos)
    {
        cout<<"Pattern found at "<<found;
        found=text.find(pattern,found+1);
    }
    return 0;
}