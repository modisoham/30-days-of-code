//Find second largest element in a given array of integers
#include<iostream>
using namespace std;
void second_largest(int number[], int arr_size)
  {
   int i, largest_elem, next_elem;
 
    if (arr_size < 2)
    {
        cout<< " Invalid Input ";
        return;
    }
 
    largest_elem = next_elem = INT_MIN;
    for (i = 0; i < arr_size ; i ++)
    {
  
        if (number[i] > largest_elem)
        {
            next_elem = largest_elem;
            largest_elem = nums[i];
        }
 

        else if (number[i] > next_elem && number[i] != largest_elem)
        {
            next_elem = number[i];
        }
    }
    if (next_elem == INT_MIN)
     {
        cout<< "No second largest element";
     }
    else
     { 
        cout<< "\nThe second largest element is: " <<next_elem;
     }
}



int main()
{
    int number[] = {17, 22, 90, 35, 19, 29, 65, 76};
    int n = sizeof(number)/sizeof(number[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << number[i] <<" ";
    second_largest(number, n);
    return 0;
}
