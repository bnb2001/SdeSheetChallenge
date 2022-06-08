/*Set Matrix zero*/
#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &mat)
{
	// Write your code here.
    int n=mat.size(),m=mat[0].size();
    bool firstRow=false,firstCol=false;
    
    for(int i=0;i<n;i++)
    {
        if(mat[i][0]==0)
        {
            firstCol=true;
            break;
        }
    }
    for(int i=0;i<m;i++)
    {
        if(mat[0][i]==0)
        {
            firstRow=true;
            break;
        }
    }
    
    
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(mat[i][j]==0)
                mat[0][j]=0,mat[i][0]=0;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(i!=0&&mat[i][0]==0)
        {
            for(int j=0;j<m;j++)
                mat[i][j]=0;
        }
    }
    
    for(int i=0;i<m;i++)
    {
        if(i!=0&&mat[0][i]==0)
        {
            for(int j=0;j<n;j++)
                mat[j][i]=0;
        }
    }
    
    if(firstRow)
    {
        for(int i=0;i<m;i++)
            mat[0][i]=0;
    }
    
    if(firstCol)
    {
        for(int i=0;i<n;i++)
            mat[i][0]=0;
    }
}