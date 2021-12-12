#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double** compute_p(char msa[][13],int nrow,int ncol)
{
    int i=0,j=0;
    int k;
    int p[4][4]={0};

    for(j=0;j<ncol;j++){
        for(i=0;i<nrow;i++){
            for(k=i+1;k<nrow;k++){
                p[msa[i][j]-'a'][msa[i][k]-'a']++;
            }
        }
    }
    //对称的转化到一边
    for(i=0;i<4;i++){
        for(j=0;j<i;j++){
            p[i][j]+=p[j][i];
            p[j][i]=0;
        }
    }
    //计算总数
    double sum=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            sum+=p[i][j];
        }
    }
    double **pr=malloc(sizeof(double*)*4);
    for(i=0;i<4;i++)pr[i]=malloc(sizeof(double)*4);
    //初始化
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            pr[i][j]=0;
        }
    }
    //求比例
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            pr[i][j]=p[i][j]/sum;
        }
    }
    return pr;
}


double** compute_e(char msa[][13],int nrow,int ncol)
{
    int num[4]={0};
    int i,j;
    for(i=0;i<nrow;i++){
        for(j=0;j<ncol;j++){
            num[msa[i][j]-'a']++;
        }
    }
    double **e=malloc(sizeof(double*)*4);
    for(i=0;i<4;i++)e[i]=malloc(sizeof(double)*4);
    //初始化
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            e[i][j]=0;
        }
    }

    double sum=nrow*ncol;
    for(i=0;i<4;i++){
        for(j=0;j<=i;j++){
            if(j==i)e[i][j]=(num[i]/sum)*(num[j]/sum);
            else e[i][j]=(num[i]/sum)*(num[j]/sum)*2;
        }
    }
    return e;
}

int** compute_blusom(char msa[][13],int nrow,int ncol)
{
    int i,j;
    double **p=compute_p(msa,nrow,ncol);
    double **e=compute_e(msa,nrow,ncol);
    int **blusom=malloc(sizeof(int*)*4);
    for(i=0;i<4;i++)blusom[i]=malloc(sizeof(int)*4);
    for(i=0;i<4;i++){
        for(j=0;j<=i;j++){
            blusom[i][j]=2*log(p[i][j]/e[i][j]+0.001)/log(2)+0.5;
        }
    }
    for(i=0;i<4;i++){
        free(p[i]);
        free(e[i]);
    }
    free(p);
    free(e);
    return blusom;
}



int main()
{
    char msa[12][13]={{"ddddcbcdcabc"},{"ddddccbacaac"}, {"ddddbbcdbdac"},{"ddddcacdcbbb"}, {"ddddcacdbabc"},{"ddddcbbdcdbc"}, {"ddddcccdaabc"},{"ddddbacdcbbc"}, {"ddddcacaaaac"},{"ddddcbcdcdbc"}, {"ddddcacdcabb"},{"ddddcacacbbc"}};
    int **blusom=compute_blusom(msa,12,12);
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<=i;j++){
            if(j==i)printf("%d\n",blusom[i][j]);
            else printf("%d\t",blusom[i][j]);
        }
    }
    for(i=0;i<4;i++){
        free(blusom[i]);
    }
    free(blusom);
    return 0;
}