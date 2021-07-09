#include <iostream>
using namespace std;
//CoDe
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int C = 0, o = 0, D = 0, e = 0, E = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'C')
                C++;
            else if (s[i] == 'o')
                o++;
            else if (s[i] == 'D')
                D++;
            else if (s[i] == 'e')
                e++;
        }
        for (int i = 1; i < s.length() - 1; i++)
        {
            if (s[i] == 'E')
                E++;
        }
        if (C >= 1 && o >= 1 && D >= 1 && e >= 1 && E >= 1)
        {
            cout << "SELECTED" << endl;
        }
        else
        {
            cout << "REJECTED" << endl;
        }
    }
    // your code goes here
    return 0;
}