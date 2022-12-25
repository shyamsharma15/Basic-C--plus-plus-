// que : 1 :- Program to print the counting using function :) ....
/*
#include<iostream>
using namespace std;
void printCounting(int n)
{
    for(int i = 1;i<=n;i++)
    {
        cout<<i<<" ";
    }
}
int main()
{
    int n;
    cout<<" enter the number upto which you print counting "<<endl;
    cin>>n;
    printCounting(n);
}

// que : 2 :- Program to print the even number or odd number using functions :) ....

#include<iostream>
using namespace std;
bool isEven(int a)
{
   if(a%2 == 0)
   {
    return 1;
   }
   else{
    return 0;
   }
}
int main()
{
   int a;
   cout<<" enter the number ";
   cin>>a;
   if(isEven(a))
   {
    cout<<" number is even ";
   }
   else{
    cout<<" number is odd ";
   }
}

// que : 3 :- Program to print the prime number using the function :) ....

#include<iostream>
using namespace std;
bool isprime(int a)
{
    for(int i = 2;i<a;i++)
    {
        if(a%i == 0)
        {
            return 0;
        }
        else{
            return 1;
        }
    }
}
int main()
{
  int a;
  cout<<" enter the number ";
  cin>>a;
  if(isprime(a))
  {
    cout<<" prime number ";
  }
  else{
    cout<<" not a prime number ";
  }
}


// que : 4 :- Program to find the nCr of any number :) ....

#include<iostream>
using namespace std;

int factorial(int n)
{
    int ans = 1;
    for(int i = 1;i<=n;i++)
    {
       ans = ans * i;
    }
    return ans ;
}

int nCr(int n , int r){
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n-r);
    int ans = numerator/denominator;
    return ans;
}

int main()
{
   int n,r;
   cout<<" enter the first number "<<endl;
   cin>>n;
   cout<<" enter the second number "<<endl;
   cin>>r;
   cout<<" the answer is "<<nCr(n,r);
   return 0;

}


// que : 5 :- i will give two number a,b you have to tell me the total number of set bits :) ....

#include<iostream>
using namespace std;
int setBits2(int a )
{
    int r,awalla = 0;
    while(a != 0)
    {
        r = a & 1;
        if(r == 1)
        {
            awalla = awalla + r;
        }
        a = a>>1;
    }
    return awalla;
}
int setBits1(int b )
{
    int r,bwalla = 0;
    while(b != 0)
    {
        r = b & 1;
        if(r == 1)
        {
            bwalla = bwalla + r;
        }
        b = b>>1;
    }
    return bwalla;
}
int finalAnswer(int a , int b)
{
   int shyam =  setBits1(b) + setBits2(a);
   return shyam;
}
int main()
{
   int a,b;
   cout<<" enter the numbers "<<endl;
   cin>>a>>b;
   cout<<finalAnswer(a , b);
}

// que : 6 :- i will give you an A.P and then you will have tell me the nth term of that AP :) ....

#include<iostream>
using namespace std;
int nthtermap(int n)
{
    int ans = 3*n + 7;
    return ans ;

}
int main()
{
  int n;
  cout<<" enter the term of an ap "<<endl;
  cin>>n;
  cout<<nthtermap(n);
}

*/

// que : 7 :- Program to print the nth term of the fibbonacci series using the functions :) ....
#include<iostream>
using namespace std;
void fibonacci(int n)
{
   int a = 0,b = 1;
   cout<<a<<" "<<b<<" ";
   for(int i = 1;i<=n;i++ )
   {
    int c = a+b;
    cout<<c<<" ";
    a = b;
    b = c;
   }
   return ;

}
int main()
{
   int n;
   cout<<" enter the number ";
   cin>>n;
   cout<<fibonacci(n);

}






