
/*

// que : 1 :- pattern 1 :- Program to print the rectangle :) ....

#include<iostream>
using namespace std;
int main()
{
 int rows,column;
 cout<<" enter the number of rows : "<<endl;
 cin>>rows;
 cout<<" enter the number of column : "<<endl;
 cin>>column;
 cout<<" now your pattern will be this :- "<<endl;
 for(int i = 1;i<=rows;i++)
 {
 	for(int j = 1;j<=column;j++)
 	{
 	cout<<"*";	
	 }
	 cout<<endl;
	 }	
}

// que : 2 :- Pattern 2 :- Program to print the hollow rectangle  pattern :) ....

#include<iostream>
using namespace std;
int main()
{
	int rows,column;
	cout<<" enter the number of rows "<<endl;
	cin>>rows;
	cout<<" enter the number of column "<<endl;
	cin>>column;
	cout<<" your hollow rectangle pattern will be : "<<endl;
	for(int i = 1;i<=rows;i++)
	{
		for(int j = 1;j<=column;j++)
		{
			if(i==1 || i==rows || j==1 || j==column)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}

// que : 3 :-pattern :- 3 : Program to print the triangle :) .... 

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

// que : 4 :- pattern :- 4  : Program to print the hollow triangle :) ....

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
	for(int j = 1;j<=i;j++)
	   {
		if(i == n || j==1 || j==i )
		{
			cout<<"*";
		}
		else
		{
			cout<<" ";
		}
	   }
	   cout<<endl;	
   }
}

// que : 5 :- pattern :- 5 :- Program to print the inverse triangle :) ....

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = n;i>=1;i--)
	{
		for(int j = 1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

// que : 6 :-pattern :- 6 :- Program to print the inverse hollow triangle :) ....

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = n;i>=1;i--)
	{
		for(int j = 1;j<=i;j++)
		{
			if(j==1 || j==i || i == n)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}

// que : 7 :- pattern :- 7 : Program to print the triangle after some spaces :) ....

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j = 1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

// que : 8 :- pattern :- 8 : print hollow triangle after some spaces :) ....

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j = 1;j<=i;j++)
		{
			if(j==1 || j == i || i == n)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}



// que : 9 :-pattern :- 10 : Program to print half pyramid using numbers :) ....

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=i;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
}

// que : 10 :-pattern :- 11 : Program to print inverted half pyramid using numbers :) ....

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = n;i>=1;i--)
	{
		for(int j = 1;j<=i;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
}


// que : 11 :-pattern :- 14 : Program to print floyd's triangle :) ....

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int number = 1;
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=i;j++)
		{
			cout<<number<<" ";
			number++;
		}
		cout<<endl;
	}
}

// que : 12 :- pattern :- 15 : Program for 0-1 pattern :

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=i;j++)
		{
			if((i+j)%2==0)
			{
				cout<<"1 ";
			}
			else
			{
				cout<<"0 ";
			}
		}
		cout<<endl;
	}
}
