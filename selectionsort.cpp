

// Selection sort is an effective and efficient sort algorithm based on comparison operations. It adds one element in each iteration. 
// You need to select the smallest element in the array and move it to the beginning of the array by swapping with the front element

//it is unstable algorithim

#include<vector>
using namespace std;
void selectionSort(vector<int>& arr, int n)
{  
   for(int i =0 ; i< n-1 ; i++){

       int min = i;

       for(int j =i+1 ; j<n ;j++){

           if(arr[j] < arr[min]){
               min = j;
               
           }
       }
       swap(arr[min] , arr[i]);
   }

}
