#include <iostream>
#include <string>
using namespace std;
struct Booking
{
    long passID;
    int seat;
    int classType;
    double fare=100.32;
};
struct Train
{   
    long TrainID;
    char dest[50];
    int no_of_bookings;
    struct Booking* bookings;
    double total_fare=0.0;
};
int main()
{
    bool running=true;
    int n=1;
    
    struct Train* t=(struct Train*)malloc(3*sizeof(struct Train));
    t[0].TrainID=1000;
    t[1].TrainID=1001;
    t[2].TrainID=1002;

    strcpy(t[0].dest,"Kolkata");
    strcpy(t[1].dest,"Jaipur");
    strcpy(t[2].dest,"Mumbais");

    t[0].no_of_bookings=-1;
    t[1].no_of_bookings=-1;
    t[2].no_of_bookings=-1;

    t[0].bookings=(struct Booking*)malloc(3*sizeof(struct Booking));
    t[1].bookings=(struct Booking*)malloc(3*sizeof(struct Booking));
    t[2].bookings=(struct Booking*)malloc(3*sizeof(struct Booking));

    while(running)
    {
        int ch;
        cout<<"Another Booking?"<<endl;
        cin>>ch;
        if(!ch)     
            break;
        
        long tid;
        cout<<"Enter the Train ID:"<<endl;
        cin>>tid;
        for(int i=0;i<3;i++)
        {
            if(t[i].TrainID==tid)
            {
                t[i].no_of_bookings++;
                cout<<"Enter the Passenger ID:"<<endl;
                cin>>t[i].bookings[t[i].no_of_bookings].passID;
                
                int seat_no;
                cout<<"Enter the seat no. :"<<endl;
                cin>>seat_no;
                for(int j=0;j<t[i].no_of_bookings;j++)
                {
                    if(seat_no==t[i].bookings[j].seat)
                    {
                        cout<<"Seat occupied!"<<endl;
                        return 0;
                    }
                }
                t[i].bookings[t[i].no_of_bookings].seat=seat_no;
                cout<<"Enter Class Type:"<<endl;
                cin>>t[i].bookings[t[i].no_of_bookings].classType;

                t[i].total_fare+=t[i].bookings[t[i].no_of_bookings].fare;
            }
        }
    }
    cout<<"Total revenue generated per train:"<<endl;
    for(int i=0;i<3;i++)
        cout<<"Train "<<i<<": "<<t[i].total_fare<<endl;
    return 0;
}