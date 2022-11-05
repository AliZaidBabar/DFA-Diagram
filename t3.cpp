// ALI ZAID BABAR
// FA20CS084
#include<iostream>
#include<string.h>
using namespace std;



class dfa{
	public:
		string s;
		
		
		void find_dfa()
		{
			cout<<"enter string"<<endl;
			cin>>s;
			
			int s1,s2;
			for(int x=0;  x<s.length();  x++)
			if(s[0]=='a'  || s[1]=='b')
			{
				if(s[1]=='a'  || s[1]=='b'||  s[1]=='c')
				
				cout<<"acceptable"<<endl;
				
			}
			else
			{
				cout<<"non accetable:"<<endl;
			}
			if(s[0]=='c')
			{
				
				
				   if(s[1] == 'b' || s[1] == 'c')
        {
            if(s[1] == 'a' || s[1] == 'b' || s[1] =='c')
                {
               
                }
            cout << "acceptable"<<endl;;
				
			}
			
			}
			
		}
		
			
};
int main()
{
	dfa df;
	df.find_dfa();
}