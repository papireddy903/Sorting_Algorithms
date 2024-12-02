#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> &arr, int n){
   for (auto it : arr){
      cout << it << " ";
   }
   cout << endl;
}

void bubblesort(vector<int> &arr, int n){

   // 3 1 2 4 5 7 9 
   for (int i = 0;i<n-1;i++){
      int Isswap = false;

      for (int j = 0;j<n-i-1;j++){
         if (arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
            Isswap = true;
         }
      }
      if (Isswap == false){
         break;
      }
   }

   printVector(arr, n);

}

void selectionsort(vector<int> &arr, int n){
   // 3 1 2 4 5 7 9 


   for (int i = 0;i<n-1;i++){
      int mini = i;
      for (int j = i+1;j<n;j++){
         if (arr[j] < arr[mini]){
            mini = j;

         } 
      }

      if (mini!=i){
         swap(arr[mini], arr[i]);
      }
   }
   printVector(arr, n);

}

void insertionsort(vector<int> &arr, int n){
   
   for (int i = 1;i<n;i++){
      int key = arr[i];
      int j = i-1;

      while (j>=0 && arr[j] > key){
         arr[j+1] = arr[j];
         j--;
      }

      arr[j+1] = key;
   }
   printVector(arr,n);
}


int main() {
   vector<int> a = {9,3,2,1,5,4,7};
   int n = 7;

   // bubblesort(a,n);
   // selectionsort(a,n);
   // insertionsort(a,n);
   

   
}

