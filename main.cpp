Question 2



#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str)

int main()
{
    string text;

    do
    {
        cout << "Enter some Text: " << endl;
        cin >> text;
        if(isPalindrome(text))
        {
            cout << "The text is a palindrome" << endl;
        }
        else
        {
            cout << "The text is not a palindrome" << endl;
        }

    }while(text != "Q");

    return 0;
}

{
    for(int i = 0; i <= str.length()-1; i++)
    {
        if(str[i] != str[str.length()-1-i])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}




Question 3

#include <iostream>

using namespace std;

int main()
{
    struct NODE{
    Float data;
}

class stack{

    Node *top;
        public:
    stack();
        void Push();
        void Pop();
        void display();
    ~stack();

};
