#include<iostream>
#include<string>
using namespace std;

int main()
{
	 cout<<"if quit type'/q'"<<endl;

    #ifndef ONLINE_JUDGE
	freopen("test.txt","w", stdout);
    #endif
	string arr[100];
   
	for(int i=0;i<=100;i++)
	{
	        cin>>arr[i];
			cout<<arr[i]<<" ";

			if(arr[i]=="/q")
			{ 
				return 0;
			}

		
	} 
	return 0;
}

