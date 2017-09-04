#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <ctype.h>
#include <cstdlib>
#include <windows.h>

using namespace std;

string ToUpperCase(string&);
void TimeDelay(int);
void read(int*);
int edit();

int main()
{
    int count = 0;
    string command;
    bool loopRunning = true;

    while (loopRunning)
    {

    // Interface Start

        cout<<"\nTotal characters read so far\n\n";
        cout<<setw(40)<<setfill('~')<<"\n\n";
        cout.width(10);
        cout<<"     Welcome to SimpleTextEditor\n\n";
        cout<<setw(40)<<setfill('~')<<"\n\n";
        cout<<"Type 'edit' to edit a text file"<<endl;
        cout<<"Type 'read' to read a text file"<<endl;
        cout<<"Type 'exit to exit the program"<<endl;
        cout<<"Choose what you want to do: "<<endl;

        // Interface End

        cin >> command;
        if (command == "edit"){edit();}
        else if (command == "read"){read(&count);}
        else if (command == "exit"){loopRunning = false;}
        else {cout<<"Please enter a valid command"<<endl;}
    }



    return 0;
}


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

void read (int* count)
{
    int line = 1;
    int line_num = 24;

    char filename[50];

    ifstream readfile;
    cout << "Enter name of the file to read: "<<endl;
    cin.getline(filename, 50);
    readfile.open(filename);
    /*
    while (Add your condition)
    {

    }
    */
    readfile.close();
}

int edit ()
{

    return 0;
}
