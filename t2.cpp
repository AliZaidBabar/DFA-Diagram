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
        if (s[0] = '0')
        {

            for (int x = 0; x < s.length(); x++)
            {
                if (s[x] == '0')
                {
                    cout << "acceptable" << endl;
                }
            }
        }

        else
        {
            cout << "non Acceptable" << endl;
        }
    
       if(s[0] = '1')
    {
        cout << "accepted" << endl;
    }

    else
    {
        cout << "unaccepted" << endl;
    }
}
}
;
int main()
{
    dfa df;
    df.find_dfa();
}
