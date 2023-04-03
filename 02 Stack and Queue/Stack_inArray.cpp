#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Stack{
	private:
		int size = 5;
		int top;
		int arr[];
	
	public:
		Stack()
		{
			arr[size];
	    	top = -1;
	    	for (int i = 0; i < size; i++) {
	    		arr[i] = 0;
			}
    	}		
		
	bool StackEmpty(){
		if (top==-1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
		
	bool StackFull()
	{
		if (top == size-1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
		
void push(int val){
    if (StackFull() == true)
	{
	    cout<<"Stack sudah penuh"<<endl;
	    getch();
    }
	else
	{
		top++; // 1
		arr[top] = val;
		cout<<"Elemen "<<arr[top]<<" Berhasil ditambahkan";
    }
  }
		
int pop() {
    if (StackEmpty() == true) 
	{
		cout<<"Stack masih kosong"<<endl;
		return 0;
    } 
	else 
	{
	    int popValue = arr[top];
	    arr[top] = 0;
	    top--;
	    return popValue;
      
    }
  }

int count() {
    return (top + 1);
  	}

int peek(int index) {
	if (StackEmpty()) 
	{
		cout << "Stack masih kosong" << endl;
		return 0;
	} 
	else 
	{
	    return arr[index];
	}
	    
}

void display() {
	cout<<"Elemen pada stack : " << endl;
	for (int i = size-1; i >= 0; i--) 
	{
		cout <<"|"<<arr[i]<<"|"<< endl;
	}
}

};

int main(){
	Stack st;
	int menu, index, value;
	
	do
	{
		cout<<"==========Stack Program==========\n";
		cout<<"1. Push\n";
		cout<<"2. Pop\n";
		cout<<"3. Cek Stack Kosong\n";
		cout<<"4. Cek Stack Full\n";
		cout<<"5. Lihat Elemen\n";
		cout<<"6. Jumlah Elemen\n";
		cout<<"7. Tampilan Seluruh Elemen Stack\n";
		cout<<"8. Exit Program\n";
		
		cout<<"\nPilih Menu Operasi Stack : ";
		cin>>menu;
		cout<<"\n=================================\n";
		
		switch(menu)
		{
			case 1:
			{
				cout<<"\tPush Stack\n";
				cout<<"Masukan elemen pada stack : ";
			    cin>>value;
			    st.push(value);
			    getch();
			    system("cls");
			    break;
			}
			case 2:
			{
					
				cout<<"\tPop Stack\n";
				cout<<"Elemen "<<st.pop()<<" Berhasil dikeluarkan";
				getch();
			    system("cls");
				break;
			}
			case 3:
			{
				cout<<"\tCek Stack\n";
				if (st.StackEmpty() == true) 
				{
					cout<<"\nStack Masih Kosong\n";
				}
				else
				{
					cout<<"Stack Tidak Kosong\n";
				}
				getch();
			    system("cls");
				break;
			}
			case 4:
			{
				cout<<"\tCek Stack\n";
				if (st.StackFull() == true) 
				{
					cout<<"\nStack Sudah Penuh\n";
				}
				else
				{
					cout<<"Stack Belum Penuh\n";
				}
				getch();
			    system("cls");
			    break;
			}
			case 5:
			{
				cout<<"Masukan posisi elemen yang ingin dilihat : ";
				cin>>index;
				cout<<"Elemen pada index "<<index<<" adalah "<<st.peek(index);
				getch();
			    system("cls");
				break;
			}
			case 6:
			{
				cout<<"Jumlah elemen pada stack : "<<st.count();
				getch();
			    system("cls");
				break;
			}
			case 7:
			{	
				st.display();
				getch();
			    system("cls");
			}
			case 8:
			{
				cout<<"Terimakasih telah menggunakan program ini";
				break;
			}
			default:{
				cout<<"Masukan nomor menu yang sesuai";
			}
		}
	}
	while (menu != 8);
	
	return 0;
}