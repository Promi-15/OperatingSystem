// // FCFS WITHOUT ARRIVAL

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int n , tw =0 , tt = 0;
// //     cout << "Enter Process" << " ";
// //     cin >> n;
// //     int BT[n], WT[n], TAT[n];
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout << "Enter Burst of process " << i << " : ";
// //         cin >> BT[i];
// //         if(i > 0){
// //             WT[i] = WT[i - 1] + BT[i - 1];
// //             tw = tw + WT[i];
// //         }
// //     }
// //     for (int i = 0; i < n; i++)
// //     {
// //         TAT[i] = WT[i] + BT[i];
// //         tt = tt + TAT[i];
// //     }

// //     int avgWait = tw / n;
// //     int avgT = tt / n;
// //     cout << "\nProcess\t\t\tBurst\t\t\tWaiting\t\t\tTurnAround\n";

// //     for (int i = 0; i < n; i++)
// //     {
// //         cout << i << "\t\t\t" << BT[i] << "\t\t\t" << WT[i] << "\t\t\t" << TAT[i] << endl;
// //     }

// //     cout << "Avg Waiting = " << avgWait << endl;
// //     cout << "Avg TurnAround = " << avgT << endl;
// // }

// // FCFS WITH ARRIVAL

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int n;
// //     cout << "Enter process " << " ";
// //     cin >> n;

// //     int A[n], BT[n], WT[n], TAT[n], completion[n];

// //     for (int i = 0; i < n; i++)
// //     {
// //         cout << "Enter arrival and burst" << " ";
// //         cin >> A[i] >> BT[i];

// //     }

// //     for (int i = 0; i < n - 1; i++)
// //     {
// //        for (int j = i+1; j < n; j++)
// //        {
// //         if(A[i] > A[j]){
// //             swap(A[i], A[j]);
// //             swap(BT[i], BT[j]);
// //         }
// //        }

// //     }
// //     int ct = 0, tw = 0, tt = 0;
// //     for (int i = 0; i < n; i++)
// //     {
// //        if(ct < A[i]){
// //            ct = A[i];
// //        }
// //        completion[i] = ct + BT[i];
// //        ct = completion[i];

// //        TAT[i] = completion[i] - A[i];
// //        WT[i] = TAT[i] - BT[i];

// //        tw = tw + WT[i];
// //        tt = tt + TAT[i];

// //     }

// //     cout << "\nProcess\t\t\tArrival\t\t\tBurst\t\t\tWaiting\t\t\tTurnAround\n";
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout << i << "\t\t\t" << A[i] << "\t\t\t" << BT[i] << "\t\t\t" << WT[i] << "\t\t\t" << TAT[i] << endl;
// //     }

// // // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cout << "Enter Process" << " ";
// //     cin >> n;
// //     int BT[n], WT[n], TAT[n], completion[n];
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout << "Enter Burst " << i << ":";
// //         cin >> BT[i];
// //     }
// //     for (int i = 0; i < n - 1; i++)
// //     {
// //         for (int j = 0; j < n; j++)
// //         {
// //             if (BT[i] > BT[j])
// //             {
// //                 swap(BT[i], BT[j]);
// //             }
// //         }
// //     }
// //     int ct = 0, tw = 0, tt = 0;
// //     for (int i = 0; i < n; i++)
// //     {
// //        if(ct < BT[i]){
// //            ct = BT[i];
// //        }
// //        completion[i] = ct + BT[i];
// //        ct = completion[i];

// //        TAT[i] = completion[i];
// //        WT[i] = TAT[i] - BT[i];

// //        tw = tw + WT[i];
// //        tt = tt + TAT[i];

// //     }

// //     int avgT = tt / n;
// //     int avgW = tw / n;
// //     cout << "\nProcess\t\t\tBurst\t\t\tWaiting\t\t\tTurnAround\n";
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout << i << "\t\t\t" << BT[i] << "\t\t\t" << WT[i] << "\t\t\t" << TAT[i] << endl;
// //     }

// // }

// #include<bits/stdc++.h>
// using namespace std;
// struct Process{
//     int id;
//     int arrival;
//     int burst;
//     int waiting;
//     int turnAround;
//     int completion;
// };

// int main(){
//     int n;
//     cout << "Enter process" << " ";
//     cin >> n;
//     vector <Process> processes(n);

//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter arrival and burst of process " << i << ":";
//         processes[i].id = i + 1;
//         cin >> processes[i].arrival >> processes[i].burst;
//     }

//     int ct = 0, tt = 0, tw = 0;
//     for (int count = 0; count < n; count++)
//     {
//         int shortestIndex = -1;

//         for (int i = 0; i < n; i++)
//         {
//             if (processes[i].arrival <= ct){
//                 if(shortestIndex == 1 || processes[i].burst < processes[shortestIndex].burst){
//                     shortestIndex = i;
//                 }
//             }
//         }

//         if(shortestIndex != -1){
//             ct = ct + processes[shortestIndex].burst;
//             processes[shortestIndex].completion = ct;
//             processes[shortestIndex].turnAround = processes[shortestIndex].completion - processes[shortestIndex].arrival;
//             processes[shortestIndex].waiting = processes[shortestIndex].turnAround - processes[shortestIndex].burst;
//         }

//     }

// }

#include <bits/stdc++.h>
using namespace std;
struct Process
{
    int id;
    int arrival;
    int burst;
    int waiting;
    int turnAround;
    int completion;
};

int main()
{

    int n;
    cout << "Enter process " << " ";
    cin >> n;
    vector<Process> processes(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter arrival and burst " << " ";
        processes[i].id = i + 1;
        cin >> processes[i].arrival >> processes[i].burst;
    }
    int ct = 0, tw = 0, tt = 0;
    for (int count = 0; count < n; count++)
    {
        int shortestIndex = -1;
        for (int i = 0; i < n; i++)
        {
            if (processes[i].arrival <= ct)
            {
                if (shortestIndex == -1 || processes[i].burst < processes[shortestIndex].burst)
                {
                    shortestIndex = i;
                }
            }
        }


        if(shortestIndex != -1){
            ct = ct + processes[shortestIndex].burst;
            processes[shortestIndex].completion = ct;
            processes[shortestIndex].turnAround = processes[shortestIndex].completion - processes[shortestIndex].arrival;
            processes[shortestIndex].waiting = processes[shortestIndex].turnAround - processes[shortestIndex].burst;

            tw = tw + processes[shortestIndex].waiting;
            tt = tt + processes[shortestIndex].turnAround;
        }
    }

    cout << "\nProcess\t\t\tArrival\t\t\tBurst\t\t\tWaiting\t\t\tTurnAround\n";
    for (const auto& p : processes)
    {
        cout << p.id << "\t\t\t" << p.arrival << "\t\t\t" << p.burst << "\t\t\t" << p.waiting << "\t\t\t" << p.turnAround << endl;
    }
    
}