#include <iostream>
using namespace std;

 void printarray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" " ;
    }
 }

 bool linearSearch(int arr[], int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
 }


 void CountZerosAndOnes(int arr[],int size){
    int zeros=0;
    int ones=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zeros++;
        }
        if (arr[i]==1){
            ones++;
        }
 }
     cout<<zeros<<endl;
     cout<<ones<<endl;
 }


 void extreampoint(int arr1[],int size){
    int left= 0;
    int right=size-1;
    
    while (left<=right)
    {
        if(left==right){
            cout<<arr1[left];
        }
        else{
            cout<<arr1[left]<<" ";
        cout<<arr1[right]<<" ";

        }
        
        left++;
        right--;
    }
    
 }



 void reverseArr(int arr2[], int size){
    int left=0;
    int right=size-1;

    while (left<=right)
    {
        swap(arr2[left],arr2[right]);
        left++;
        right--;
    }
    for(int i=0;i<size;i++){
        cout<<arr2[i]<<" ";
    }
    
 }





int main(){


    // reverse a array
    int arr2[5]={10,20,30,40,50};
    int size=5;

    reverseArr(arr2,size);

    // extream print
    // int arr1[7]={10,20,30,40,50,60,70};
    // int size=7;
    // extreampoint(arr1,size);




    
    //find zero and ones
    // int arr[15]={0,1,0,1,1,0,1,1,0,1,0,1,0,1,0};
    // int size=15;
    // CountZerosAndOnes(arr,size);

    
    // Array in function

    // int arr[5]={1,2,3,4,5};
    // int size=5;
    // int target=7;
    // bool ans = linearSearch(arr,size,target);

    // if(ans==true){
    //     cout<<"target found";
    // }
    // else{
    //     cout<<"not found";
    // }
    // printarray(arr,size);


    // // array creation
    // int ishwar[5];
    // char alphabet[26];
    // string names[30];
    // bool flages[2];
    // cout<<"Array has been created\n";

    // // To check bas address of arr
    // cout<<"To check address of array :"<<&flages<<"\n";
    // cout<<"To check address of array :"<<flages<<endl;

    // // To check size of a array

    // cout<<"Size of a array :"<<sizeof(ishwar)<<endl;
    // cout<<"Size of a array :"<<sizeof(alphabet)<<endl;

    // //To initialise a array

    // int aa[5]={1,2,3,4,5};
    // int bb[]={1,2,3,4,5};
    // int cc[5]={1,2};
    // int dd[2]={1,2,3,4,5};



    // int aar[5]={1,5,7,6,7};
    
    // cout<< aar[2]<<endl;
    // cout<< aar[0]<<endl;

    // for(int i=0;i<5;i++){
    //     cout<<aar[i];
    // }


    // int number[5];
    // int n=5;

    // for(int i=0;i<n;i++){
    //     cout<<"take input in an array";
    //     cin>>number[i];
    // }

    // for(int j=0;j<n;j++){
    //     cout<<"value : "<<number[j]<<endl;
    // }



    // int ten[10];
    // int n=10;
    // for (int i=0;i<n;i++){
    //     cout<<"enter the values ";
    //     cin>>ten[i];
    // }
    // for(int j=0;j<n;j++){
    //     cout<<"double values : "<<2*ten[j]<<endl;
    // }


    // find sum of array

    //    int arr[5];
    //    int n=5;
    //    int sum=0;
    //    for(int i=0;i<n;i++){
    //     cout<<"enter the values : ";
    //     cin>>arr[i];
    //    }
    //    for(int i=0;i<n;i++){
    //     sum=sum+arr[i];
        
    //    }
    //    cout<<sum<<" ";



       // linear search find target

    //    int arr[5]={1,5,3,4,9};
    //    int n=5;
    //    int target=2;
    //    bool flag=0; //not found

    //    for(int i=0;i<n;i++){
    //     if(arr[i]==target){
    //        flag=1; //found
    //        break;
    //     }
    //    }
    //    if(flag==1){
    //     cout<<"target found";
    //    }
    //    else{
    //     cout<<"not found";
    //    }


   
       return 0;

}