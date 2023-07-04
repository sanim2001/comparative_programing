#include<bits/stdc++.h>
using namespace std;
void Merge(float a[], int l, int h, int mid){

	int i, j, k;
	float temp[h-l+1];
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
void MergeSort(float a[],int l,int h){
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
    float a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    int x;
    cin>>x;
    float pos = a[x-1];
    MergeSort(a,0,n-1);
    for(int i=0; i<n; i++){
        if(pos==a[i]){
            cout<<i+1<<"\n";
            return 0;
        }
    }

}
