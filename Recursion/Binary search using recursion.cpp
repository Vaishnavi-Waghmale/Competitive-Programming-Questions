bool binarySearch(int *arr, int s, int e, int k){
  
  if(s>e)
      return false;
  
  int mid = s+(e-s)/2;
  
  if(arr[mid] < k){
    return binarySearch(arr, mid+1, e, k);
  }
  
  else{
    return binarySearch(arr, s, mid-1, k);
  }
}
  
