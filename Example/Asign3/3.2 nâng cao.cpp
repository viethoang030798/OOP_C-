#include <iostream>

using namespace std;
class MatrixMultiplication{
    public :
        static double** multiPlyMatrix(double** matrix1, double** matrix2,int r1,int c1,int r2,int c2) {
			double** multiplication;
            if (c1==r2) {
                multiplication=new double*[r1];
                for (int row = 0; row < r1; row++) {
                    multiplication[row]=new double[c2];
					/**
					 * Iterate column index of second matrix
					 */
					for (int colIndex = 0; colIndex <c2; colIndex++) {
						/**
						 * Iterate rows index of second matrix
						 */
						for (int col = 0; col <r2; col++) {
							multiplication[row][colIndex] = multiplication[row][colIndex] + matrix1[row][col] * matrix2[col][colIndex];
						}
					}
				}
            } else {
               cout<<"addition not Possible required rows and columns of both matrix equals"<<endl;
            }
			return multiplication;
        }
		static void deleteMemory(double** array,int rows){
            if(array){
                for(int i=0;i<rows;i++){
                    if(array[i]){
                        delete[]array[i];
                    }
                }
                delete[] array;
            }
        }
};
int main()
{
    int rows=0,cols=0,rows2=0,cols2=0;
    double** matrix1;
    double** matrix2;
    double** result;
	cout<<" *** Matrix Multiplication *** "<<endl;
	cout<<"Matrix 1 -->:"<<endl;
	cout<<"Enter no. of rows:";
	cin>>rows;
	cout<<"Enter no. of columns:";
    cin>>cols;
	matrix1=new double* [rows];
	cout<<"Enter First Matrix Of " << rows << "*" << cols << "(Allowed floating values)"<<endl;
    for (int r = 0; r < rows; r++) {
        matrix1[r]=new double[cols];
        for (int c = 0; c < cols; c++) {
            cin>>matrix1[r][c];
        }
    }
	cout<<"Matrix 2 -->:"<<endl;
	cout<<"Enter no. of rows:";
	cin>>rows2;
	cout<<"Enter no. of columns:";
    cin>>cols2;
	matrix2=new double* [rows2];
    cout<<"Enter Second Matrix Of " << rows2 << "*" << cols2 << "(Allowed floating values)"<<endl;
    for (int r = 0; r < rows2; r++) {
        matrix2[r]=new double[cols2];
        for (int c = 0; c < cols2; c++) {
            cin>>matrix2[r][c];
        }
    }
    result=MatrixMultiplication::multiPlyMatrix(matrix1, matrix2,rows,cols,rows2,cols2);
	cout<<"Multiplication of matrix:"<<endl;
	/**
	 * In matrix multiplication; Resultant matrix will be rows of first
	 * matrix X columns of second matrix
	 */
    for (int r = 0; r < rows; r++) {
        cout<<"|";
        for (int c = 0; c < cols2; c++) {
            cout<<result[r][c] << " ";
        }
       cout<<"|"<<endl;
    }
	MatrixMultiplication::deleteMemory(matrix1,rows);
    MatrixMultiplication::deleteMemory(matrix2,rows2);
    MatrixMultiplication::deleteMemory(result,rows);
    return 0;
}