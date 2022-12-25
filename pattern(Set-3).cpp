

// que : 26 :-pattern :- 29 : to print the letter "C" :) ....

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=n;j++)
		{
			if((i!=1 && i!=n&&j==1)||(i==1 || i==n)&&j!=1&&j!=n)
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

// que : 27 :-pattern :- 30 : to print the letter "D" :) ....

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=n;j++)
		{
			if((j==1)||(i==1 || i==n)&&j!=n || (i!=1 && i != n && j==n))
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

// que : 28 :-pattern :- 31 : to print the letter "E" :) ....

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=n;j++)
		{
			if(((j==1)||(i==1 || i==n/2+1 || i==n)&&j!=n))
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

// que : 29 :-pattern :- 32 : to print the letter "F" :) ....

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=n;j++)
		{
			if(((j==1)||(i==1 || i==n/2+1)&&j!=n))
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

// que : 30 :-pattern :- 33 : to print the letter "H" :) ....

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=n;j++)
		{
			if(j==1||j==n || i==n/2+1)
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

// que : 31 :-pattern :- 34 : to print the letter "Z" :) ....

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=n;j++)
		{
			if((i==1 || i==n)||(i+j==n+1))
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

// que : 32 :- pattern :- 35 : to print the letter "X" :) ....

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=n;j++)
		{
			if(( i==j)||(i+j==n+1))
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

// que : 33 :-pattern :- 36 : Program to print the letter "N" :) ....

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=n;j++)
		{
			if(( i==j)||(j==1)||(j==n))
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

//que : 34 :- pattern  :- 37 : Program to print the pattern of rectangle with digonals  :) ....

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=n;j++)
		{
			if(i == 1 || j == 1 || j == n || i == n || i == j || (i+j == n+1))
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