#include <stdio.h>

int main(){
    int D, row[10], col[10], SN, SC;
    char M[1000000];
    scanf("%d",&D);
    for(int i = 0; i < D; i++){
        scanf("%d %d", &row[i],&col[i]);
    }
    for(int i = 0; i < D; i++){
        scanf("%d %[^\n]s", &SN, M);
        int j=0;
        while(M[j]!='\0'){
            SC = M[j];
            if(SN >=26){
                    SN-=26;
                }

            if(SC >= 48 && SC <= 57){
                j++;
                continue;
            }
            else if(SC == 32){
                j++;
                continue;
            }
            if(SC <= 90 && SC >= 65){
                SC += SN;

                if(SC > 90 || SC < 65){
                    SC -= 26;
                }
                M[j]=(char)(SC);
                j++;
                }
            else if(SC <= 122 && SC >= 97){
               SC += SN;

                if(SC > 122 || SC < 97){
                    SC -= 26;
                }
                M[j]=(char)(SC);
                j++;
                }
        }
        printf("\n%s", M);
    }
    for(int i=0; i<D; i++){

    }
    printf("\n");
    for(int i=0; i<D; i++){
        for(int j=0; j<row[i]; j++){
            for(int k=0; k<col[i]; k++){
                if (k == j+1){
                    printf(" ");
                }
                else{
                    printf("*");
                }
            }
            printf("\n");
        }
        if(D-i > 1){
            printf("\n");
        }
    }
    printf("\n");

}
