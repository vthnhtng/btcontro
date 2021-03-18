//bt con tro tuan 5
//b1
int* getPointerToTen(){
	int* x = new int;
	*x = 10;
	return x;
}
//b2
double* getPointerToPi(){
	double* pi = new double;
	*pi = 3.14159;
	return pi;
}
//b3
double* getSquare(double number){
	double* x = new double;
	number *= number;
	*x = number;
	return x;
}
//b4
void swap(int *a, int *b){
	int tmp = *a; *a = *b; *b = tmp;

}
//b5
void multiply(int *n, int k){
	*n = *n * k;
}
//b6
void cube(double* n){
	*n = *n * *n * *n;
}
//b7
int *getPointerToArray(int n){
	int *a;
	a = new int[n];
	for (int i = 0; i < n; i++){
		cin>>a[i];
	}
	return a;
}
//b8
void normalize (double *out, int *in, int n){
    for (int i = 0; i < n;i++){
        *(out +i) = (double)*(in + i) / 255;
    }
}
//b9
void printImage(int** img, int height, int width){
    for(int i = 0;i<height;i++){
        for(int j = 0 ;j<width;j++){
            cout<<setw(4)<<img[i][j];
        }
        cout<<endl;
    }
}
