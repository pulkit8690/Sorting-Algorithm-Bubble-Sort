#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{
    int m=arr[0];
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void print(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout << "Enter Size Of Array: ";
    cin >> n;
    int arr[n];
    cout << "Entering Elements Of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Before Sort: ";
    print(arr,n);
    cout<<endl;
    cout<<"After Sorting: ";
    bubble_sort(arr,n);
    print(arr,n);
    return 0;
}


// To illustrate the process, let's consider an array: [1, 10, 7, 6, 14, 9]. We'll apply the bubble sort algorithm to this array.

// Round 1:

// Compare 1 with 10. Since 1 is smaller, swap them. Array: [1, 10, 7, 6, 14, 9] -> [1, 7, 10, 6, 14, 9]
// Compare 10 with 7. Since 10 is greater, no swap needed.
// Compare 7 with 6. Since 7 is greater, swap them. Array: [1, 7, 10, 6, 14, 9] -> [1, 6, 10, 7, 14, 9]
// Compare 10 with 7. Since 10 is greater, no swap needed.
// Compare 7 with 14. Since 7 is smaller, no swap needed.
// Compare 14 with 9. Since 14 is greater, swap them. Array: [1, 6, 10, 7, 14, 9] -> [1, 6, 10, 7, 9, 14]
// After the first round, the largest element (14) is in its correct position at the end of the array.

// Round 2:

// Compare 1 with 6. Since 1 is smaller, no swap needed.
// Compare 6 with 10. Since 6 is smaller, no swap needed.
// Compare 10 with 7. Since 10 is greater, swap them. Array: [1, 6, 10, 7, 9, 14] -> [1, 6, 7, 10, 9, 14]
// Compare 10 with 9. Since 10 is greater, no swap needed.
// Compare 9 with 14. Since 9 is smaller, no swap needed.
// After the second round, the second largest element (10) is in its correct position.

// Round 3:

// Compare 1 with 6. Since 1 is smaller, no swap needed.
// Compare 6 with 7. Since 6 is smaller, no swap needed.
// Compare 7 with 10. Since 7 is smaller, no swap needed.
// Compare 10 with 9. Since 10 is greater, swap them. Array: [1, 6, 7, 10, 9, 14] -> [1, 6, 7, 9, 10, 14]
// After the third round, the third largest element (9) is in its correct position.

// Round 4:

// Compare 1 with 6. Since 1 is smaller, no swap needed.
// Compare 6 with 7. Since 6 is smaller, no swap needed.
// Compare 7 with 9. Since 7 is smaller, no swap needed.
// Compare 9 with 10. Since 9 is smaller, no swap needed.
// After the fourth round, the fourth largest element (7) is in its correct position.

// Round 5:

// Compare 1 with 6. Since 1 is smaller, no swap needed.
// Compare 6 with 7..


