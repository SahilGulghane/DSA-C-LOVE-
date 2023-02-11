// Bubble sort is a type of sorting algorithm you can use to arrange a set of values in ascending order. 
// If you want, you can also implement bubble sort to sort the values in descending order.
// A real-world example of a bubble sort algorithm is how the contact list on your phone is sorted in alphabetical order


#include<vector>
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i<n; i++) {
        //for round 1 to n-1
        bool swapped = false;
        
        for(int j =0; j<n-i; j++) {
            
            //process element till n-i th index
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
            
        }
        
        if(swapped == false) {
            //already sorted
            break;
        }
           
    }
}
