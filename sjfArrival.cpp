#include <bits/stdc++.h>
using namespace std;
struct Process
{
    int id;
    int arrival;
    int burst;
    int waiting;
    int turnaround;
    int completion;
};

int main()
{
    int n;
    cout << "Enter Process " << " ";
    cin >> n;

    vector<Process> process(n);

    for (intcounti = 0; i < n; i++)
    {
        cout << "Enter arrival and burst " << " ";
        process[i].id = i + 1;
        cin >> process[i].arrival >> process[i].burst;
    }
    int cT = 0, tw = 0, tt = 0;
    for (int count = 0; count < n; count++)
    {

        int shortestIndex = -1;

        for (int i = 0; i < n; i++)
        {
            if (process[i].arrival <= cT)
            {
                if (shortestIndex == -1 || process[i].burst < process[shortestIndex].burst)
                {
                    shortestIndex = i;
                }
            }
        }

        if(shortestIndex != -1){
            cT = cT + process[shortestIndex].burst;
            process[shortestIndex].completion = cT;
            process[shortestIndex].turnaround = process[shortestIndex].completion - process[shortestIndex].arrival;
            process[shortestIndex].waiting = process[shortestIndex].turnaround - process[shortestIndex].burst;
        }

    }
}