#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int currentTime = 0, tat = 0, twt = 0;
    cout << "Enter Process " << " ";
    cin >> n;
    int A[n], WT[n], BT[n], TA[n], Completion[n];
  for (int i = 0; i < n; i++)
  {
      cout << "Enter Arrival and Burst of process " << i << " ";
      cin >> A[i] >> BT[i];  
  }
  
  for (int i = 0; i < n-1; i++)
  {
   for (int j = i+1; j < n; j++)
   {
    if(A[i] > A[j]){
        swap(A[i], A[j]);
        swap(BT[i], BT[j]);
    }
   }
  }



  for (int i = 0; i < n; i++)
  {
      if(currentTime < A[i])
      currentTime = A[i];
  
      Completion[i] = currentTime + BT[i];
      currentTime = Completion[i];
  
      TA[i] = Completion[i] - A[i];
      WT[i] = TA[i] - BT[i];
  
      tat = tat + TA[i];
      twt = twt + WT[i];
  }
  
  int avgW = twt / n;
  int avgT = tat / n;

  cout << "\nProcess\t\t\tArrival\t\t\tBurst\t\t\tWaiting\t\t\tTurnAround\n";

  for (int i = 0; i < n; i++)
  {
      cout << i << "\t\t\t" << A[i] << "\t\t\t" << BT[i] << "\t\t\t" << WT[i] << "\t\t\t" << TA[i] << endl;
  }
  


}

