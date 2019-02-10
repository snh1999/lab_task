#include <iostream>
#include<stdlib.h>
using namespace std;
class my_string
{
    private:
        int char_len;
        char* str;
    public:
        my_string()
        {
            char_len=100;
            str=(char*)calloc(char_len, sizeof(char));
        }

        my_string(int length)
        {
            char_len=length;
            str=(char*)calloc(char_len, sizeof(char));
        }

        bool setter(char *ch)
        {
            int length=0;
            while(1)
            {
                length++;
                if(ch[length]==NULL)
                    break;
            }
            if (length<= char_len)
            {
                for(int i=0;i<char_len;i++)
                str[i]=ch[i];
                return true;
            }
            else
                return false;
        }

        void printstr()
        {
            cout << str << endl;
        }
};

int main()
{
    char a[100];
    int i;
    cout<<"enter the string length"<<endl;
    cin>> i;
    my_string object(i);
    cout<<"enter the string"<<endl;
    cin>> a;
    if(object.setter(a))
        object.printstr();
    else
        cout <<"false"<< endl;
}

