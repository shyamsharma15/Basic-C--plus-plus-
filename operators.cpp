
/*
// using the bitwise operator :- 

#include<iostream>
using namespace std;
int main()
{
    int a = 4, b = 6;
    // use all bitwise operator 
    cout<<" a & b = "<<(a&b)<<endl;
    cout<<" a | b = "<<(a|b)<<endl;
    cout<<" ~a "<<(~a)<<endl;
    cout<<" a ^ b = "<<(a^b);
}

// left and right shift operator 

#include<iostream>
using namespace std;
int main()
{

    cout<<(17>>1)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;
    cout<<(9>>2)<<endl;
    cout<<(34<<2)<<endl;
    
}

// incremental and decremental operator 

#include<iostream>
using namespace std;
int main()
{
    int a = 2;
    cout<<a++<<endl;
    cout<<++a<<endl;
    cout<<a++<<endl;

    int b = 3;

    cout<<--b<<endl;
    cout<<b<<endl;
    cout<<b--;
}

#include<iostream>
using namespace std;
int main()
{
  for(int i = 0;i<=5;i++)
  {
    if(i == 3)
    {
        break;
    }
    else{
        cout<<i<<endl;
    }
  }
}

#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    for(int i = 0;i<a;i++)
    {
         cout<<" hii"<<endl;
         cout<<" hello "<<endl;
           continue;
        cout<<" hii  "<<endl;
    }
}

// fibonacchi series program

#include<iostream>
using namespace std;
int main()
{

    int n = 10,a = 0, b = 1,c;
    cout<<a<<" "<<b<<" ";
    for(int i = 3;i<=n;i++)
    {
        c = a+b;
        cout<<c<<" ";
        a = b;
        b = c;
    }

}

// how to find the size of array     

#include<iostream>
using namespace std;
int main()
{
    int arr[5] = { 1,4,3,4,3};
    int arrsize = sizeof(arr)/sizeof(int);
    cout<<" the size of array is "<<arrsize;
}

// program of binary to decimal conversion and 

// decimal to binary 

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,r,i = 0,ans = 0;
    cout<<" enter the number ";
    cin>>n;
    while( n != 0 )
    {
        r = n%10;
        if(r == 1)
        {
           ans = (r * (pow(2,i)))  + ans;
        }
        i++;
        n = n/10;

    }
    cout<<" the answer is "<<ans;
}



// program to convert the   decimal to binary 

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,r,ans = 0,i = 0;
    cout<<" enter the number ";
    cin>>n;
    while (n != 0)
    {
        r = n & 1;
        ans = (r * pow(10 , i)) + ans;
        n = (n>>1);
        i++;

    }
    cout<<" our answer is "<<ans;
}

program for binary to decimal

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,r,ans = 0,i = 0;
    cout<<" enter the number ";
    cin>>n;
    while( n != 0)
    {
        r = n%10;
        if(r == 1)
        {
            ans = (r * pow(2,i)) + ans ;
        }
        n = n/10;
        i += 1;

    }
    cout<<" our answer is "<<ans;
}

// program for power of two

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,ans;
    cout<<" enter the number ";
    cin>>n;
    for(int i = 0;i<=30;i++)
    {
        ans = pow(2 , i);
        if(ans == n)
        {
            cout<<" true ";
            break;
        }
    }
      cout<<" not true ";
}
*/








