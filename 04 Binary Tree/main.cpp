#include<iostream>
#include "BinaryTree.h"
#include <conio.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	BinaryTree bin;
	
	int menu,value,val;

    do {
    	
        cout<<"==========Binary Tree Program==========\n";
        cout<<"1. Insert Node\n";
        cout<<"2. Search Node\n";
        cout<<"3. Exit\n";
        cout<<"\nPilih Menu Operasi : ";
        cin>>menu;
        cout<<"=======================================\n";

        switch (menu) {
            case 1:
                cout<<"Masukkan Nilai : ";
                cin>>value;
                cout<<"\n";
                bin.insertNode(value);

                cout<<"In-Order Traversal   : ";
                bin.inOrder();
                cout<<"\n";

                cout<<"Pre-Order Traversal  : ";
                bin.preOrder();
                cout<<"\n";

                cout << "Post-Order Traversal : ";
                bin.postOrder();
                cout<<"\n";
                cout<<"\n";

                bin.findMin();
                bin.findMax();
                
                cout<<"\n";
				getch();
			    system("cls");
                break;
                
            case 2:
                cout<<"Masukan Nilai Node : ";
                cin>>val;
                bin.searchNode(val);
                getch();
			    system("cls");
                break;
                
            case 3:
            	cout<<"Terimakasih telah menggunakan program ini\n";
                break;
            default:
                cout<<"Masukan nomor menu yang sesuai\n";
        }
    }
    while (menu != 3);
    
	return 0;
}