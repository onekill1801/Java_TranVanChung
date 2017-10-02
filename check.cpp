#include<iostream>
using namespace std;
int CheckSix(int *a,int left,int right)
{
	int m;
	if(left>right) return 0;
	m=(left+right)/2;
	if(a[m]==6) return m;
	if(6<a[m]) return CheckSix(a,left,m-1);
	return CheckSix(a,m+1,right);
}
int main()
{
	int a[10]={1,6,3,4,5,6,7,6,9,10};
	int x;
	cout<<"CheckSix so: ";cin>>x;
	if(int z=CheckSix(a,0,9)) cout<<"CheckSix thay tai vi tri: "<<z<<"\n";
	else cout<<"khong CheckSix thay\n";
	return 0;
}
