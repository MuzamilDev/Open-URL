#include<iostream>
#include<windows.h>
#include<string.h>

using namespace std;

int main()
{
    string url;

    cout<<"Enter URL "<<endl;
    cin>>url;


    ShellExecute(NULL, "open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);


    return 0;
}
