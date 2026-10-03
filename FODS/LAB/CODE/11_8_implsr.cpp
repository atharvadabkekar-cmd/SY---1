#include <iostream>
using namespace std;

int main(){
    int n , key;
    cout<<"Enter no. of elements:";
    cin>>n;

    int array[n];

    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    cout<<"Enter the element to search:";
    cin>>key;

    for(int i=0;i<n;i++){
       if (array[i]==key)
       {
        cout<<"Element found at position:" << i <<endl;
        return 0;

       }
        
    }

    cout<<"element not found"<<endl;
    return 0;

}