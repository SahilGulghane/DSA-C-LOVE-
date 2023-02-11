//sertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. 
// The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part


#include <vector>
#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    for(int i = 1; i<n ; i++){
          
          int temp = arr[i];
          int j = i-1;
          while(j>=0){
              if(arr[j]>temp){
                  arr[j+1] = arr[j];
                  j--;
              }
              else{
                  break;
              }
              arr[j+1] = temp;
          }
          

    }
}
