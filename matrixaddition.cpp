#include<iostream>
using namespace std;
int main()
{
    int mat1[3][3],mat2[3][3],mat3[3][3];
    cout<<"Enter the value of first matrix"<<endl;
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
            cin>>mat1[i][j];
    }
      cout<<"Enter the value of second  matrix"<<endl;
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
            cin>>mat2[i][j];
    }
    cout<<"Addition of two matrix"<<endl;

    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
       mat3[i][j]=mat1[i][j]+mat2[i][j];
    }

    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
           cout<<mat3[i][j]<<endl;
    }

    return 0;

}
