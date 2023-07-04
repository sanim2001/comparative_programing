#include<bits/stdc++.h>
using namespace std;
int n,m;
int up_bound(int a[],int n, int m, int x){
    int l=x,r=n-1,ans=x;
    while(a[ans]==a[ans+1]){
        ans = ans+1;
    }
    return ans;
}
int lw_bound(int a[],int n, int m, int x){
    int l=0,r=x,ans = x,mid;
    while(l<=r){
        mid = (l+r)/2;
        if(a[mid]<m) l=mid+1;
        else if(a[mid]>m){
          r = mid-1;
        }
        else{
            r =mid-1;
            ans = mid;
        }
    }
    return ans;
}
int up_bou(int a[], int n, int m){
    int ans;
    for(int i=0; i<n; i++){
        if(a[n-1]<m){
            ans = n;
            cout<<ans<<" ";
            break;
        }
    }
    int l=0,r=n-1,fg=0,mid;
    while(l<=r){
        mid = (l+r)/2;
        if(a[mid]<=m) l=mid+1;
        else{
          ans =mid;
          r = mid-1;
          fg=1;
        }
    }
    if(fg) return ans;
    else return -1;
}
int lw_bou(int a[], int n, int m){
    int ans;
    for(int i=0; i<n; i++){
        if(a[0]>m){
            ans = 0;
            cout<<ans<<" ";
            break;
        }
    }
    int l=0,r=n-1,fg=0,mid;
    while(l<=r){
        mid = (l+r)/2;
        if(a[mid]<=m){
          l=mid+1;
          ans = mid;
          fg =1;
        }
        else{
          r = mid-1;
        }
    }
    if(fg) return ans;
    else return -1;
}
int main(){
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n; i++) cin>>a[i];
    int up = up_bou(a,n,m);
    if(up!=-1){
        up=up_bound(a,n,a[up],up);
        cout<<up<<" ";
    }

    int lw = lw_bou(a,n,m);
    if(lw!=-1){
        lw=lw_bound(a,n,a[lw],lw);
        cout<<lw<<"";
    }

}
