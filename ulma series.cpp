#include<iostream>
#include<math.h>

using namespace std;

int nearestsquare(int n){
	for (int i=1;i<n;++i){
		if ((i*i)>n) return (i);
	}
}

int main(){
	int n;
	cin >> n;
	int x = nearestsquare(n);
	int size = 1;
	int z = 1;
//	int arr[20][20];
	int** arr = new int* [x];
	for (int i=0;i<x;++i){
		arr[i] = new int [x];
	}
	int i,j;
	int count = 1;
	i = x/2;
	if (x%2 == 1) j = x/2;
	else j = (x/2)-1;
//	cout << endl << "i " << i << endl << "j " << j << endl;
	arr[i][j] = count;
	
	while (count <= (x*x)){
		if (count > (x*x)) break;
//		cout << "size is " << size << endl;
		for (int s=0;s<size;){
			count++;
			j ++;
			arr[i][j] = count ;
			s++;
//			cout << endl << count << " = arr" << i << "," << j << endl; 
			//if (issquare(count)) size++;
		}
		if (count > (x*x)) break;
//		cout << "size is " << size << endl;
		for (int s=0;s<size;){
			count++;
			i --;
			s++;
			arr[i][j] = count ;
//			cout << endl << count << " = arr" << i << "," << j << endl; 
			//if (issquare(count)) size++;
		}
		size++;
		if (count > (x*x)) break;
//		cout << "size is " << size << endl;
		for (int s=0;s<size;){
			count++;
			j --;
			s++;
			arr[i][j] = count ;
			//cout << endl << count << " = arr" << i << "," << j << endl; 
			//if (issquare(count)) size++;
		}
		if (count > (x*x)) break;
//		cout << "size is " << size << endl;
		for (int s=0;s<size;){
			count++;
			i ++;
			s++;
			arr[i][j] = count ;
			//cout << endl << count << " = arr" << i << "," << j << endl; 
			//if (issquare(count)) size++;
		}
		size++;
		//cout << "size is " << size << endl;
	} 
	
	for (int i=0;i<x;++i){
		for (j=0;j<x;++j){
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
	return 0;
}
