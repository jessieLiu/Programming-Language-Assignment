#include <iostream>
#include <vector>

using namespace std;

class Matrix
{
private:
    vector<vector<double> > data;
    int row, column;
public:
    Matrix();
    Matrix(const vector<vector<double> > &t, int row, int column);
    Matrix operator * (const Matrix &t);
    Matrix& operator = (const Matrix &t);
    void print();
};

Matrix::Matrix()
{
    row = 0;
    column = 0;
    data.clear();
}

Matrix::Matrix(const vector<vector<double> > &t, int row, int column)
{
    vector<double> temp;
    data.clear();
    this->row = row;
    this->column = column;
    for (int i = 0; i != row; ++i)
    {
        temp.clear();
        for (int j = 0; j != column; ++j)
        {
            temp.push_back(t[i][j]);
        }
        data.push_back(temp);
    }
}

Matrix Matrix::operator * (const Matrix &t)
{
    Matrix result;
    vector<double> temp;
    int r;
    result.data.clear();
    if (this->column != t.row)
    {
        result.row = 0;
        result.column = 0;
        return result;
    }
    for (int i = 0; i != this->row; ++i)
    {
        temp.clear();
        for (int j = 0; j != t.column; ++j)
        {
            r = 0;
            for (int k = 0; k != this->column; ++k)
                r = r + this->data[i][k] * t.data[k][j];
            temp.push_back(r);
        }
        result.data.push_back(temp);
    }
    result.row = this->row;
    result.column = t.column;
    return result;
}

Matrix& Matrix::operator = (const Matrix &t)
{
    vector<double> temp;
    data.clear();
    for (int i = 0; i != t.row; ++i)
    {
        temp.clear();
        for (int j = 0; j != t.column; ++j)
        {
            temp.push_back(t.data[i][j]);
        }
        data.push_back(temp);
    }
    this->row = t.row;
    this->column = t.column;
    return (*this);
}

void Matrix::print()
{
    cout << "-----" << endl;
    for (int i = 0; i != row; ++i)
    {
        for (int j = 0; j != column; ++j)
            cout << data[i][j] << " ";
        cout << endl;
    }
    cout << "-----" << endl;
}

int main()
{
    vector<vector<double> > a, b;
    vector<double> t;

    a.clear();
    t.clear();
    t.push_back(1); t.push_back(2); t.push_back(3);
    a.push_back(t);
    t.clear();
    t.push_back(4); t.push_back(5); t.push_back(6);
    a.push_back(t);

    b.clear();
    t.clear();
    t.push_back(1); t.push_back(2); t.push_back(3); t.push_back(4);
    b.push_back(t);
    t.clear();
    t.push_back(5); t.push_back(6); t.push_back(7); t.push_back(8);
    b.push_back(t);
    t.clear();
    t.push_back(1); t.push_back(2); t.push_back(3); t.push_back(4);
    b.push_back(t);
    t.clear();
    t.push_back(9); t.push_back(10); t.push_back(11); t.push_back(12);
    b.push_back(t);

    Matrix ma(a, 2, 3), mb(b, 3, 4), mc;
    mc = ma * mb;
    ma.print();
    mb.print();
    mc.print();

    return 0;
}
