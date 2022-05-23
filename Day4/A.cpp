#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int c;
    for (int row=1;row<=n;row++){
        int num[11]{0};
        int a;
        cin >> a;
        for (int i=1;i<=a;i++){
            int rem=i;
            while (rem!=0){
                c = rem%10;//112131
                rem = rem/10;
                num[c]++;//2
            }
        }
        for(int i=0;i<10;i++){
                if(i<9)
                    cout<<num[i]<<" ";
                else
                    cout<<num[i]<<endl;
            }
    }
    return 0;
}
