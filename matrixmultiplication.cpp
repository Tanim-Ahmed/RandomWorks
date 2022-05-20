#include<iostream>
using namespace std;
int main()
{
    int mat1[5][5],mat2[5][5],mat3[5][5],c1,r1,c2,r2;
    cout<<"For first matrix col and row"<<endl;
    cin>>c1>>r1;
      cout<<"For second matrix col and row"<<endl;
    cin>>c2>>r2;
    if(r1!=c2)
    {
        cout<<"Can't be multiplied"<<endl;
    }
    cout<<"First matrix input"<<endl;
    for(int i = 0;i<c1;i++)
    {
        for(int j = 0;j<r1;j++)
            cin>>mat1[i][j];

    }
       cout<<"Second matrix input"<<endl;
    for(int i = 0;i<c2;i++)
    {
        for(int j = 0;j<r2;j++)
            cin>>mat2[i][j];

    }

    for(int i = 0;i<c1;i++)
    {
        for(int j = 0;j<r2;j++)
        {
            mat3[i][j]=0;
            for(int k = 0;k<c2;k++)
            {
                mat3[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }

    for(int i = 0;i<c1;i++)
    {
        for(int j = 0;j<r2;j++)
            cout<<mat3[i][j]<<endl;
        cout<<endl;
    }
    return 0;


}
