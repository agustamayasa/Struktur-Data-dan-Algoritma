#include <iostream>
#include "Linkedlist.h"
#include <conio.h>

using namespace std;


int main(int argc, char** argv) {
	
	int menu,value,target;
	LinkedList list1;
	
	do
	{
		cout<<"==========LinkedList Program==========\n";
		cout<<"1. Insert Node to Head\n";
		cout<<"2. Insert Node to Tail\n";
		cout<<"3. Insert Node After\n";
		cout<<"4. Delete Head\n";
		cout<<"5. Delete Tail\n";
		cout<<"6. Delete Node By Value\n";
		cout<<"7. Tampilan Seluruh Node\n";
		cout<<"8. Exit Program\n";
		
		cout<<"\nPilih Menu Operasi LinkedList : ";
		cin>>menu;
		cout<<"\n=================================\n";
		
		switch(menu)
		{
			case 1:
			{
				cout<<"\tInsert Node to Head\n";
				cout<<"Masukan elemen pada Node : ";
			    cin>>value;
			    list1.insertToHead(value);
			    list1.printAll();
			    getch();
			    system("cls");
			    break;
			}
			case 2:
			{
				cout<<"\tInsert Node to Tail\n";
				cout<<"Masukan elemen pada Node : ";
			    cin>>value;
			    list1.insertToTail(value);
			    list1.printAll();
			    getch();
			    system("cls");					
				break;
			}
			case 3:
			{
				cout<<"\tInsert Node After\n";
				cout<<"Masukan Target Node : ";
			    cin>>target;
			    cout<<"Masukan Elemen Node : ";
			    cin>>value;
			    list1.insertAfter(target,value);
			    list1.printAll();
			    getch();
			    system("cls");	
				break;
			}
			case 4:
			{
				cout<<"\tDelete Head\n";
				cout<<"Node sebelum dihapus:\n";
				list1.printAll();
			    list1.deleteFromHead();
			    cout<<"\nNode setelah dihapus:\n";
			    list1.printAll();
			    getch();
			    system("cls");	
			    break;
			}
			case 5:
			{
				cout<<"\tDelete Tail\n";
				cout<<"Node sebelum dihapus:\n";
				list1.printAll();
			    list1.deleteFromTail();
			    cout<<"\nNode setelah dihapus:\n";
			    list1.printAll();
			    getch();
			    system("cls");		
				break;
			}
			case 6:
			{
				cout<<"\tDelete Node by Value\n";
				cout<<"Masukan elemen Node yang akan dihapus : ";
			    cin>>value;
			    cout<<"Node sebelum dihapus:\n";
			    list1.printAll();
			    list1.deleteByValue(value);
			    cout<<"\nNode setelah dihapus:\n";
			    list1.printAll();
			    getch();
			    system("cls");	
				break;
			}
			case 7:
			{	
				cout<<"\tLInked List\n";
				list1.printAll();
				getch();
			    system("cls");
				break;
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