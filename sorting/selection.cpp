#include<iostream>
using namespace std;

int selectionsort(int arr[],int n){
    int i ,j,minidx,temp;
    for(i=0;i<n-1;i++){
        minidx = i;
   
        // find the index of the minimum value in the remaining array 

        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx=j;

            }

        }

        // swap the found minimum elemnt with the first element
     


          temp = arr[minidx];
          arr[minidx]=arr[i];
          arr[i] = temp;



    }

}

int main()
{
    int arr[100],n,i;
    cout<<"enter the number of elements";
    cin>>n;

    for(i=0;i<n;i++){
        cin>>arr[i];
    

    }

    //  call yhe function of the selection sort 

    selectionsort(arr,n);

    // print the sorted array 
  

    cout<<"the sorted array are"<<endl;
    for(i= 0 ;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}