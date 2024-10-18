#include<iostream>
using namespace std;
int main()
{
    int start,catagories,items,price,quantity,more,bill = 0,last_bill = 0,bill2,z;
    cout<<endl<<endl<<endl<<"Enter 1 for menu ";
    cout<<endl;
    cout<<"Enter your Number :-  ";
    cin>>start;
    start:
    more = 0;
    switch (start)
    {
        case 1:
            cout<<endl<<endl<<endl<<"Enter 1 for Italian"<<endl;
            cout<<"Enter 2 for South Indian"<<endl;
            cout<<"Enter 3 for Gujarati";
            cout<<"Enetr 4 for Chines";
            cout<<"Enter 5 for Spice";
            cout<<"Enter 6 for Street food";
            cout<<"Enter 7 for Salads";
            cout<<"Enter 8 for Ice Cream";
            cout<<"Enter 9 for Coco & Thick shake";
            cout<<"Enter 10 for Cold Drinks";
            cout<<"Enter your Number :-  ";
            cin>>catagories;
            switch (catagories)
            {
                case 1:
                    cout<<endl<<endl<<endl<<"Enter 1 for Pesto Veggie Pizza"<<endl;
                    cout<<"Enter 2 for Spinach and Feta Pizza"<<endl;
                    cout<<"Enter 3 for Veggie Supreme Pizza"<<endl;
                    cout<<"Enter 4 for Margherita Pizza";
                    cout<<"Enter your Number :-  ";
                    cin>>items;
                    switch (items)
                    {
                        case 1:
                            cout<<endl<<endl<<endl<<"You ordered  Pesto Veggie Pizza"<<endl;
                            cout<<"Pesto Veggie Pizza - 120"<<endl;
                            price = 120;
                            break;
                        case 2:
                            cout<<endl<<endl<<endl<<"You ordered Spinach and Feta Pizza "<<endl;
                            cout<<"Spinach and Feta Pizza - 190"<<endl;
                            price = 190;
                            break;
                        case 3:
                            cout<<endl<<endl<<endl<<"You ordered Veggie Supreme Pizza "<<endl;
                            cout<<"Veggie Supreme Pizza - 260"<<endl;
                            price = 260;
                            break; 
                        case 4:
                            cout<<endl<<endl<<endl<<"You ordered  Margherita Pizza"<<endl;
                            cout<<"Margherita Pizza - 399"<<endl;
                            price = 399;
                            break;
                        default:
                            break;
                    }

                break;
                    // 324234325
                    // 435252354
                    // 4235245234 
                    // 2345245234
                case 2:
                    cout<<endl<<endl<<endl<<"Enter 1 for You ordered"<<endl;
                    cout<<"Enter 2 for Idli with Sambar"<<endl;
                    cout<<"Enter 3 for Uttapam"<<endl;
                    cout<<"Enter 4 for Masala Dosa";
                    cout<<"Enter your Number :-  ";
                    cin>>items;
                    switch (items)
                    {
                        case 1:
                            cout<<endl<<endl<<endl<<"You ordered Vada"<<endl;
                            cout<<"Vada - 70"<<endl;
                            price = 70;
                            break;
                        case 2:
                            cout<<endl<<endl<<endl<<"You ordered Sambar"<<endl;
                            cout<<"Sambar - 80"<<endl;
                            price = 80;
                            break;
                        case 3:
                            cout<<endl<<endl<<endl<<"You ordered Uttapam"<<endl;
                            cout<<"Uttapam - 100"<<endl;
                            price = 100;
                            break; 
                        case 4:
                            cout<<endl<<endl<<endl<<"You ordered Masala Dosa"<<endl;
                            cout<<" - Masala Dosa"<<endl;
                            price = 120;
                            break;
                        default:
                            break;
                    }
                break;




                case 3:
                    cout<<endl<<endl<<endl<<"Enter 1 for a"<<endl;
                    cout<<"Enter 2 for "<<endl;
                    cout<<"Enter 3 for "<<endl;
                    cout<<"Enter 4 for ";
                    cout<<"Enter your Number :-  ";
                    cin>>items;
                    switch (items)
                    {
                        case 1:
                            cout<<endl<<endl<<endl<<"You order"<<endl;
                            cout<<" - "<<endl;
                            price = ;
                            break;
                        case 2:
                            cout<<endl<<endl<<endl<<"You order "<<endl;
                            cout<<" - "<<endl;
                            price = ;
                            break;
                        case 3:
                            cout<<endl<<endl<<endl<<"You order "<<endl;
                            cout<<" - "<<endl;
                            price = ;
                            break; 
                        case 4:
                            cout<<endl<<endl<<endl<<"You order"<<endl;
                            cout<<" - "<<endl;
                            price = ;
                            break;
                        default:
                            break;
                    }
                break;





                case 4:
                    cout<<endl<<endl<<endl<<"Enter 1 for a"<<endl;
                    cout<<"Enter 2 for "<<endl;
                    cout<<"Enter 3 for "<<endl;
                    cout<<"Enter 4 for ";
                    cout<<"Enter your Number :-  ";
                    cin>>items;
                    switch (items)
                    {
                        case 1:
                            cout<<endl<<endl<<endl<<"You order"<<endl;
                            cout<<" - "<<endl;
                            price = ;
                            break;
                        case 2:
                            cout<<endl<<endl<<endl<<"You order "<<endl;
                            cout<<" - "<<endl;
                            price = ;
                            break;
                        case 3:
                            cout<<endl<<endl<<endl<<"You order "<<endl;
                            cout<<" - "<<endl;
                            price = ;
                            break; 
                        case 4:
                            cout<<endl<<endl<<endl<<"You order"<<endl;
                            cout<<" - "<<endl;
                            price = ;
                            break;
                        default:
                            break;
                    }
                break;
    
        
        
        
        
                default:
                cout<<"This is not valid for menu";
                break;
    }

    return 0;
}