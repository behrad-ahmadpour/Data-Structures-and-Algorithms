#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void dfs(int m,int n ,int x[m][n],int i,int j){
        x[i][j]=2;
        if(i-1>=0 && x[i-1][j]==0)
            dfs(m,n,x,i-1,j);
        if(j-1>=0 && x[i][j-1]==0 )
            dfs(m,n,x,i,j-1);
        if(i+1<m && x[i+1][j]==0 )
            dfs(m,n,x,i+1,j);
        if(j+1<n && x[i][j+1]==0 )
            dfs(m,n,x,i,j+1);
        return ;
    }
int main()
{
    srand(time(NULL));
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    int x[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            x[i][j]=rand()%2;
        }
    }
    x[0][0]=0;
    for(i=0;i<m;i++){
        for(j=0;j<n-1;j++){
            printf("%d",x[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    dfs(m,n,x,0,0);
    for(i=0;i<m;i++){
        for(j=0;j<n-1;j++){
            printf("%d",x[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(x[i][j]==2)
                printf("i=%d  j=%d\n",i,j);
        }
    }
    return 0;
}
