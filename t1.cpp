// ALI ZAID BABAR
// FA20CS084
#include <iostream>
#include <string.h>
using namespace std;

class dfa
{
public:
    string s;

    void find_dfa()
    {
        cout << "enter string" << endl;
        cin >> s;

        int s1, s2;
        for (int x = 0; x < s.length(); x++)
        {
            if (s[x] == '1')
            {
                s1++;
            }
            if (s[x] == '1')
            {
                s2++;
            }
        }

        if (s1 % 2 == 0 || s2 % 2 == 0)
        {
            cout << "string is Acceptable:" << endl;
        }
        else
        {
            cout << " not Acceptable:" << endl;
        }
    }
};
int main()
{
    dfa df;
    df.find_dfa();
}
