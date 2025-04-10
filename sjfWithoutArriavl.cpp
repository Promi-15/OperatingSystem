#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter Process " << " ";
    cin >> n;
    int BT[n], WT[n], TAT[n], completion[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Burst " << " ";
        cin >> BT[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(BT[i] > BT[j]){
                swap(BT[i], BT[j]);
            }
        }
    }

    int currentT = 0, tw = 0, tt = 0;
    for (int i = 0; i < n; i++)
    {
        if(currentT < BT[i]){
            currentT = BT[i];
        }
        completion[i] = currentT + BT[i];
        currentT = completion[i];

        TAT[i] = completion[i];
        WT[i] = TAT[i] - BT[i];

        tw = tw + WT[i];
        tt = tt + TAT[i];
    }

    int avgT = tt / n;
    int avgW = tw / n;

    cout << "\nProcess\t\t\tBurst\t\t\tWaiting\t\t\tTurnAround\n";

    for (int i = 0; i < n; i++)
    {
        cout << i << "\t\t\t" << BT[i] << "\t\t\t" << WT[i] << "\t\t\t" << TAT[i] << endl;
    }

    cout << "AvgT = " << avgT << endl;
    cout << "AvgW = " << avgW << endl;
    
}