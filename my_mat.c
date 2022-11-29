#include<stdio.h>
#include<math.h>
#define SIZE 10

int mat[SIZE][SIZE];

int min(int a, int b){
    if(a<=b){
        return a;
    }
    else return b;
}

void minPath(){
    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            if((!(i==j)) && (mat[i][j]==0)){
        mat[i][j]=pow(2,16);
            }
        }
    } 

    for(int k=0; k<SIZE; k++){
        for(int i=0; i<SIZE; i++){
            for(int j=0; j<SIZE; j++){
                mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
            }
        }
    }

    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            if(mat[i][j] >= pow(2,16)){
                mat[i][j]=0;
            }
        }
    }

    
    }

void prog_1(){

for(int i=0; i<SIZE; i++){
    for (int j=0; j<SIZE; j++){
        scanf("%d",&mat[i][j]);
    }
}
minPath();

}


void prog_2(){

    int i,j;
    scanf("%d%d",&i,&j);

    if(i==j || mat[i][j]==0 ){
        printf("False\n");
    }
    else{
        printf("True\n");
    }
}



void prog_3(){

    int a,b;
    scanf("%d%d",&a,&b);

    if(a==b || mat[a][b]==0){
        printf("-1\n");
        
    }
    else {

         printf("%d\n",mat[a][b]);
}

}
