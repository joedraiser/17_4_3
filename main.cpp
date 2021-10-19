#include <iostream>
#include <cstring>

bool substr(char* a, char* b)
{
    int lengthA=0, lengthB=0;
    char temp;

    while(true)
    {
        temp=*(a+lengthA);
        if(temp!='\0')
            lengthA++;
        else
            break;
    }

    while(true)
    {
        temp=*(b+lengthB);
        if(temp!='\0')
            lengthB++;
        else
            break;
    }

    if(lengthA>=lengthB)
    {
        for(int i=0;i<(lengthA-lengthB+1);i++)
        {
            if(strncmp(a+i, b, lengthB)==0)
                return true;
        }
        return false;
    }
    else
        return false;
}

int main()
{
    char* a = "Hello world";

    char* b = "wor";

    char* c = "banana";

    std::cout << substr(a,b) << " " << substr(a,c);
}
