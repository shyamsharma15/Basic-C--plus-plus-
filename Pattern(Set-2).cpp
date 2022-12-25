// que : 13 :-pattern :- 16 : Program for palindromic pattern :) ....

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
			cout<<"  ";
		}
		int f = i;
		for(int j = 1;j<=i;j++)
		{
			cout<<f<<" ";
			f--;
		}
		for(int j = 2;j<=i;j++)
		{
			cout<<j<<" ";
			
		}
		cout<<endl;
	}
}

// que : 14 :-pattern :- 17 : Program to print diamond pattern using stars :) ....

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
		}for(int j = 1;j<=2*i-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i = n;i>=1;i--)
	{
		for(int j = 1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j = 1;j<=2*i-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

// que : 15 :-pattern 18 :- Program to print hollow diamond :) ....

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
			if(j==1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		for(int j = 2;j<=i;j++)
		{
			if(j==i)
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
	for(int i = n;i>=1;i--)
	{
		for(int j = 1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j = 1;j<=i;j++)
		{
			if(j==1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		for(int j = 2;j<=i;j++)
		{
			if(j==i)
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

// que : 16 :-pattern :- 19 : print hollow diamond inscrived in a rectangle :) ....

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
		for(int j = 1;j<=2*n-2*i;j++)
		{
			cout<<" ";
		}
		for(int j = 1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=i;j++)
		{
			cout<<"*";
		}
		for(int j = 1;j<=2*n-2*i;j++)
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

// que : 17 :-pattern :- 20 : Program to print the solid rhombus pattern :) ....

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
		for(int j = 1;j<=n;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

// que : 18 :-pattern 21 :- Program to print hollow rhombus :) ....

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
		for(int j = 1;j<=n;j++)
		{
			if(i == 1 || i == n || j == 1 || j == n)
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

// que : 19 :- pattern 22 :- pyaramid pattern for  number 1 :) ....

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
			cout<<i<<" ";
		}
		cout<<endl;
	}
}

// que : 20 :- pattern :- 23 : pyarmid pattern for number 2 :) ....

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
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

// que : 21 :- pattern 24 :- print solid butterfly pattern :) ....

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
		for(int j = 1;j<=2*n-2*i;j++)
		{
			cout<<" ";
		}
		for(int j = 1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i = n;i>=1;i--)
	{
		for(int j = 1;j<=i;j++)
		{
			cout<<"*";
     	}
     	for(int j = 1;j<=2*n-2*i;j++)
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
*/
//que : 22 :- pattern 25 :- print hollow butterfly pattern :) ....

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
  		if(j == 1 || j == i)
  		{
  			cout<<"*";
		  }else
		  {
		  	cout<<" ";
		  }
		  
	  }
	  for(int j = 1;j<=2*n-2*i;j++)
	  {
	  	cout<<" ";
	  }
	  for(int j = 1;j<=i;j++)
	  {
	  	if(j == 1 || j == i)
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
  for(int i = n;i>=1;i--)
  {
  	for(int j = 1;j<=i;j++)
  	{
  		if(j == 1 || j == i)
  		{
  			cout<<"*";
		  }else
		  {
		  	cout<<" ";
		  }
	  }
	  for(int j = 1;j<=2*n-2*i;j++)
	  {
	  	cout<<" ";
	  }
	  for(int j = 1;j<=i;j++)
	  {
	  	if(j == 1 || j == i)
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

// que : 23 :- pattern :- 26 :- (Print the zig-zag pattern for n = 9 ) :) ....

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = 1;i<=3;i++)
	{
		for(int j = 1;j<=n;j++)
		{
			if((i+j)%4==0 || (i == 2 && j%4==0))
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

// que : 24 :- pattern :- 27 : to print the pattern "A" :) ....

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
			if((j == 1 || j == n)&&i!=1 || (i == n/2+1) || j!=1 && j!=n && i==1 )
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

// que : 25 :-pattern :- 28 : to print the pattern "B" :) ....

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
			if((j==1) || (i == 1 || i == n/2+1 || i == n)&& j!=n||
			 (i!=1 && i!=n && j==n))
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
