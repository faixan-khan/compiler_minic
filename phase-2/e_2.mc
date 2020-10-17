int checkprime(int N){
    int i;
    int flag;
    flag = 1;
    for(i=2;i*i<N;i=i+1){
    if(N%i==0){
        flag=0;
        }
    }
    return flag;
}
int main(){
int N;
scan(N);
int i;
int flag;
flag=1;
for(i=2;i*i<N;i=i+1){
    if(N%i==0) {
        flag=0;
    }
}
flag=checkprime(N);
if(flag==0){
    print(NotPrime);
}
else{
    print (NotPrime);
}
return 0;
}