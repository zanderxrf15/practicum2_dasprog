#include<stdio.h>

int main(){
    int digits, value, increment=0, s;
    char number[101]={0}, winlose[1];
    char quote[1]="!";
    s=quote[0];
    s+=1;
    quote[0]=(char)(s);
    scanf("%d %s %c", &digits, &number, &winlose);
    if(winlose[0]=='L'){
        printf("Lose! you're no longer a quadrillionaire now :");
        printf("%c(", quote[0]);
        return 0;
    }
    else if(winlose[0]=='W'){
            printf("Win!\nPrize: ");
        for(int i=digits-1; i>=0;i--){
            value =(int)('0'-number[i]) *(-1);
            value*=2;
            value+=increment;
            increment=(value)/10;
            value%=10;
            number[i]=value+'0';
        }
    }
    else{
        printf("Jackpot!\nPrize: ");
        for(int i=digits-1; i>=0;i--){
           value =(int)('0'-number[i]) *(-1);
           value*=5;
           value+=increment;
            increment=(value)/10;
            value%=10;
            number[i]=value+'0';
        }
    }
    if(increment!=0){
        printf("$%d%s", increment,number);
    }
    else{
        printf("$%s", number);
    }
}
