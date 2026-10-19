#include<iostream>
#include <vector>
#include<array>
#include<string>
using namespace std ; 
int menu ()
{
        cout << "\n=================\n";
        cout << "\nLIBRARY MANAGEMENT SYSTEM\n";
        cout <<"\n==================\n";
        cout <<"1.Add new book\n";
        cout <<"2.Display All Books \n";
        cout <<"3.Search For A Book\n";
        cout <<"4.Borrow A Book\n";
        cout <<"5.Return A Book \n";
        cout <<"6.Display Avaliable Books \n"; 
        cout <<"7.Display Borrowed Books \n";
        cout <<"8.EXIT \n";
        int choose ;
        cout <<"Choose number for menu \n " ;  cin >> choose ;
        return choose ;
}
int main ()
{
        bool run = true ;
        int search ;
        int book_id ;
        string book_author;
        string book_name ;
        string Status ;
        vector<int>id ;
        vector<string>name;
        vector<string>author;
        vector<string>status;
        while (run){
        switch(menu())
        {      
        case 1 :
        {
                cout <<"Enter ID Of The Book:";cin >> book_id ;
                cout << "Enter Name of The Book:" ;cin >> book_name ;
                cout << "Enter Author's Name:";cin >>book_author ;
                cout << "Enter Status Of The Book:";cin >> Status;
                id.push_back(book_id);
                status.push_back(Status);
                name.push_back(book_name);
                author.push_back(book_author);
                cout<<"\nSuccessfully completed\n";
                break ;         
        }
        case 2 :
        {
                for (int i = 0 ; i < id.size(); i++ )
                {
                        cout <<id.at(i)  <<     " "   << name.at(i) <<   " "   << author.at(i)  <<  "\n" ;
                        cout << "===================\n" ;
                }
                break ;
        }
        case 3 :
        {
                bool found; 
                cout <<"Enter ID To Search :";cin>>search ;
                for (int i = 0 ; i <id.size();i++)
                {
                        if (search==id[i])
                        {
                                cout << "Found!"<< "\n" ;
                                cout << "ID: "<< id[i]<< "\n" ;
                                cout << "Book Title : " << name[i] << "\n" ;
                                cout << "Author Name : " << author[i] << "\n" ;
                                cout << "Book Status : " << status[i] << "\n" ;
                                found=true;
                        }
                }
                if(found==false)
                {
                        cout<<"Book Not Found!";
                }
                break ;
        }
        case 4 : 
        {
                bool found=false; 
                cout <<"Enter ID To Borrow:";cin >> book_id ;
                for (int i = 0 ; i < id.size() ;i++)
                {
                        if (book_id==id[i])
                        {
                                found = true ;
                                if (status[i]=="Avalible")
                                {
                                        status[i] ="Borrowed" ;
                                        cout << "Book Borrowed successfuly \n " ;
                                }
                                if (status[i]=="Borrowed")
                                {
                                        cout <<"Book Is Borrowed\n" ;
                                }
                        }
                }
                if (found ==false)
                {
                        cout <<"Book not found \n" ; 
                }
                break ;
        }   
        case 5 :
        {
                bool found=false; 
                cout <<"Enter ID To Return: ";cin >> book_id ;
                for (int i = 0 ; i < id.size() ; i++)
                {
                        if (book_id==id[i])
                        {
                                found = true ;
                                if (status[i]=="Borrowed")
                                {
                                        status[i]="Avalible" ;
                                        cout <<"Book Returned Successfuly \n" ;
                                }     
                                else if (status[i]=="Avalible")
                                {
                                        cout <<"Book Is Already Avalible\n" ;
                                }     
                        }
                if(found == false)
                {
                        cout<<"Book Not Found!\n";
                }
                }
                break ;
        }
        case 6 :
        {
                for (int i = 0 ; i < id.size() ; i++)
                {
                        if (status[i]== "Avalible")
                        {
                                cout <<id.at(i)  <<     " "   << name.at(i) <<   " "   << author.at(i)  <<  "\n" ;
                        }
                }
                break ; 
        }
        case 7 :
        {
                for (int i = 0 ; i <id.size() ; i++)
                {
                        if (status[i]=="Borrowed")
                        {
                                cout <<id.at(i)  <<     " "   << name.at(i) <<   " "   << author.at(i)  <<  "\n" ;
                        }
                }
                break ;
        }
        case 8 :
        {
                cout <<"Exiting..." ;
                run = false ;
        }
        }
        }
        }
