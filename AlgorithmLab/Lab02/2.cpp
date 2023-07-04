#include<bits/stdc++.h>
using namespace std;

struct product{
    double weight;
    double value;
    double price_per_weight;

}item[1000],temp;

int main(){

    int n;
    double w;
    cin>>n>>w;
    for(int i=0; i<n; i++){
        cin>>item[i].value;
    }
    for(int i=0; i<n; i++){
        cin>>item[i].weight;
    }
    for(int i=0; i<n; i++){
        item[i].price_per_weight = item[i].value/item[i].weight;
        //cout<<item[i].price_per_weight<<endl;
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++)
        {
            if(item[i].price_per_weight < item[j].price_per_weight)
            {

                temp = item[i];
                item[i] = item[j];
                item[j] = temp ;
            }
        }
    }
    double currentweight = 0.0;
    double totalprofit = 0.0;
    for(int i=0; i<n; i++){
        if(currentweight + item[i].weight <= w){

            currentweight  += item[i].weight ;
            totalprofit += item[i].value;
        }
        else{

            double remain = w - currentweight;
            totalprofit += item[i].value*(remain/item[i].weight);
            break;

        }

    }
    cout<<totalprofit<<endl;

}

