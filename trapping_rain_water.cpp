#include <iostream>
//#include <climits>
using namespace std;



/* Trapping rain water code for one dimentional array */
int main()
{
	int n;
	cin>>n;
	int a[n];
	int largel=0;
	int larger=0;
	int left[n];
	left[0]=0;
	int right[n];
	right[n-1]=0; 

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	for(int i=0;i<n-1;i++){
		if(largel<a[i]){
			largel=a[i];
		}
		left[i+1]=largel;
		//cout<<left[i+1]<<"\n";
		if(larger<a[n-i-1]){
			larger=a[n-i-1];
		}
		right[n-i-2]=larger;
		//cout<<right[n-i-2]<<" ";
	}
	int rainwater=0;
	for(int i=0;i<n;i++){
		if(left[i]>right[i]){
			right[i]=right[i]-a[i];
			if(right[i]<0){
				rainwater=rainwater+0;
			}
			else{
				rainwater=rainwater+right[i];
			}
		}
		else{
			left[i]=left[i]-a[i];
			if(left[i]<0){
				rainwater=rainwater+0;
			}
			else{
				rainwater=rainwater+left[i];
			}
		}		
	}
	cout<<rainwater<<"\n";
}