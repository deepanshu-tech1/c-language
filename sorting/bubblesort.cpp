#include<iostream>
using namespace std;

int bubblesort(int arr[],int n){
    int i,j;
    for(i=1;i<n;i++){
        bool swaped = false ;
        for(j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped = true;
                
            }
        }
        if(swaped = false){
            break;
        }
    }
}
int main()
{
    int n, i ,arr[100];

    cout<<"enter the number of element"<<endl;
    cin>>n;
 cout<<"   enter the value of elements" ;
    for(i=0;i<n;i++){
        cin>>arr[i];

    }


    // call the bubblw sort function 

    bubblesort(arr,n);


    // print the sorted array
   cout<<"the sorted array are";

    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0 ;

}