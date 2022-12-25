/*
#include<iostream>
using namespace std;
int main()
{
   int num = 8;
   cout<<" the address of the num is "<<&num<<endl;

   // how to declare the pointers 
   int *ptr = &num;   // isse num kaa address hammare pointer mai store ho jaayega 

   cout<<"yahan address print hoga pointer kaa "<<ptr<<endl;
   cout<<" yahan pointer ki value print hogi "<<(*ptr)<<endl;
   
   cout<<" the size of num is "<<sizeof(num)<<endl;
   
   // how to find the size of pointer 
   cout<<" the size of pointer is "<<sizeof(ptr);

}

// basic program of pointers 

#include<iostream>
using namespace std;
int main()
{
    // simple case mai variable num ki copy a mai jaa rhi hai to num mai koi changes nhi hoinge jo hum a mai karinge 
   int num = 4;
   cout<<" before declaration of a , the value of num is "<<num<<endl;
   int a = num;
   a++;
   cout<<" after declaration of a , the value of num is "<<num<<endl;

  // but pointers ke case mai hum address send ka rhae hai to changes hoinge isme num mai bhi 

  int *pt = &num;
  cout<<" the value of num before doing nothing is "<<num<<endl;
  *pt = *pt + 1;
  cout<<" the value of num after doing initialization in pointer is "<<num<<endl;
  // yahan num ki value 5 ho jaayegi 
}


// we can also initialize a pointer in this way 

#include<iostream>
using namespace std;
int main()
{
    int i = 4;
    int *pt = 0;
    pt = &i;
    cout<<pt<<endl; // yahan address print hoga 
    cout<<*pt<<endl; // yahan value 4 print hogi 
     pt = pt + 2;
    cout<<pt;

}

// pointers in array 

#include<iostream>
using namespace std;
int main()
{
  int arr[5] = {2,5,7,9};
  cout<<" address of 1st memory block "<<arr<<endl;  // asse bhi karsakte hai 
  cout<<" address of 1st memory block "<<&arr[0]<<endl;   // aur ese bhi 
  cout<<" value at 0th index "<<*arr<<endl;
  cout<<" value "<<*arr + 1<<endl;  // 0th ki value mai 1 add kardega

  // now abb 1st location ki value pointer ki help se kesse print karrein 

  cout<<" value at 1st index "<<*(arr + 1)<<endl;
  cout<<" value at 3rd index is "<<*(arr + 3)<<endl;
  cout<<" value at 2nd index "<<*(arr + 2)<<endl;
  cout<<" value at 2nd index is "<<2[arr]<<endl;

}


// program for the size of address ke liye 

#include<iostream>
using namespace std;
int main()
{
  int temp[10] ;
  cout<<" the size of the array is "<<sizeof(temp)<<endl;
  int *ptr = &temp[0];
  cout<<" the size of pointer is "<<sizeof(ptr)<<endl;
  cout<<" the size of value at 0th index is "<<sizeof(*ptr)<<endl;
  cout<<" size of address "<<sizeof(&ptr)<<endl;
}


// program for &

#include<iostream>
using namespace std;
int main()
{
  
    int arr[5] = {2,5,7,9};
    cout<<"0th index kaa address hai "<<&arr[0]<<endl;
    cout<<" 0th index kaa address hai "<<arr<<endl;
    cout<<" 0th index address is "<<&arr;
    
}

// character array and pointers 

#include<iostream>
using namespace std;
int main()
{
   char temp = 'z';
   char *pt = &temp;
   cout<<pt<<endl;
   cout<<*pt<<endl;
}

// functions and pointers 
// yahan changes nhi hoinge jab hum adress mai updation karinge 
#include<iostream>
using namespace std;
int update(int *ptr )
{
  ptr = ptr + 1;
}
int main()
{
  int value = 5;
  int *p = &value;
  cout<<"before"<<p<<endl;
  update(p);
  cout<<"after "<<p;
  
}

// par yahan value mai changes ho jaayinge *ptr

#include<iostream>
using namespace std;
int update(int *p)
{
  *p = *p + 1;
}
int main()
{
  int value = 4;
  int *ptr = &value;
  cout<<" before calling "<<*ptr<<endl;
  update(ptr);
  cout<<" after calling "<<*ptr<<endl;
}
*/
// more understanding on pointer 
#include<iostream>
using namespace std;
int main()
{
  int array[5] = {2,5,8,9};
  int *ptr = &array[0];
  cout<<" the addres of array 0th index is "<<array<<endl;
  cout<<" the address of array 0th index is "<<&array<<endl;
  cout<<" the address of array 0th index  is "<<ptr<<endl;
  cout<<" the address of ptr box is "<<&ptr<<endl;
  cout<<" the value in the ptr is "<<*ptr<<endl;
  cout<<" the address of the array 1th index is "<<array+1<<endl;
  cout<<" the address of array 1th index  is "<<ptr + 1;

}