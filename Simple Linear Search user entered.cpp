
#include <iostream>
using namespace std;
int Linear_search( int arr[],int n, int key){
	for(int i=0;i<=n;i++)
	{
		if(arr[i]==key){
			return i;
		}
	}
return -1;
}

int main() {
	int arr[5];
	cout<<" \n Enter the array"<<endl;
	int n = sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int key;
	cout<<"Enter the key \n "<<endl;
	cin>> key;
    int index = Linear_search ( arr,n,key);
	if (index!=-1)
	{ cout<<key<<" is present at "<<index<<endl;}
	else {
		cout<<key<<" is not present"<<endl;}
	

	return 0;
}

