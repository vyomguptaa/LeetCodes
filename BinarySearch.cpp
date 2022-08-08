int binary(int arr[],int start,int end,int key){

    if(start>end)
        return -1;
    int mid=start+((end-start)/2);
    if(arr[mid]<key){
        return binary(arr,mid+1,end,key);
    }
    if(arr[mid]>key){
        return binary(arr,start,mid-1,key);
        
    }
    if(arr[mid]==key){
        return mid;
    }

}

int binarySearch(int *input, int n, int val)
{
    int ans=binary(input,0,n-1,val);
    //Write your code here
}
