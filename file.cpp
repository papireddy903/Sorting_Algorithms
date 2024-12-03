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

void merge(vector<int> &arr, int low, int mid, int high){
   int left = low;
   int right = mid+1;
   vector<int> temp;

   while (left <= mid && right <= high){
      if (arr[left] <= arr[right]){
         temp.push_back(arr[left]);
         left++;
      }
      else{
         temp.push_back(arr[right]);
         right++;
      }

   }

   while (left<=mid){
      temp.push_back(arr[left++]);
   }

   while (right<=high){
      temp.push_back(arr[right++]);
   }

   for (int i = low;i<=high;i++){
      arr[i] = temp[i-low];
   }

}

void mergesort(vector<int> &a, int low, int high){
   if (low >= high){
      return;
   }

   int mid = low + (high - low)/2;

   mergesort(a, low, mid);
   mergesort(a, mid+1, high);
   merge(a, low, mid, high);

}


int partition(vector<int> &arr, int low, int high){
   int i = low;
   int j = high;
   int pivot = arr[low];

   while (i<j){
      while (arr[i] <= pivot && i<=high-1){
         i++;
      }

      while (arr[j] > pivot && j>=low+1){
         j--;
      }

      if (i<j){
         swap(arr[i], arr[j]);
      }

   }
   swap(arr[low], arr[j]);
   return j;
}

void quicksort(vector<int> &a, int low, int high){
   if (low < high){
      int p = partition(a, low, high);
      quicksort(a, low, p-1);
      quicksort(a, p+1, high);
   }
}

int main() {
   vector<int> a = {9,3,2,1,5,4,7};
   int n = 7;

   // bubblesort(a,n);
   // selectionsort(a,n);
   // insertionsort(a,n);
   // mergesort(a,0,n-1);
   // quicksort(a,0,n-1);

   printVector(a,n);
   

   
}

