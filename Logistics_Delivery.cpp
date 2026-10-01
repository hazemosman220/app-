#include <iostream>
using namespace std;
class Person
{
    public:
        string name;
        string Email;
        int age;
        int id;
        int phone ;
};
class Customer : public Person
{
    private:
        string address;
};
class Driver : public Person
{
    private:
        string license;
        string Status;
        
};
class Employee : public Person
{
    private:
        string Role;
};
class Vehicle 
{
    private :
        int id;
        string Plate_Number;
        string Status="Available" ;
        string Type;
};
class Warhouse
{
    private :
        int id ;
        string Name;
        string Address;

};
class Order
{
    private :
        int id;
        int Customer_id;
        int Car_id=0;
        int Warhouse_id;
        int Driver_id=0;
        string Description;
        string Status="Pending";
};
#pragma region Menus
///Menus__________________________________
// Main Menu
int MainMenu()
{
    cout<<"\n================================";
    cout<<"\n   Logistics Management System  ";
    cout<<"\n================================\n";
    cout<<"1. Customer Management\n2. Employee Management \n3. Driver Management \n4. Vehicle Management \n5. Warehouse Management \n6. Order Management \n7. Reports \n8. Exit\n";
    cout<<"Choose Number From Menu : ";
    int Choose;cin>>Choose;
    return Choose;

}
//Customer Menu
int Customers_Menu()
{
    cout<<"1. Add Customer \n2. View All Customers \n3. Search Customer \n4. Update Customer \n5. Delete Customer \n6. Back\n";
    cout<<"Choose Number From Menu : ";
    int Choose;cin>>Choose;
    return Choose;
}
//Employee Menu
int Employees_Menu()
{
    cout<<"1. Add Employee \n2. View All Employees \n3. Search Employee \n4. Update Employee \n5. Delete Employee \n6. Back\n";
    cout<<"Choose Number From Menu : ";
    int Choose;cin>>Choose;
    return Choose;
}
//Driver Menu
int Drivers_Menu()
{
    cout<<"1. Add Driver \n2. View All Drivers \n3. Search Driver \n4. Update Driver \n5. Delete Driver \n6. View Available Drivers \n7. Back\n";
    cout<<"Choose Number From Menu : ";
    int Choose ;cin>>Choose;
    return Choose ;
}
//Vehicle Menu
int Vehicles_Menu()
{
    cout<<"1. Add Vehicle \n2. View All Vehicles \n3. Search Vehicle \n4. Update Vehicle \n5. Delete Vehicle \n6. View Available Vehicles \n7. Back\n";
    cout<<"Choose Number From Menu : ";
    int Choose ;cin>>Choose;
    return Choose ;
}
//Warehouse Menu
int Warehouses_Menu()
{
    cout<<"1. Add Warehouse \n2. View All Warehouses \n3. Search Warehouse \n4. Update Warehouse \n5. Delete Warehouse \n6. Back\n";
    cout<<"Choose Number From Menu : ";
    int Choose ;cin>>Choose;
    return Choose ;
}
//Orders
int Orders_Menu()
{
    cout<<"1. Create Order \n2. View All Orders \n3. Search Order \n4. Assign Driver & Vehicle \n5. Update Order Status \n6. Cancel Order \n7. View Pending Orders \n8. View Assigned Orders \n9. View OutForDelivery Orders \n10. View Delivered Orders \n11. Back\n";
    cout<<"Choose Number From Menu : ";
    int Choose ;cin>>Choose;
    return Choose ;
}
//Reports Menu
int Reports_Menu()
{
    cout<<"1. Total Customers \n2. Total Employees \n3. Total Drivers \n4. Available Drivers \n5. Busy Drivers \n6. Total Vehicles \n7. Available Vehicles \n8. Busy Vehicles \n9. Total Orders \n10. Pending Orders \n11. Delivered Orders \n12. Cancelled Orders \n13. Back\n";
    cout<<"Choose Number From Menu : ";
    int Choose ;cin>>Choose;
    return Choose ;
}
///Menus__________________________________
#pragma endregion
int main ()
{
    bool Run=true;
    while (Run)
    {
        switch(MainMenu())
        {
            case 1:
            {
                switch(Customers_Menu())
                {
                    case 1:
                    {

                        break;
                    }
                    case 2:
                    {

                        break;
                    }
                    case 3:
                    {

                        break;
                    }
                    case 4:
                    {

                        break;
                    }
                    case 5:
                    {

                        break;
                    }
                    case 6:
                    {

                        break;
                    }
                    default:
                    {
                        cout<<"Please Choose Number From Menu!\n";
                        break;
                    }
                }
                break;
            }
            case 2:
            {
                switch(Employees_Menu())
                {
                    case 1:
                    {

                        break;
                    }
                    case 2:
                    {

                        break;
                    }
                    case 3:
                    {

                        break;
                    }
                    case 4:
                    {

                        break;
                    }
                    case 5:
                    {

                        break;
                    }
                    case 6:
                    {

                        break;
                    }
                    default:
                    {
                        cout<<"Please Choose Number From Menu!\n";
                        break;
                    }
                }
                break;
            }
            case 3:
            {
                switch(Drivers_Menu())
                {
                    case 1 :
                    {

                        break;
                    } 
                    case 2 :
                    {

                        break;
                    } 
                    case 3 :
                    {

                        break;
                    } 
                    case 4 :
                    {

                        break;
                    } 
                    case 5 :
                    {

                        break;
                    } 
                    case 6 :
                    {

                        break;
                    } 
                    case 7 :
                    {

                        break;
                    } 
                    default:
                    {
                        cout<<"Please Choose Number From Menu!\n";
                        break;
                    } 
                }
                break;
            }
            case 4:
            {
                switch(Vehicles_Menu())
                {
                    case 1 :
                    {

                        break;
                    }
                    case 2 :
                    {

                        break;
                    }
                    case 3 :
                    {

                        break;
                    }
                    case 4 :
                    {

                        break;
                    }
                    case 5 :
                    {

                        break;
                    }
                    case 6 :
                    {

                        break;
                    }
                    case 7 :
                    {

                        break;
                    }
                    default :
                    {
                        cout<<"Please Choose Number From Menu!\n";
                        break;
                    }
                }
                break;
            }
            case 5:
            {
                switch(Warehouses_Menu())
                {
                    case 1 :
                    {

                        break;
                    }
                    case 2 :
                    {

                        break;
                    }
                    case 3 :
                    {

                        break;
                    }
                    case 4 :
                    {

                        break;
                    }
                    case 5 :
                    {

                        break;
                    }
                    case 6 :
                    {

                        break;
                    }
                    default:
                    {
                        cout<<"Please Choose Number From Menu!\n";
                        break;
                    }
                }
                break;
            }
            case 6:
            {
                switch(Orders_Menu())
                {
                    case 1 :
                    {

                        break;
                    }
                    case 2 :
                    {

                        break;
                    }
                    case 3 :
                    {

                        break;
                    }
                    case 4 :
                    {

                        break;
                    }
                    case 5 :
                    {

                        break;
                    }
                    case 6 :
                    {

                        break;
                    }
                    case 7 :
                    {

                        break;
                    }
                    case 8 :
                    {

                        break;
                    }
                    case 9 :
                    {

                        break;
                    }
                    case 10 :
                    {

                        break;
                    }
                    case 11 :
                    {

                        break;
                    }
                    default :
                    {
                        cout<<"Please Choose Number From Menu!\n";
                        break;
                    }
                }
                break;
            }
            case 7:
            {
                switch(Reports_Menu())
                {
                    case 1 :
                    {

                        break;
                    }
                    case 2 :
                    {

                        break;
                    }
                    case 3 :
                    {

                        break;
                    }
                    case 4 :
                    {

                        break;
                    }
                    case 5 :
                    {

                        break;
                    }
                    case 6 :
                    {

                        break;
                    }
                    case 7 :
                    {

                        break;
                    }
                    case 8 :
                    {

                        break;
                    }
                    case 9 :
                    {

                        break;
                    }
                    case 10 :
                    {

                        break;
                    }
                    case 11 :
                    {

                        break;
                    }
                    case 12 :
                    {

                        break;
                    }
                    case 13 :
                    {

                        break;
                    }
                    default :
                    {
                        cout<<"Please Choose Number From Menu!\n";
                        break;
                    }
                }
                break;
            }
            case 8:
            {
                cout<<"Exiting...\n";
                Run=false;
                break;
            }
            default:
            {
                cout<<"Please Choose Number From Menu!\n";
                break;
            }
        }
    }
}