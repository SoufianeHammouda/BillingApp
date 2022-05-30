#include <iostream>

using namespace std;

float price;
float totalprice;
float groundTotalPrice;
float tax = 0.02;
int deliveryCost=1500;
int choice;
int get_WristWatches();

void start();
int get_Shoes();
int get_Shirts();
int get_WristWatches();



//Shoes
int timberlandShoePrice = 200000;
int timberlandShoeQty = 2000;
int timberlandShoeQty1;
int get_TimberLand();


int adidasShoePrice = 100000;
int adidasShoeQty = 3000;
int adidasShoeQty1;
int get_Adidas();


int nikeShoePrice = 150000;
int nikeShoeQty = 4000;
int nikeShoeQty1;
int get_Nike();


//Shirts
int AdidasShirtsPrice = 200000;
int AdidasShirtsQty = 4500;
int AdidasShirtsQty1;
int get_Adi();


int versacePrice = 100000;
int versaceQuantity = 5000;
int versaceQuantity1;
int get_Versace();


int nikesPrice = 100000;
int nikesQuantity = 5000;
int nikesQuantity1;
int get_Nikes();


//Wrist Watches
int paulSmithPrice = 120000;
int paulSmithQuantity = 7000;
int paulSmithQuantity1;
int get_PaulSmith();


int rolexPrice = 130000;
int rolexQuantity = 6000;
int rolexQuantity1;
int get_Rolex();


int hublotPrice = 140000;
int hublotQuantity = 5500;
int hublotQuantity1;
int get_Hublot();


int main()
{
    start();

    cout<<"\n$$$$$$$ Enter Your choice based on What you want to Purchase $$$$$$$$"<<endl;

    cout<<"\n\t\t\t1-For Shoes\n\t\t\t2-For Shirts\n\t\t\t3-For Wrist Watches\n"<<endl;

    cin>>choice;

    switch(choice)
    {
   case 1:
        get_Shoes();
        break;

      case 2:
        get_Shirts();
        break;

        case 3:
        get_WristWatches();
        break;

    }

    return 0;
}


void start(){
cout<<"\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
cout<<"\t$$                                     $$"<<endl;
cout<<"\t$$                                     $$"<<endl;
cout<<"\t\tShopping Billing App"<<endl;
cout<<"\t$$                                     $$"<<endl;
cout<<"\t$$                                     $$"<<endl;
cout<<"\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;

}


int get_Shoes()
{
    cout<<"\tWelcome to Shoes Section"<<endl;

    cout<<"\n\t\t\t1-For TimberLand\n\t\t\t2-For Adidas\n\t\t\t3-For Nike\n"<<endl;

    cin>>choice;

    switch(choice)
    {
   case 1:
        get_TimberLand();
        break;

      case 2:
        get_Adidas();
        break;

        case 3:
        get_Nike();
        break;

    }
}


int get_Shirts()
{

    cout<<"\tWelcome to Shirts Section"<<endl;

    cout<<"\n\t\t\t1-For Versace\n\t\t\t2-For Adidas\n\t\t\t3-For Nike\n"<<endl;

    cin>>choice;

    switch(choice)
    {
   case 1:
        get_Versace();
        break;

      case 2:
        get_Adi();
        break;

        case 3:
        get_Nikes();
        break;
}
}

int get_WristWatches()
{

    cout<<"\tWelcome to WristWatches Section"<<endl;

    cout<<"\n\t\t\t1-For Paul Smith\n\t\t\t2-For Rolex\n\t\t\t3-For Hublot\n"<<endl;

    cin>>choice;

    switch(choice)
    {
   case 1:
        get_PaulSmith();
        break;

      case 2:
        get_Rolex();
        break;

        case 3:
        get_Hublot();
        break;

}
}


int get_TimberLand()
{
    cout<<"\tWelcome to TimberLand Shoes Section"<<endl;

    cout<<"\tWe have quality Shoes of one year Guarantee"<<endl;

    cout<<"The Price for One Shoe is: "<<timberlandShoePrice<<endl;

    cout<<"The quantity we have is: "<<adidasShoeQty<<endl;

    cout<<"\tEnter the Quantity You Want to Purchase"<<endl;

    cin>>timberlandShoeQty1;

    if(timberlandShoeQty1>adidasShoeQty)
    {

       cout<< "Sorry we have only: "<<adidasShoeQty<<"in the store and you cannot order for more than that"<<endl;
    }

    else{

        cout<<"\t You've Entered "<<timberlandShoeQty1<<"Quantity"<<endl;

        cout<<"Your cost is: "<<adidasShoeQty*timberlandShoePrice<<endl;

        cout<<"Your tax payment is: "<<(adidasShoeQty*timberlandShoePrice)*tax<<endl;

        cout<<"Your Total Cost is: "<<(adidasShoeQty*timberlandShoePrice);
        cout<< + ((adidasShoeQty*timberlandShoePrice)*tax)<<endl;

        cout<<"\tDo You Want to us to deliver the goods to you?"<<endl;

        cout<<"\t\t\tEnter\n1-For Yes\n\t\t\t2-For No"<<endl;

        cin>>choice;

        if(choice==1)
        {
            cout<<"Your Delivery cost is: "<<deliveryCost<<endl;

            cout<<"Your Ground Total cost is: "<<(adidasShoeQty*timberlandShoePrice);
            cout<< + ((adidasShoeQty*timberlandShoePrice)*tax) + deliveryCost<<endl;

            cout<<"Thank you for patronizing us; we will deliver it to you within 24hours"<<endl;
        }

        else if(choice==2){
            cout<<"Thank you for patronizing us"<<endl;

        }



    }

    cout<<"Do You Want to Perform another Transaction?"<<endl;

   cout<<"\t\t\tEnter \n\t\t\t1-For Yes\n\t\t\t2-For No"<<endl;

        cin>>choice;
     if(choice==1)
     {
         cout<<"\t\tWhich Menu Do You want to go to?"<<endl;

         cout<<"\n\t\t\t1-For Shoes Menu\n\t\t\t2-For Shirts Menu\n\t\t\t3-For Wrist Watches Menu\n\t\t\t4-For Main Menu"<<endl;

         cin>>choice;

    switch(choice)
    {
   case 1:
        get_Shoes();
        break;

      case 2:
        get_Shirts();
        break;

        case 3:
        get_WristWatches();
        break;

        case 4:
        main();
        break;

    }

     }

      else if(choice==2){
            cout<<"Thank you once again for Patronizing us!\n\t\t\t Bye!!!"<<endl;

        }
}


int get_Adidas()
{
  cout<<"\tWelcome to Adidas Shoes Section"<<endl;

    cout<<"\tWe have quality Shoes of one year Guarantee"<<endl;

    cout<<"The Price for One Shoe is: "<<adidasShoePrice<<endl;

    cout<<"The quantity we have is: "<<adidasShoeQty<<endl;

    cout<<"\tEnter the Quantity You Want to Purchase"<<endl;

    cin>>adidasShoeQty1;

    if(adidasShoeQty1>adidasShoeQty)
    {

       cout<< "Sorry we have only: "<<adidasShoeQty<<"in the store and you cannot order for more than that"<<endl;
    }

    else{

        cout<<"\t You've Entered "<<adidasShoeQty1<<"Quantity"<<endl;

        cout<<"Your cost is: "<<adidasShoeQty*adidasShoePrice<<endl;

        cout<<"Your tax payment is: "<<(adidasShoeQty*adidasShoePrice)*tax<<endl;

        cout<<"Your Total Cost is: "<<(adidasShoeQty*adidasShoePrice);
        cout<< + ((adidasShoeQty*adidasShoePrice)*tax)<<endl;

        cout<<"\tDo You Want to us to deliver the goods to you?"<<endl;

        cout<<"\t\t\tEnter \n1-For Yes\n\t\t\t2-For No"<<endl;

        cin>>choice;

        if(choice==1)
        {
            cout<<"Your Delivery cost is: "<<deliveryCost<<endl;

            cout<<"Your Ground Total cost is: "<<(adidasShoeQty*adidasShoePrice);
            cout<< + ((adidasShoeQty*adidasShoePrice)*tax) + deliveryCost<<endl;

            cout<<"Thank you for patronizing us; we will deliver it to you within 24hours"<<endl;
        }

        else if(choice==2){
            cout<<"Thank you for patronizing us"<<endl;

        }



    }

    cout<<"Do You Want to Perform another Transaction?"<<endl;

   cout<<"\t\t\tEnter \n1-For Yes\n\t\t\t2-For No"<<endl;

        cin>>choice;
     if(choice==1)
     {
         cout<<"\t\tWhich Menu Do You want to go to?"<<endl;

         cout<<"\n\t\t\t 1-For Shoes Menu\n\t\t\t2-For Shirts Menu\t\t\t3-For Wrist Watches Menu\n\t\t\t4-For Main Menu"<<endl;

         cin>>choice;

    switch(choice)
    {
   case 1:
        get_Shoes();
        break;

      case 2:
        get_Shirts();
        break;

        case 3:
        get_WristWatches();
        break;

        case 4:
        main();
        break;

    }

     }

      else if(choice==2){
            cout<<"Thank you once again for Patronizing us!\n\t\t\t Bye!!!"<<endl;

        }
}

int get_Nike()
{
 cout<<"\tWelcome to Nike Shoes Section"<<endl;

    cout<<"\tWe have quality Shoes of one year Guarantee"<<endl;

    cout<<"The Price for One Shoe is: "<<nikeShoePrice<<endl;

    cout<<"The quantity we have is: "<<nikeShoeQty<<endl;

    cout<<"\tEnter the Quantity You Want to Purchase"<<endl;

    cin>>nikeShoeQty1;

    if(nikeShoeQty1>nikeShoeQty)
    {

       cout<< "Sorry we have only: "<<nikeShoeQty<<"in the store and you cannot order for more than that"<<endl;
    }

    else{

        cout<<"\t You've Entered "<<nikeShoeQty1<<"Quantity"<<endl;

        cout<<"Your cost is: "<<nikeShoeQty*nikeShoePrice<<endl;

        cout<<"Your tax payment is: "<<(nikeShoeQty*nikeShoePrice)*tax<<endl;

        cout<<"Your Total Cost is: "<<(nikeShoeQty*nikeShoePrice);
        cout<< + ((nikeShoeQty*nikeShoePrice)*tax)<<endl;

        cout<<"\tDo You Want to us to deliver the goods to you?"<<endl;

        cout<<"\t\t\tEnter \n1-For Yes\n\t\t\t2-For No"<<endl;

        cin>>choice;

        if(choice==1)
        {
            cout<<"Your Delivery cost is: "<<deliveryCost<<endl;

            cout<<"Your Ground Total cost is: "<<(nikeShoeQty*nikeShoePrice);
            cout<< + ((nikeShoeQty*nikeShoePrice)*tax) + deliveryCost<<endl;

            cout<<"Thank you for patronizing us; we will deliver it to you within 24hours"<<endl;
        }

        else if(choice==2){
            cout<<"Thank you for patronizing us"<<endl;

        }



    }

    cout<<"Do You Want to Perform another Transaction?"<<endl;

   cout<<"\t\t\tEnter \n1-For Yes\n\t\t\t2-For No"<<endl;

        cin>>choice;
     if(choice==1)
     {
         cout<<"\t\tWhich Menu Do You want to go to?"<<endl;

         cout<<"\n\t\t\t 1-For Shoes Menu\n\t\t\t2-For Shirts Menu\t\t\t3-For Wrist Watches Menu\n\t\t\t4-For Main Menu"<<endl;

         cin>>choice;

    switch(choice)
    {
   case 1:
        get_Shoes();
        break;

      case 2:
        get_Shirts();
        break;

        case 3:
        get_WristWatches();
        break;

        case 4:
        main();
        break;

    }

     }

      else if(choice==2){
            cout<<"Thank you once again for Patronizing us!\n\t\t\t Bye!!!"<<endl;

        }

}

// Shirt Section

int get_Versace()
{
     cout<<"\tWelcome to Versace Shirt Section"<<endl;

    cout<<"\tWe have quality Shirts of one year Guarantee"<<endl;

    cout<<"The Price for One Shirts is: "<<versacePrice<<endl;

    cout<<"The quantity we have is: "<<versaceQuantity<<endl;

    cout<<"\tEnter the Quantity You Want to Purchase"<<endl;

    cin>>versaceQuantity1;

    if(versaceQuantity1>versaceQuantity)
    {

       cout<< "Sorry we have only: "<<versaceQuantity<<"in the store and you cannot order for more than that"<<endl;
    }

    else{

        cout<<"\t You've Entered "<<versaceQuantity1<<"Quantity"<<endl;

        cout<<"Your cost is: "<<versaceQuantity*versacePrice<<endl;

        cout<<"Your tax payment is: "<<(versaceQuantity*versacePrice)*tax<<endl;

        cout<<"Your Total Cost is: "<<(versaceQuantity*versacePrice);
        cout<< + ((versaceQuantity*versacePrice)*tax)<<endl;

        cout<<"\tDo You Want to us to deliver the goods to you?"<<endl;

        cout<<"\t\t\tEnter \n1-For Yes\n\t\t\t2-For No"<<endl;

        cin>>choice;

        if(choice==1)
        {
            cout<<"Your Delivery cost is: "<<deliveryCost<<endl;

            cout<<"Your Ground Total cost is: "<<(versaceQuantity*versacePrice);
            cout<< + ((versaceQuantity*versacePrice)*tax) + deliveryCost<<endl;

            cout<<"Thank you for patronizing us; we will deliver it to you within 24hours"<<endl;
        }

        else if(choice==2){
            cout<<"Thank you for patronizing us"<<endl;

        }



    }

    cout<<"Do You Want to Perform another Transaction?"<<endl;

   cout<<"\t\t\tEnter \n1-For Yes\n\t\t\t2-For No"<<endl;

        cin>>choice;
     if(choice==1)
     {
         cout<<"\t\tWhich Menu Do You want to go to?"<<endl;

         cout<<"\n\t\t\t 1-For Shoes Menu\n\t\t\t2-For Shirts Menu\t\t\t3-For Wrist Watches Menu\n\t\t\t4-For Main Menu"<<endl;

         cin>>choice;

    switch(choice)
    {
   case 1:
        get_Shoes();
        break;

      case 2:
        get_Shirts();
        break;

        case 3:
        get_WristWatches();
        break;

        case 4:
        main();
        break;

    }

     }

      else if(choice==2){
            cout<<"Thank you once again for Patronizing us!\n\t\t\t Bye!!!"<<endl;

        }

}

int get_Adi()
{
      cout<<"\tWelcome to Adidas Shirt Section"<<endl;

    cout<<"\tWe have quality Shirts of one year Guarantee"<<endl;

    cout<<"The Price for One Shirt is: "<<AdidasShirtsPrice<<endl;

    cout<<"The quantity we have is: "<<AdidasShirtsQty<<endl;

    cout<<"\tEnter the Quantity You Want to Purchase"<<endl;

    cin>>AdidasShirtsQty1;

    if(AdidasShirtsQty1>AdidasShirtsQty)
    {

       cout<< "Sorry we have only: "<<AdidasShirtsQty<<"in the store and you cannot order for more than that"<<endl;
    }

    else{

        cout<<"\t You've Entered "<<AdidasShirtsQty1<<"Quantity"<<endl;

        cout<<"Your cost is: "<<AdidasShirtsQty*AdidasShirtsPrice<<endl;

        cout<<"Your tax payment is: "<<(AdidasShirtsQty*AdidasShirtsPrice)*tax<<endl;

        cout<<"Your Total Cost is: "<<(AdidasShirtsQty*AdidasShirtsPrice);
        cout<< + ((AdidasShirtsQty*AdidasShirtsPrice)*tax)<<endl;

        cout<<"\tDo You Want to us to deliver the goods to you?"<<endl;

        cout<<"\t\t\tEnter \n1-For Yes\n\t\t\t2-For No"<<endl;

        cin>>choice;

        if(choice==1)
        {
            cout<<"Your Delivery cost is: "<<deliveryCost<<endl;

            cout<<"Your Ground Total cost is: "<<(AdidasShirtsQty*AdidasShirtsPrice);
            cout<< + ((AdidasShirtsQty*AdidasShirtsPrice)*tax) + deliveryCost<<endl;

            cout<<"Thank you for patronizing us; we will deliver it to you within 24hours"<<endl;
        }

        else if(choice==2){
            cout<<"Thank you for patronizing us"<<endl;

        }



    }

    cout<<"Do You Want to Perform another Transaction?"<<endl;

   cout<<"\t\t\tEnter \n1-For Yes\n\t\t\t2-For No"<<endl;

        cin>>choice;
     if(choice==1)
     {
         cout<<"\t\tWhich Menu Do You want to go to?"<<endl;

         cout<<"\n\t\t\t 1-For Shoes Menu\n\t\t\t2-For Shirts Menu\t\t\t3-For Wrist Watches Menu\n\t\t\t4-For Main Menu"<<endl;

         cin>>choice;

    switch(choice)
    {
   case 1:
        get_Shoes();
        break;

      case 2:
        get_Shirts();
        break;

        case 3:
        get_WristWatches();
        break;

        case 4:
        main();
        break;

    }

     }

      else if(choice==2){
            cout<<"Thank you once again for Patronizing us!\n\t\t\t Bye!!!"<<endl;

        }
}

int get_Nikes()
{
      cout<<"\tWelcome to Nike Shirt Section"<<endl;

    cout<<"\tWe have quality Shirts of one year Guarantee"<<endl;

    cout<<"The Price for One Shirt is: "<<nikesPrice<<endl;

    cout<<"The quantity we have is: "<<nikesQuantity<<endl;

    cout<<"\tEnter the Quantity You Want to Purchase"<<endl;

    cin>>AdidasShirtsQty1;

    if(AdidasShirtsQty1>nikesQuantity)
    {

       cout<< "Sorry we have only: "<<nikesQuantity<<"in the store and you cannot order for more than that"<<endl;
    }

    else{

        cout<<"\t You've Entered "<<AdidasShirtsQty1<<"Quantity"<<endl;

        cout<<"Your cost is: "<<nikesQuantity*nikesPrice<<endl;

        cout<<"Your tax payment is: "<<(nikesQuantity*nikesPrice)*tax<<endl;

        cout<<"Your Total Cost is: "<<(nikesQuantity*nikesPrice);
        cout<< + ((nikesQuantity*nikesPrice)*tax)<<endl;

        cout<<"\tDo You Want to us to deliver the goods to you?"<<endl;

        cout<<"\t\t\tEnter \n1-For Yes\n\t\t\t2-For No"<<endl;

        cin>>choice;

        if(choice==1)
        {
            cout<<"Your Delivery cost is: "<<deliveryCost<<endl;

            cout<<"Your Ground Total cost is: "<<(nikesQuantity*nikesPrice);
            cout<< + ((nikesQuantity*nikesPrice)*tax) + deliveryCost<<endl;

            cout<<"Thank you for patronizing us; we will deliver it to you within 24hours"<<endl;
        }

        else if(choice==2){
            cout<<"Thank you for patronizing us"<<endl;

        }



    }

    cout<<"Do You Want to Perform another Transaction?"<<endl;

   cout<<"\t\t\tEnter \n1-For Yes\n\t\t\t2-For No"<<endl;

        cin>>choice;
     if(choice==1)
     {
         cout<<"\t\tWhich Menu Do You want to go to?"<<endl;

         cout<<"\n\t\t\t 1-For Shoes Menu\n\t\t\t2-For Shirts Menu\t\t\t3-For Wrist Watches Menu\n\t\t\t4-For Main Menu"<<endl;

         cin>>choice;

    switch(choice)
    {
   case 1:
        get_Shoes();
        break;

      case 2:
        get_Shirts();
        break;

        case 3:
        get_WristWatches();
        break;

        case 4:
        main();
        break;

    }

     }

      else if(choice==2){
            cout<<"Thank you once again for Patronizing us!\n\t\t\t Bye!!!"<<endl;

        }
}


int get_PaulSmith()
{
         cout<<"\tWelcome to Paul Smith Wrist Watch Section"<<endl;

    cout<<"\tWe have quality Wrist Watches of one year Guarantee"<<endl;

    cout<<"The Price for One Wrist Watch is: "<<paulSmithPrice<<endl;

    cout<<"The quantity we have is: "<<paulSmithQuantity<<endl;

    cout<<"\tEnter the Quantity You Want to Purchase"<<endl;

    cin>>paulSmithQuantity1;

    if(paulSmithQuantity1>paulSmithQuantity)
    {

       cout<< "Sorry we have only: "<<paulSmithQuantity<<"in the store and you cannot order for more than that"<<endl;
    }

    else{

        cout<<"\t You've Entered "<<paulSmithQuantity1<<"Quantity"<<endl;

        cout<<"Your cost is: "<<paulSmithQuantity*paulSmithPrice<<endl;

        cout<<"Your tax payment is: "<<(paulSmithQuantity*paulSmithPrice)*tax<<endl;

        cout<<"Your Total Cost is: "<<(paulSmithQuantity*paulSmithPrice);
        cout<< + ((paulSmithQuantity*paulSmithPrice)*tax)<<endl;

        cout<<"\tDo You Want to us to deliver the goods to you?"<<endl;

        cout<<"\t\t\tEnter \n1-For Yes\n\t\t\t2-For No"<<endl;

        cin>>choice;

        if(choice==1)
        {
            cout<<"Your Delivery cost is: "<<deliveryCost<<endl;

            cout<<"Your Ground Total cost is: "<<(paulSmithQuantity*paulSmithPrice);
            cout<< + ((paulSmithQuantity*paulSmithPrice)*tax) + deliveryCost<<endl;

            cout<<"Thank you for patronizing us; we will deliver it to you within 24hours"<<endl;
        }

        else if(choice==2){
            cout<<"Thank you for patronizing us"<<endl;

        }



    }

    cout<<"Do You Want to Perform another Transaction?"<<endl;

   cout<<"\t\t\tEnter \n1-For Yes\n\t\t\t2-For No"<<endl;

        cin>>choice;
     if(choice==1)
     {
         cout<<"\t\tWhich Menu Do You want to go to?"<<endl;

         cout<<"\n\t\t\t 1-For Shoes Menu\n\t\t\t2-For Shirts Menu\t\t\t3-For Wrist Watches Menu\n\t\t\t4-For Main Menu"<<endl;

         cin>>choice;

    switch(choice)
    {
   case 1:
        get_Shoes();
        break;

      case 2:
        get_Shirts();
        break;

        case 3:
        get_WristWatches();
        break;

        case 4:
        main();
        break;

    }

     }

      else if(choice==2){
            cout<<"Thank you once again for Patronizing us!\n\t\t\t Bye!!!"<<endl;

        }
}

int get_Rolex()
{

             cout<<"\tWelcome to Rolex Wrist Watch Section"<<endl;

    cout<<"\tWe have quality Wrist Watches of one year Guarantee"<<endl;

    cout<<"The Price for One Wrist Watch is: "<<rolexPrice<<endl;

    cout<<"The quantity we have is: "<<rolexQuantity<<endl;

    cout<<"\tEnter the Quantity You Want to Purchase"<<endl;

    cin>>rolexQuantity1;

    if(rolexQuantity1>rolexQuantity)
    {

       cout<< "Sorry we have only: "<<rolexQuantity<<"in the store and you cannot order for more than that"<<endl;
    }

    else{

        cout<<"\t You've Entered "<<rolexQuantity1<<"Quantity"<<endl;

        cout<<"Your cost is: "<<rolexQuantity*rolexPrice<<endl;

        cout<<"Your tax payment is: "<<(rolexQuantity*rolexPrice)*tax<<endl;

        cout<<"Your Total Cost is: "<<(rolexQuantity*rolexPrice);
        cout<< + ((rolexQuantity*rolexPrice)*tax)<<endl;

        cout<<"\tDo You Want to us to deliver the goods to you?"<<endl;

        cout<<"\t\t\tEnter \n1-For Yes\n\t\t\t2-For No"<<endl;

        cin>>choice;

        if(choice==1)
        {
            cout<<"Your Delivery cost is: "<<deliveryCost<<endl;

            cout<<"Your Ground Total cost is: "<<(rolexQuantity*rolexPrice);
            cout<< + ((rolexQuantity*rolexPrice)*tax) + deliveryCost<<endl;

            cout<<"Thank you for patronizing us; we will deliver it to you within 24hours"<<endl;
        }

        else if(choice==2){
            cout<<"Thank you for patronizing us"<<endl;

        }



    }

    cout<<"Do You Want to Perform another Transaction?"<<endl;

   cout<<"\t\t\tEnter \n1-For Yes\n\t\t\t2-For No"<<endl;

        cin>>choice;
     if(choice==1)
     {
         cout<<"\t\tWhich Menu Do You want to go to?"<<endl;

         cout<<"\n\t\t\t 1-For Shoes Menu\n\t\t\t2-For Shirts Menu\t\t\t3-For Wrist Watches Menu\n\t\t\t4-For Main Menu"<<endl;

         cin>>choice;

    switch(choice)
    {
   case 1:
        get_Shoes();
        break;

      case 2:
        get_Shirts();
        break;

        case 3:
        get_WristWatches();
        break;

        case 4:
        main();
        break;

    }

     }

      else if(choice==2){
            cout<<"Thank you once again for Patronizing us!\n\t\t\t Bye!!!"<<endl;

        }
}

int get_Hublot()
{

    cout<<"\tWelcome to Hublot Wrist Watch Section"<<endl;

    cout<<"\tWe have quality Wrist Watches of one year Guarantee"<<endl;

    cout<<"The Price for One Wrist Watch is: "<<hublotPrice<<endl;

    cout<<"The quantity we have is: "<<hublotQuantity<<endl;

    cout<<"\tEnter the Quantity You Want to Purchase"<<endl;

    cin>>hublotQuantity1;

    if(hublotQuantity1>hublotQuantity)
    {

       cout<< "Sorry we have only: "<<hublotQuantity<<"in the store and you cannot order for more than that"<<endl;
    }

    else{

        cout<<"\t You've Entered "<<hublotQuantity1<<"Quantity"<<endl;

        cout<<"Your cost is: "<<hublotQuantity*hublotPrice<<endl;

        cout<<"Your tax payment is: "<<(hublotQuantity*hublotPrice)*tax<<endl;

        cout<<"Your Total Cost is: "<<(hublotQuantity*hublotPrice);
        cout<< + ((hublotQuantity*hublotPrice)*tax)<<endl;

        cout<<"\tDo You Want to us to deliver the goods to you?"<<endl;

        cout<<"\t\t\tEnter \n1-For Yes\n\t\t\t2-For No"<<endl;

        cin>>choice;

        if(choice==1)
        {
            cout<<"Your Delivery cost is: "<<deliveryCost<<endl;

            cout<<"Your Ground Total cost is: "<<(hublotQuantity*hublotPrice);
            cout<< + ((hublotQuantity*hublotPrice)*tax) + deliveryCost<<endl;

            cout<<"Thank you for patronizing us; we will deliver it to you within 24hours"<<endl;
        }

        else if(choice==2){
            cout<<"Thank you for patronizing us"<<endl;

        }



    }

    cout<<"Do You Want to Perform another Transaction?"<<endl;

   cout<<"\t\t\tEnter \n1-For Yes\n\t\t\t2-For No"<<endl;

        cin>>choice;
     if(choice==1)
     {
         cout<<"\t\tWhich Menu Do You want to go to?"<<endl;

         cout<<"\n\t\t\t 1-For Shoes Menu\n\t\t\t2-For Shirts Menu\t\t\t3-For Wrist Watches Menu\n\t\t\t4-For Main Menu"<<endl;

         cin>>choice;

    switch(choice)
    {
   case 1:
        get_Shoes();
        break;

      case 2:
        get_Shirts();
        break;

        case 3:
        get_WristWatches();
        break;

        case 4:
        main();
        break;

    }

     }

      else if(choice==2){
            cout<<"Thank you once again for Patronizing us!\n\t\t\t Bye!!!"<<endl;

        }
}
