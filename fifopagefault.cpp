#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string refstring;
    cin>>refstring;
    int flag =0;
    int pagefault=0;
    int counter=-1;
    cout<<endl<<refstring;
    cout<<endl<<refstring[0];
    string pageframe[3];


    for(int i=0;i<3;i++)
    {
        pageframe[i]="a";
    }
    for(int i=0;i<3;i++)
    {
        cout<<pageframe[i];
    }
    for(int i=0,x=0;i<refstring.length();i++,x++)
    {
        //cout<<'a';
        cout<<endl<<"for1"<<endl;
       // string fnd = getString(refstring[i]);
        string fnd(1, refstring[i]);
        if(pageframe[i] == "a")
        {
            flag = 1;
            cout<<endl<<"length<3"<<endl;
        }
        else
        {
            for(int k=0;k<3;k++)
            {

                cout<<endl<<"for2"<<endl;

                if (fnd==pageframe[k])
                {
                    flag = 0;
                    break;
                    cout<<endl<<"same"<<endl;
                }
                else
                {
                    flag = 1;
                    counter++;
                    if(counter==3)
                    {
                        counter=-1;
                    }
                    x=counter;
                    break;
                }
            }
            break;
        }

        if(flag)
        {
            pageframe[x]=refstring[i];
            pagefault++;
        }


    }
    cout<<endl<<"pagefault : "<<pagefault;

    return 0;
}
