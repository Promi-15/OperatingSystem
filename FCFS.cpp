#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , totalTurnAround = 0 , totalWaiting = 0;
    cout << "Enter Process : " << " ";
    cin >> n;
    int BT[n], WT[n], TAT[n];
   
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Burst Time of Process : " << i <<  " ";
        cin >> BT[i];
        if(i > 0){
            WT[i] = WT[i - 1] + BT[i - 1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        TAT[i] = WT[i] + BT[i];
    }

    cout << "\nProcess\t\t\tBurst Time\t\t\tWaiting time\t\t\tTurn Around\n";
    for (int i = 0; i < n; i++)
    {
        cout << i << "\t\t\t" << BT[i] << "\t\t\t\t\t" << WT[i] << "\t\t\t" << TAT[i] << endl;
    
        totalTurnAround = totalTurnAround + TAT[i];
        totalWaiting = totalWaiting + WT[i];
    }

    int avgWaiting = totalWaiting / n;
    int avgTurnAround = totalTurnAround / n;

    cout << "avg waiting " << avgWaiting << "and avg turn around" << avgTurnAround;
}