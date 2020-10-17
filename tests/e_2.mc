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
int N;
int i;
int flag;
flag=1;
for(i=2;i*i<N;i=i+1){
    if(N%i==0) {
        flag=0;
    }
    else{
        flag=1;
    }
}
flag=checkprime(N);
return 0;
}
