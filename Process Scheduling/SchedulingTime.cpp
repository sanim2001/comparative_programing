#include<iostream>
using namespace std;


void findavgTime( int processes[], int n, int bt[]){
    int wt[n], tat[n], total_wt = 0, total_tat = 0;

    wt[0] = 0;
    for (int  i = 1; i < n ; i++ )
        wt[i] =  bt[i-1] + wt[i-1] ;

    for (int  i = 0; i < n ; i++)
        tat[i] = bt[i] + wt[i];

    cout << "Processes  "<< " Burst time  "
         << " Waiting time  " <<"\n";

    for (int  i=0; i<n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << "   " << i+1 << "\t\t" << bt[i] <<"\t    "
            << wt[i] <<"\t\t  "<<"\n";
    }

    cout << "Average waiting time = "
         << (float)total_wt / (float)n;
}

void fcfs(int processes[],int n,int burst_time[]){
    findavgTime(processes, n, burst_time);
}
int mat[10][6];
void arrangeArrival(int num, int mat[][6])
{
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            if (mat[j][1] > mat[j + 1][1]) {
                for (int k = 0; k < 5; k++) {
                    swap(mat[j][k], mat[j + 1][k]);
                }
            }
        }
    }
}

void completionTime(int num, int mat[][6])
{
    int temp, val;
    mat[0][3] = mat[0][1] + mat[0][2];
    mat[0][5] = mat[0][3] - mat[0][1];
    mat[0][4] = mat[0][5] - mat[0][2];

    for (int i = 1; i < num; i++) {
        temp = mat[i - 1][3];
        int low = mat[i][2];
        for (int j = i; j < num; j++) {
            if (temp >= mat[j][1] && low >= mat[j][2]) {
                low = mat[j][2];
                val = j;
            }
        }
        mat[val][3] = temp + mat[val][2];
        mat[val][5] = mat[val][3] - mat[val][1];
        mat[val][4] = mat[val][5] - mat[val][2];
        for (int k = 0; k < 6; k++) {
            swap(mat[val][k], mat[i][k]);
        }

    }
}

int sjf_non_pre(int processes[], int n, int brust_time[]){

        int temp,tw=0,tat=0;

        for(int i=0;i<n;i++){
            mat[i][0] = processes[i];
        }
        for(int i=0;i<n;i++){
            cout << "Enter Arrival Time of process "<<i+1<<" : ";
            cin>> mat[i][1];
        }
        for(int i=0;i<n;i++){
            mat[i][2] = brust_time[i];
        }


        arrangeArrival(n, mat);
        completionTime(n, mat);
        cout << "\nFinal Scheduling For All: \n";
        cout << "Process ID\tArrival Time\tBurst Time\tWaiting "
                "Time\t"<<"\n";
        for (int i = 0; i < n; i++) {
            cout << mat[i][0] << "\t\t" << mat[i][1] << "\t\t"
                 << mat[i][2] << "\t\t" << mat[i][4] << "\t\t"
                 << "\n";
        }


        for(int i=0;i<n;i++){
            tw += mat[i][4];
        }

        for(int i=0;i<n;i++){
            tat += mat[i][5];
        }
        cout << "Average waiting time = "
         << (float)tw / (float)n;
}
int main(){

    cout<<"=========================================\n";
    cout<<"==========Process Scheduling=============\n";
    cout<<"=========================================\n\n";
    int n,var,key;
    cout<<"Please Enter the number of processes: ";
    cin>>n;
    int processes[n];
    int burst_time[n];

    for(int i=0;i<n;i++){
        processes[i] = i+1;
    }
    for(int i=0;i<n;i++){
        cout<<"Brust time process "<<i+1<< " : ";
        cin>>var;
        burst_time[i] = var;
    }
    int s=5;

    while(s){
        cout<<"\nChoose the Option: \n"<<"\n";
        cout<<"1. FCFS"<<"\n";
        cout<<"2. SJF Non-Preemptive"<<"\n";
        cout<<"Press any to exit"<<"\n";

        cin>>key;
        if(key==1){
            fcfs(processes,n,burst_time);
        }
        else if(key==2){
            sjf_non_pre(processes,n,burst_time);
        }
        else{
            exit(0);
        }
        s--;
    }
}
