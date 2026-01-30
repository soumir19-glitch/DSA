int majorityElement(int arr[], int n) {
    // code here
     int c=0,count=0,ans;
    for(int i=0;i<n;i++){
        if(c==0){
            c++;
            ans=arr[i];
        }
        else if(arr[i]==ans)
            c++;
        else
            c--;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ans)
            count++;
    }
    if(count>(n/2))
        return ans;
    else 
        return -1;
}
