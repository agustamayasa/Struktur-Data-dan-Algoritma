#include <iostream>

using namespace std;

int binarySearch(int arr[], int left, int right, int num){
	while(left<=right)
	{
		int mid = (left+right)/2;
		if(num == arr[mid]){
			return mid;
		}
		else if(num < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}

	}
	
	return -1;	
}

int main(){
	int num,index;
	
	cout<<"==========Binary Search Program==========\n";
	cout<<"Masukan panjang Array : ";
	cin>>index;
	
	int arr[index];
	
	cout<<"\nMasukan elemen pada Array terurut secara Ascending\n";
	for(int i=0; i<index; i++)
	{
		cout<<"Masukan Elemen ke "<<i<<" : ";
		cin>>arr[i];
	}	
	
	cout<<"\nMasukan angka yang ingin dicari : ";
	cin>>num;
	
	int a = binarySearch(arr,0,index-1,num);
	
	if (a == -1){
		cout<<"Elemen "<<num<<"Tidak Ditemukan";
	}else{
		cout<<"Elemen "<<num<<" ditemukan pada index ke : "<<binarySearch(arr,0,index-1,num);;
	}

}