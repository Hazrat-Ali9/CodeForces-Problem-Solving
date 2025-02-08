#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s1 = "qwertyuiop";
    string s2 = "asdfghjkl;";
    string s3 = "zxcvbnm,./";


    char c;
    string s;
    cin>> c >> s;

    for(int i=0;i<s.size();i++)
    {
        bool f=false;

        for(int j=0;j<s1.size();j++)
        {
            if(s[i]== s1[j])
            {
                if(c=='L')
                    cout<< s1[j+1];
                else
                    cout<< s1[j-1];

                f=true;
                break;
            }
        }
        if(f)
            continue;
        for(int j=0;j<s2.size();j++)
        {
            if(s[i]== s2[j])
            {
                if(c=='L')
                    cout<< s2[j+1];
                else
                    cout<< s2[j-1];

                f=true;
                break;
            }
        }
        if(f)
            continue;
        for(int j=0;j<s3.size();j++)
        {
            if(s[i]== s3[j])
            {
                if(c=='L')
                    cout<< s3[j+1];
                else
                    cout<< s3[j-1];

                break;
            }
        }
    }


    return 0;
}
