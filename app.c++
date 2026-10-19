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
                cout <<"6.Display A Valiable Books \n"; 
                cout <<"7.Display A Borrow Books \n";
                cout <<"8.EXIT \n";
                int choose ;
                cout <<"Choose number for menu \n " ;  cin >> choose ;
                return choose ;
        }
                int main ()
                {
                        bool run = true ;
                        bool found; 
                        int search ;
                        int book_id ;
                        string book_author;
                        string book_name ;
                        vector<int>id ;
                        vector<string>name;
                        vector<string>author;
                        vector<string>status;
                                status.push_back("borrow");
                                status.push_back("avalible");
                                status.push_back("avalibe ");
                                status.push_back("borrow");
                                status.push_back("borrow");
                        while (run){
                        switch(menu())
                        {      
                        case 1 :
                        {
                                cout <<"ID :    \n" ;                        cin >> book_id ;
                                cout << "The Name of The Book :    \n" ;     cin >> book_name ;
                                cout << "The author's name :    \n";         cin >>book_author ;
                                id.push_back(book_id);
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
                                        cout << "\n==========\n" ;
                                }
                                break ;
                        }
                        case 3 :
                        {
                                bool found; 
                                cout <<"Enter id the book you want :   \n "; cin>>search ;
                                for (int i = 0 ; i <id.size();i++)
                                {
                                        if (search==id[i])
                                {
                                                cout << "ID:   "  << id[i]<< "\n" ;
                                                cout << "Book title :  " << name[i] << "\n" ;
                                                cout << "author name :   " << author[i] << "\n" ;
                                                found=true;
                                }
                        }
                        if(found==false)
                        {
                                cout<<"rvsvs";
                        }
                                break ;
                        }
                        case 4 : 
                        {
                                        cout <<"Enter id the book you want borrow \n" ; cin >> book_id ;
                                        for (int i = 0 ; i < id.size() ;i++)
                                        {
                                                if (book_id==id[i])
                                                {
                                                        found = true ;
                                                }
                                                if (status[i]=="avalinble")
                                                {
                                                        status[i] =  "borrow" ;
                                                        cout << "Book borrowed successfuly \n " ;
                                                }
                                                if (status[i]=="borrow")
                                                {
                                                        cout <<"Book not avalible \n" ;
                                                }
                                                if (found ==false)
                                                {
                                                        cout <<"Book not found \n" ; 
                                                }
                                        }
                                        break ;
                        }   
                        case 5 :
                        {
                                cout <<"Enter the book id you want return \n" ; cin >> book_id ;
                                for (int i = 0 ; i < id.size() ; i++)
                                {
                                        if (book_id==id[i])
                                        {
                                                found = true ;
                                        }
                                        if (status[i]=="borrowed")
                                        {
                                                status[i]="avalible" ;
                                                cout <<"Book return successfuly \n" ;
                                        }     
                                }
                                break ;
                        }
                        case 6 :
                        {
                                for (int i = 0 ; i < id.size() ; i++)
                                {
                                        if (status[i]== "avalible")
                                        {
                                                cout <<id.at(i)  <<     " "   << name.at(i) <<   " "   << author.at(i)  <<  "\n" ;
                                        }
                                        if (status[i]!="avalible")
                                        {
                                                cout <<"BOOK NOT AVALIBLE\n" ;
                                        }
                                }
                                break ; 
                        }
                        case 7 :
                        {
                                for (int i = 0 ; i <id.size() ; i++)
                                {
                                        if (status[i]=="borrow")
                                        {
                                                cout <<id.at(i)  <<     " "   << name.at(i) <<   " "   << author.at(i)  <<  "\n" ;
                                        }
                                }
                                break ;
                        }
                        case 8 :
                        {
                                cout <<"Thank you \n" ;
                                run = false ;
                        }
                        }
                        }
                        }
