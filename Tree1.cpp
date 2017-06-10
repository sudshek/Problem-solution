#include<iostream>
using namespace std;
int Tree(int n)
{
    
	int t = n;
	for(int i =1 ; i<=n ; i++)
	{
		int j, count = 0;
		for(j = 0 ; j<(t/2) ; j++)		
		cout<<" ";
		for(int k = j; k<(n/2) ; k++)
		{
		    cout<<"*";
		    count++;
	    }
		if(i%2 == 1)
		{
		   t-=2;
		   cout<<"*";
	    }
	    else
	    cout<<" ";
	    for(;count>=1;count--)
	    {
	    	cout<<"*";
		}
		cout<<endl;
	}
	return 0;

}
int main()
{   printf("Enter the Value of N");
    int n;
	cin>>n;
	Tree(n);
	
	
}


