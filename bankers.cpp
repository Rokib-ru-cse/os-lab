#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k;
    n =5;
    m=3;

    int alloc[n][m] = {
    {0,1,0},
    {2,0,0},
    {3,0,2},
    {2,1,1},
    {0,0,2}
    };

    int maxx[n][m] = {
    { 7, 5, 3 },
    { 3, 2, 2 },
    { 9, 0, 2 },
    {2, 2, 2 },
    { 4, 3, 3 } };

    int avail[m] = {3,3,2};
    int finis[n];
    int work[m] = {3,3,2};
    int result[n];
    int resultid=0;
    for(int i=0;i<n;i++)
    {
        finis[i]=0;

    }
    int need[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            need[i][j]=maxx[i][j]-alloc[i][j];
        }
    }

    for(int x=0;x<5;x++)
    {
        for(int i=0;i<n;i++)
        {

            if(finis[i]==0)
            {
                int flag = 0;
                for(int k=0;k<m;k++)
                {
                    if(need[i][k]>work[k])
                    {
                        flag=1;
                        break;
                    }

                }

                if(flag==0)
                {
                    result[resultid++] = i;
                    finis[i] = 1;
                    for(int y=0;y<m;y++)
                    {
                        work[y]=work[y]+alloc[i][y];
                    }

                }
            }

        }


    }
    printf("Following is the SAFE Sequence\n");
    for (i = 0; i < n - 1; i++)
        printf(" P%d ->", result[i]);
    printf(" P%d", result[n - 1]);





    return 0;
}
