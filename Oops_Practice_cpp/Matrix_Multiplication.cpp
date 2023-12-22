#include<iostream>
using namespace std;
class Matrix
{
 public:int row,col,arr[100][100];
        Matrix(){}
        Matrix(int r,int c)
        {
          row=r;
          col=c;
          for(int i=0;i<row;i++)
          {
            for(int j=0;j<col;j++)
              {
                cin>>arr[i][j];
              }
          }
        }
        Matrix operator+(Matrix &m2)
        {
          Matrix res;
          res.row=row;
          res.col=col;
          for(int i=0;i<row;i++)
            {
              for(int j=0;j<col;j++)
                {
                  for(int k=0;k<col;k++)
                    {
                   res.arr[i][j]=res.arr[i][j]+arr[i][k]*m2.arr[k][j];
                    }
                }
            }
          return res;
        }
         void display()
        {
          for(int i=0;i<row;i++)
            {
              for(int j=0;j<col;j++)
                {
                  cout<<arr[i][j]<<" ";
                }
              cout<<endl;
            }
        }
};
int main()
{
  int r1,c1;
  cout<<"Enter row and column:";
  cin>>r1>>c1;
  Matrix m1(r1,c1);
  Matrix m2(r1,c1);
  Matrix m3=m1+m2;
  m3.display();
}
