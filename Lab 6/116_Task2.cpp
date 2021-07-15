#include<bits/stdc++.h>

using namespace std;

class Matrix3D
{
private:
    double x[3][3];
public:
    Matrix3D(double c1, double c2, double c3, double c4, double c5, double c6, double c7, double c8, double c9)
    {
       x[0][0] = c1;
       x[0][1] = c2;
       x[0][2] = c3;

       x[1][0] = c4;
       x[1][1] = c5;
       x[1][2] = c6;

       x[2][0] = c7;
       x[2][1] = c8;
       x[2][2] = c9;
    };


    double det()
    {
        return x[0][0] * ((x[1][1] * x[2][2]) - (x[1][2] * x[2][1]))
        - x[0][1] * ((x[1][0] * x[2][2]) - (x[1][2] * x[2][0]))
        + x[0][2] * ((x[1][0] * x[2][1]) - (x[1][1] * x[2][0]));
    }

    Matrix3D inverse()
    {
        double inverted_mat[3][3];
        double det_max = det();

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                inverted_mat[i][j] = (x[(j + 1) % 3][(i + 1) % 3]
                             * x[(j + 2) % 3][(i + 2) % 3]
                             - x[(j + 1) % 3][(i + 2) % 3]
                             * x[(j + 2) % 3][(i + 1) % 3])
                             / det_max;
            }
        }
        return Matrix3D(inverted_mat[0][0], inverted_mat[0][1], inverted_mat[0][2],
                        inverted_mat[1][0], inverted_mat[1][1], inverted_mat[1][2],
                        inverted_mat[2][0], inverted_mat[2][1], inverted_mat[2][2]);
    }

    void view_matrix()
    {
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout<<x[i][j]<<"  ";
            }
            cout<<endl;
        }
    }

    Matrix3D operator +(Matrix3D obj)
    {
        Matrix3D temp(0, 0, 0, 0, 0, 0, 0, 0, 0);

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                temp.x[i][j] = x[i][j] + obj.x[i][j];
            }
        }

        return temp;
    }

    Matrix3D operator -(Matrix3D obj)
    {
        Matrix3D temp(0, 0, 0, 0, 0, 0, 0, 0, 0);

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                temp.x[i][j] = x[i][j] - obj.x[i][j];
            }
        }

        return temp;
    }

    Matrix3D operator *(Matrix3D obj)
    {
        Matrix3D temp(0, 0, 0, 0, 0, 0, 0, 0, 0);

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                temp.x[i][j] = 0;

                for(int k = 0; k < 3; k++)
                {
                    temp.x[i][j] += x[i][k] * obj.x[k][j];
                }
            }
        }

        return temp;
    }

    ~Matrix3D()
    {};

};


int main()
{
    Matrix3D obj(1, 2, 3, 0, 1, 4, 5, 6, 0), obj2(1, 1, 1, 1, 1, 1, 1, 1, 1), obj3(2, 2, 2, 2, 2, 2, 2, 2, 2);

    double d = obj.det();
    cout<<d<<endl<<endl;
    obj.view_matrix();
    cout<<endl;
    (obj.inverse()).view_matrix();
    cout<<endl;
    (obj * obj.inverse()).view_matrix();
    cout<<endl;
    (obj2 - obj3).view_matrix();
    cout<<endl;
    (obj2 * obj3).view_matrix();
    cout<<endl;
    (obj2 + obj3).view_matrix();
    cout<<endl;

    return 0;
}
