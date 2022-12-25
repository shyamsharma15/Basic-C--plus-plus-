
/*
// Program for basics of string :)  .... 

#include<iostream>
using namespace std;
int toLowercase(char la)
{
    char temp;
    if(la >= 'a' && la <= 'z' )
    {
        return la;
    }
    else{
        temp = la - 'A' + 'a';
    }
    return temp;
}
int getLength(char name[])
{
    int count = 0;
    for(int i = 0; name[i] != '\0';i++)
    {
        count ++;
    }
    return count ;
}
int main()
{
    char name[20] ;
    cout<<" enter your name "<<endl;
    cin>>name;
    cout<<toLowercase('a');
    cout<<toLowercase('A');
    cout<<toLowercase('B');
    cout<<toLowercase('d');

}

// que : 1 :- Program to reverse the string :) ....

#include<iostream>
using namespace std;
int getLength(char name[])
{
    int count = 0;
    for(int i = 0;name[i] != '\0'; i++)
    {
         count ++;
    }
    return count ;
}
void reverse(char name[] , int length)
{
    int s = 0,e = length - 1;
    while(s < e)
    {
        swap(name[s] , name[e]);
        s++;
        e--;
    }
   // cout<<" the reverse of your name is "<<name ;
}
int main()
{
  char name[10];
  cout<<" enter your name "<<endl;
  cin>>name;
  int length = getLength(name);
  cout<<" the reverse of your name is "<<endl;
  reverse(name , length);
 cout<<name;
}

// que : 2 :- Program to check if the string is palindrome or not :) ....


#include<iostream>
using namespace std;
int getLength(char name[])
{
    int count = 0;
    for(int i = 0;name[i] != '\0'; i++)
    {
         count ++;
    }
    return count ;
}
bool palindrome(char name[] , int length)
{
    int s = 0,e = length - 1;
    for(int i = 0;i<length;i++)
    {
        if(name[s] != name[e])
        {
            return 0;
            break;
        }
        else
        {
           s++;
           e--;
        }
    }
    return 1;
  
}
int main()
{
  char name[10];
  cout<<" enter your name "<<endl;
  cin>>name;
  int length = getLength(name);
  cout<<" your name is palindrome or not  "<<endl;
  if(palindrome(name , length))
  {
    cout<<" yes "<<endl;
  }
  else{
    cout<<" no "<<endl;
  }
 
}

// que : 3 :- Program to check if the string is palindrome or not use case sensitive :) ....

#include<iostream>
using namespace std;
int getLength(char array[])
{
    int count = 0;
    for(int i = 0; array[i] != '\0' ; i++)
    {
        count ++;
    }
    return count ;
}
char toLowercase(char c)
{
    if(c >= 'a' && c <= 'z')
    {
        return c;
    }
    else{
         char temp = c - 'A' + 'a';
         return temp;
    }
   
}
bool palindrome(char arr[] , int l)
{
    int s = 0 , e = l-1;
    for(int i = 0 ; i < e ; i++)
    {
        if(toLowercase(arr[s])!= toLowercase(arr[e]))
        {
            return 0;
            break;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int main()
{
    char ch[8];
    cout<<" enter the string "<<endl;
    cin>>ch;
    int length = getLength(ch);
    cout<<" palindrome or not "<<endl;
    if(palindrome(ch , length ))
    {
      cout<<" yes it is palindrome ";
    }
    else{
        cout<<" it is not palindrome ";
    }

}


// que : 4 :- Program to declare the string and find its length and push and pop operation :) ....

#include<iostream>
using namespace std;
int main()
{
    string str = " shyam ";
    cout<<str<<endl;
    cout<<" the length of string is : "<<str.length()<<endl;
    str.push_back('s');
    str.push_back('h');
    str.push_back('a');
    str.pop_back();
    str.pop_back();
    str.pop_back();
    cout<<str;
    
   
}

// que : 5 :- Program to remove the other invalid things in a string  :) ....

#include<iostream>
#include<vector>
using namespace std;
bool isValid(char c)
{
    if(c >= 'a' && c <= 'z')
    {
        return 1;
    }
    else{
        return 0;
    }
 }
void newString(string ch)
{
    string ne = "";
    for(int i = 0;i<ch.length();i++)
    {
      if(isValid(ch[i]))
      {
        ne.push_back(ch[i]);
      }
    }

    cout<<" new string is "<<ne;
    //return ne;
}
int main()
{
    string str = " papp@14kah$% ";
    cout<<" the right string is "<<endl;
    newString(str);
}


// que : 6 :- Program to check if a valid palindrome or not :) ....

// i/p    s  =    ABshi090@$@090ihsBA
// o/p    n =     true hai yea palindrome 

#include<iostream>
using namespace std;
bool valid(char c )
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
    {
        return 1;
    }
    return 0;
}
char toLowercase(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkPalindrome(string stri)
{
    int s = 0 , e = stri.length() - 1;
    while(s <= e)
    {
        if(toLowercase(valid (stri[s])) != toLowercase(valid(stri[e])))
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int main()
{
    // string str = "ABshi090@$090ihsBA";
    string str = "nooN";
    if(checkPalindrome(str))
    {
        cout<<" our string is palindrome ";
    }
    else{
        cout<<" our string is not palindrome ";
    }

}


// que : 7 :- Program to return the maximum occurring character :) ....


#include<iostream>
using namespace std;
char maxOccuring(string stri)
{
    int array[26] = {0};
    for(int i = 0;i<stri.length();i++)
    {
       char c     =  stri[i];
       int number = 0;
       // if lowercase 
       number  = c - 'a';
       array[number]++;
    }

    // abb jab itna kaam ho gya hai to maximum bhi nikal lo array mai se 
      int maxi = -1 , ans = 0;
    for(int i = 0;i<26;i++)
    {
       if(maxi < array[i])
       {
        ans = i;
        maxi = array[i];
       }
    }
    return 'a' + ans ;
}
int main()
{
    string str = "ABaacB";
    cout<<" the maximum occurring character is "<<maxOccuring(str);
}

// que : 8 :- Program to convert the space into code studio ka question "@40"  :) ....

//   input :- my name is shyam
//   output :- my@40name@40is@40shyam

#include<iostream>
using namespace std;
#include<string>
string convertString(string str)
{
    string shy = "";
    for(int i = 0;i<str.length();i++)
    {
        if(str[i] == " ")
        {
           shy.push_back('@');
           shy.push_back('4');
           shy.push_back('0');
        }
        else{
            shy.push_back(str[i]);
        }
    }

    return shy;
}
int main()
{

    string str = "my name is shyam";
    cout<<" now the string after is "<<endl;
    cout<<convertString(str);
}

*/
