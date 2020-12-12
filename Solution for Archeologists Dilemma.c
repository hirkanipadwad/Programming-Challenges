#include <stdio.h>
#include<math.h>
int countDigits(int n){
    int counter=0;
    while(n>0){
        counter++;
        n/=10;
    }
    return counter;
}
int firstNDigitsOf(int cc,int n){
    int nod=countDigits(n);
    return(n/pow(10,nod-cc));
}
int minDig(int n){
    return n*2+1;
}
void computeNearestPowerOfTwo(int N){
    int nod=0,mindig=0,powerVal=0,i,j;
    int fd[11]={-1,0,4,7,10,14,17,20,24,27,31};
    nod=countDigits(N);
    mindig=minDig(nod);
    int p=fd[mindig];
    for(j=p;j<32;j++){
        powerVal=pow(2,j);
        if(firstNDigitsOf(nod,powerVal)==N){
            break;
        }    
        p++;
    }
    if(j>31)
        printf("No power of 2\n");
    else
        printf("%d\n",j);
}
int main(){
    int n[10],count=0,i=0;
    while(scanf("%d",&n[i])!=0){
        count++;
        i++;
    }    
    for(int i=0;i<count;i++)
        computeNearestPowerOfTwo(n[i]);
    return 0;    
}
