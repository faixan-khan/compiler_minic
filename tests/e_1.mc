int power(int base , int exp) {
    int i , prod ;
    prod = 1 ;
    for(i=0;i<exp;i=i+1){
        prod = (prod*base) ;
    }
    return prod;
}
int main() {
    int i,N,k;
    int sum;
    sum=0;
for(i=1;i<=N;i=i+1){
    sum=sum+power(i,k);
}
return 0;
}
