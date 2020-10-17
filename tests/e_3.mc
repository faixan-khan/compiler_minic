int checkprime(int N){
    int i;
    int flag;
    flag = 1;
    for(i=2;i*i<N;i=i+1){
    if(N%i==0){
        flag=0;
    }
    else{
        flag=1;
        }
    }
    return flag;
}
int main(){
    int N,sum,i;
    int flag;
    sum=0;
    for(i=2;i<N;i=i+1){
        flag=checkprime(i);
        if(flag==1){
            sum=(sum+i);
        }
        else{
            sum=sum;
        }
    }
    return 0;
}
