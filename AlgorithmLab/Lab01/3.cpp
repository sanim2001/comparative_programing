#include<bits/stdc++.h>
using namespace std;
void Merge(int a[], int l, int h, int mid){

	int i, j, k, temp[h-l+1];
	i = l;
	k = 0;
	j = mid + 1;
	while (i <= mid && j <= h){
		if (a[i] < a[j]){
			temp[k] = a[i];
			k++;
			i++;
		}
		else{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
	while (i <= mid){
		temp[k] = a[i];
		k++;
		i++;
	}
	while (j <= h){
		temp[k] = a[j];
		k++;
		j++;
	}
	for (i = l; i <= h; i++){
		a[i] = temp[i-l];
	}
}
void MergeSort(int a[],int l,int h){
    int mid;
	if (l < h){
		mid=(l+h)/2;
		MergeSort(a, l, mid);
		MergeSort(a, mid+1, h);
		Merge(a, l, h, mid);
	}
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];

    MergeSort(a,0,n-1);
    int ans=0, mn= 1e+7;

    for(int i=1; i<n; i++){
        ans= a[i]-a[i-1];
        if(ans<mn){
            mn=ans;
        }
    }
    cout<<mn<<"\n";

}

