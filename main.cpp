#include<iostream>
using namespace std ;
 

int main()
{
    int quantity;
    int choice;

    //Quantity
    int quantityOfRooms=0, Qpasta=0 , Qnoodles=0 , Qburger=0, Qshake=0, Qchicken_roll=0;
    //Sold item food
    int soldRoom = 0 , soldpasta=0 , soldnoodles=0 , soldburger=0, soldshake=0, soldchicken_roll=0;
    //Total Price Of Items
    int Total_P_Room =0, Total_P_pasta =0 , Total_P_noodles=0 , Total_P_burger=0, Total_P_shake=0 , Total_P_chicken_roll=0;
    
    //management
    cout<<"\n Quantity Of Items We Have ";
    cout<<"\n Room Available :";
    cin>>quantityOfRooms;
    cout<<"\n Quantity Of Pasta :";
    cin>>Qpasta;
    cout<<"\n Quantity Of Burger :";
    cin>>Qburger;
    cout<<"\n Quantity Of Noodles :";
    cin>>Qnoodles;
    cout<<"\n Quantity Of Shake :";
    cin>>Qshake;
    cout<<"\n Quantity Of Chicken-Roll :";
    cin>>Qchicken_roll;
    

    //Costumer
    m:
    cout<<"\n\t\t\t Please select from the menu option ";
    cout<<"\n1:- Rooms";
    cout<<"\n2:- Pasta";
    cout<<"\n3:- Burger";
    cout<<"\n4:- Noodles";
    cout<<"\n5:- Shake";
    cout<<"\n6:- Chicken-Roll";
    cout<<"\n7:- Information regarding the sales and collection ";
    cout<<"\n8:- Exit";

    cout<<"\n\n Please Enter your choice!";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"\n\n Enter the Number of rooms you want : ";
        cin>>quantity;
               if(quantityOfRooms-soldRoom >= quantity)
               {
                soldRoom += quantity;
                Total_P_Room += quantity*1200;
                cout<<"\n\n\t\t"<<quantity<<"Room/Room have been alloted to you "; 
               }else
                cout<<"\n\nonly"<<quantityOfRooms-soldRoom<<"Rooms remaining in the hotel ";
        break;
    case 2:
        cout<<"\n\n Enter Pasta quantity : ";
        cin>>quantity;
               if(Qpasta-soldpasta >= quantity)
               {
                soldpasta += quantity;
                Total_P_pasta += quantity*250;
                cout<<"\n\n\t\t"<<quantity<<" Pasta is order! "; 
               }else
                cout<<"\n\nonly"<<Qpasta-soldpasta<<"Pasta remaining in the hotel ";
        break;
    case 3:
        cout<<"\n\n Enter Burger quantity : ";
        cin>>quantity;
               if(Qburger-soldburger >= quantity)
               {
                soldburger += quantity;
                Total_P_burger += quantity*120;
                cout<<"\n\n\t\t"<<quantity<<" Burger is order! "; 
               }else
                cout<<"\n\nonly"<<Qburger-soldburger<<"Burger remaining in the hotel ";
        break;
    case 4:
        cout<<"\n\n Enter Noodles quantity : ";
        cin>>quantity;
               if(Qnoodles-soldnoodles >= quantity)
               {
                soldnoodles += quantity;
                Total_P_noodles += quantity*140;
                cout<<"\n\n\t\t"<<quantity<<" Noodles is order! "; 
               }else
                cout<<"\n\nonly"<<Qnoodles-soldnoodles<<"Noodles remaining in the hotel ";
        break;
    case 5:
        cout<<"\n\n Enter Shake quantity : ";
        cin>>quantity;
               if(Qshake-soldshake >= quantity)
               {
                soldshake += quantity;
                Total_P_shake += quantity*120;
                cout<<"\n\n\t\t"<<quantity<<" Shake is order! "; 
               }else
                cout<<"\n\nonly"<<Qshake-soldshake<<"Shake remaining in the hotel ";
        break;
    case 6:
        cout<<"\n\n Enter Chicken-Roll quantity : ";
        cin>>quantity;
               if(Qchicken_roll-soldchicken_roll >= quantity)
               {
                soldchicken_roll += quantity;
                Total_P_chicken_roll += quantity*150;
                cout<<"\n\n\t\t"<<quantity<<" Chicken_Roll is order! "; 
               }else
                cout<<"\n\nonly"<<Qchicken_roll-soldchicken_roll<<"Chicken_Roll remaining in the hotel ";
        break;
    case 7:
         cout<<"\n\t\tDetails of sales and collection ";
         cout<<"\n\nNumber of Rooms we had : "<<quantityOfRooms;
         cout<<"\n\nNumber of Rooms we gave for rent :"<<soldRoom;
         cout<<"\n\nRemaining Rooms : "<<quantityOfRooms-soldRoom;
         cout<<"\n\nTotal Rooms collection for the day : "<<Total_P_Room;

         cout<<"\n\nNumber of Pastas we had : "<<Qpasta;
         cout<<"\n\nNumber of Pastas we Sold :"<<soldpasta;
         cout<<"\n\nRemaining Pastas : "<<Qpasta-soldpasta;
         cout<<"\n\nTotal Pastas collection for the day : "<<Total_P_pasta;

         cout<<"\n\nNumber of Burger we had : "<<Qburger;
         cout<<"\n\nNumber of Burgers we Sold :"<<soldburger;
         cout<<"\n\nRemaining Burgers : "<<Qburger-soldburger;
         cout<<"\n\nTotal Burgers collection for the day : "<<Total_P_burger;

         cout<<"\n\nNumber of Noodles we had : "<<Qnoodles;
         cout<<"\n\nNumber of Noodles we Sold :"<<soldnoodles;
         cout<<"\n\nRemaining Noodles : "<<Qnoodles-soldnoodles;
         cout<<"\n\nTotal Noodles collection for the day : "<<Total_P_noodles;

         cout<<"\n\nNumber of Shake we had : "<<Qshake;
         cout<<"\n\nNumber of Shake we Sold :"<<soldshake;
         cout<<"\n\nRemaining Shake : "<<Qshake-soldshake;
         cout<<"\n\nTotal Shake collection for the day : "<<Total_P_shake;

         cout<<"\n\nNumber of Chicken-Roll we had : "<<Qchicken_roll;
         cout<<"\n\nNumber of Chicken-Roll we gave for rent :"<<soldchicken_roll;
         cout<<"\n\nRemaining Chicken-Roll : "<<Qchicken_roll-soldchicken_roll;
         cout<<"\n\nTotal Chicken-Roll collection for the day : "<<Total_P_chicken_roll;
         
         cout<<"\n\nTotal collection for the day : "<<Total_P_Room+Total_P_pasta+Total_P_noodles+Total_P_burger+Total_P_shake+Total_P_chicken_roll;
         break;
    case 8:
        exit(0);
        break;
    default:
          cout<<"\n Please select the number mention above";
    
    }

 goto m;

}