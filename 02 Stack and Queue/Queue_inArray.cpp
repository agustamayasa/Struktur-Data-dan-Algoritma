#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Queue{
	private:
		int size = 5;
		int front;
		int rear;
		int counter;
		int arr[];
		
	public:
		Queue() {
    	front = -1;
    	rear = -1;
    	counter =0;
    	for (int i = 0; i < size; i++) {
        	arr[i] = 0;
		}
    }
		
	bool QueueEmpty(){
		if (front == -1 && rear == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
		
	bool QueueFull()
	{
		if (counter == size)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
		
void enqueue(int val){
    if (QueueFull() == true)
	{
      cout<<"Queue saat ini Penuh"<<endl;
      getch();
    }
	else if (QueueEmpty() == true)
	{
		rear = 0;
		front = 0;
		arr[rear] = val;
		counter++;
    }
    else if(rear == size-1)
	{
    	rear = 0;
    	arr[rear] = val;
    	counter++;
	}
    else
    {
    	rear++;
    	arr[rear] = val;
    	counter++;
	}	
  }
		
int dequeue() {
	int tmp = 0;
    if (QueueEmpty() == true) 
	{
	    cout<<"Queue Masih Kosong"<<endl;
	    return tmp;
    } 
	else if (front == rear) 
	{
		counter--;
		tmp = arr[front];
		rear = -1;
	    front = -1;
	    cout<<"Elemen "<<tmp<<" telah dihapus\n";
	    return tmp;
    }
    else
    {
    	counter--;
	    tmp = arr[front];
	    arr[front] = 0;
	    front++;
	    cout<<"Elemen "<<tmp<<" telah dihapus\n";
	    return tmp;
	}
  }

int count(){
    return (rear - front + 1);
  	}
  	
void display() {
	cout<<"Elemen di Queue : " << endl;
	for (int i = 0; i < size; i++) 
	{
		cout<<"| "<<arr[i]<<" |";
	}
}

};

int main(){
	Queue st;
	int menu, index, value;
	
	do
	{
		cout<<"==========Queue Program==========\n";
		cout<<"1. Enqueue\n";
		cout<<"2. Dequeue\n";
		cout<<"3. Cek Queue Kosong\n";
		cout<<"4. Cek Queue Full\n";
		cout<<"5. Jumlah Elemen\n";
		cout<<"6. Display all\n";
		cout<<"7. Exit Program\n";
		
		cout<<"\nPilih Menu Operasi Queue : ";
		cin>>menu;
		cout<<"\n=================================\n";
		
		switch(menu)
		{
			case 1:
			{
				cout<<"\tEnqueue\n";
				cout<<"Masukan elemen pada Queue : ";
			    cin>>value;
			    st.enqueue(value);
			    cout<<"Elemen "<<value<<" Berhasil ditambahkan";
			    getch();
			    system("cls");
			    break;
			}
			case 2:
			{
				cout<<"\tDequeue\n";
				cout<<st.dequeue();
				getch();
			    system("cls");
				break;
			}
			case 3:
			{
				if (st.QueueEmpty() == true) 
				{
					cout<<"\nQueue Masih Kosong\n";
				}
				else
				{
					cout<<"Queue Tidak Kosong\n";
				}
				getch();
			    system("cls");
				break;
			}
			case 4:
			{
				
				if (st.QueueFull() == true) 
				{
					cout<<"\nQueue saat ini Penuh\n";
				}
				else
				{
					cout<<"Queue Tidak Penuh\n";
				}
				getch();
			    system("cls");
			    break;
			}
			case 5:
			{
				cout<<"Elemen Queue : "<<st.count();
				getch();
			    system("cls");
				break;
			}
			case 6:
			{	
				system("cls");
				st.display();
				getch();
			    system("cls");
			    break;
			}
			case 7:
			{
				cout<<"Terimakasih telah menggunakan program ini";
				break;
			}
			default:{
				cout<<"Masukan nomor menu yang sesuai";
			}
		}
	}
	while (menu != 7);
	
	
	return 0;
}