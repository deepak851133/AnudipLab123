#include<iostream>
#include<vector>
using namespace std;
/*int binarySearch(vector<int>arr,int tar){
int st=0,end=arr.size()-1;
 while(st<=end){
    int mid=st+(end-st)/2;
    if(tar > arr[mid]){
        st=mid+1;//1st half
       } else if(tar < arr[mid]){
            end=mid-1;//2nd half
        }
        else{
            return mid;
        }
        
 }
  return -1;
}*/
int recSearch(int arr,int st,int end,int tar){
    if(st<=end){
        int mid= st+(end-st)/2;
        if(tar > arr [mid]){//2nd half
return recSearch( arr, tar,mid+1,end);
        }else if(st > arr [mid]){//1st half
return recSearch( arr,tar,mid-1,end);
    }else{
        return mid;
    }
    }
    return -1;
}
int main(){
    vector<int> arr1={-1,0,3,4,5,9,12};//odd
    int tar1=12;
    cout<<"Target value = "<<recSearch(arr1,tar1)<<endl;
        vector<int> arr2={-1,0,3,5,9,12};//even
    int tar2=0;
    cout<<"Target value = "<<recSearch(arr2,tar2)<<endl;
}
