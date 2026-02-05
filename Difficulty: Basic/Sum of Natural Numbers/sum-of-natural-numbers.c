
int findSum(int x) {
    if(x==0) 
        return 0;
    return x+findSum(x-1);
     
}
