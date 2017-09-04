#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <ctype.h>
#include <cstdlib>
#include <windows.h>

using namespace std;
string ToUpperCase(string& text)
{
    for(int i=0;i<int(text.length());i++)
    {
        text[i] = toupper(text[i]);
        cout << text[i];
    }
    cout<<endl;
    return text;
}
void TimeDelay(int delay = 3)
{
    while (true)
    {
        if(delay >= 0 && delay <= 10)
        {
            Sleep(delay*1000);
            return;
        }
    }
}
int main()
{
    cout << "Hello world!" << endl;
    TimeDelay(6);
    string txt = "Hello World!!12132afa";
    string lamya = ToUpperCase(txt);
    TimeDelay(2);
    cout<<"hey"<<lamya;

    return 0;
}
