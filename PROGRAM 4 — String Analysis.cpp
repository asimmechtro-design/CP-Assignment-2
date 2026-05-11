#include <iostream>
#include <string>
using namespace std;

void Analyze(string text)
{
    int chars = 0, spaces = 0, tabs = 0, lines = 1;

    for(char c : text)
    {
        chars++;

        if(c == ' ')
            spaces++;
        else if(c == '\t')
            tabs++;
        else if(c == '\n')
            lines++;
    }

    cout << "Characters: " << chars << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Tabs: " << tabs << endl;
    cout << "Lines: " << lines << endl;
}

int main()
{
    string text;

    cout << "Enter text: ";
    getline(cin, text);

    Analyze(text);

    return 0;
}
