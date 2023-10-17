#include<bits/stdc++.h>
using namespace std;
class Cars
{
    protected:
    string brand;
    string model;
    int year;
    int doors;
    int cc;
    int price;
    string color;
    int seater;
    int airbags;
    bool ledProjectors;
    public:
    Cars()
    {
        cout<<"Cars Constructor"<<endl;
        ledProjectors=false;
    }
    ~Cars()
    {
        cout<<"Cars Destructor"<<endl;
    }
    string arr[10]={"Verna","Creta","Fortuner","Swift","Mercedes","BMW","Ferrari","Kia","Tesla","Rubicon"};
};

class Verna : public Cars
{
    public:
    Verna()
    {
        brand="hyundai";
        model="Verna";
        doors=4;
        cc=1493;
        seater=5;
        airbags=2;
        ledProjectors=true;
    }
    void setValues()
    {
        cout<<"For VERNA"<<endl;
        cout<<"Which year model you want:";
        cin>>year;
        cout<<"Range of car you want:";
        cin>>price;
        cout<<"Your choice Color:";
        cin>>color;
        cout <<"Year-"<< year << " " <<"Brand-"<< brand << " " <<"Model-"<< model << " "<< "cc-"<<cc <<" "<<"No. of Doors-" <<doors<<" "<<"Rs"<<price<<" "<<"Color-"<<color<<" "<<"No. of seats:"<<seater<<" "<<"No. of Airbags:"<<airbags<<" "<<"Led Projectors-"<<ledProjectors<<endl;
    }
};

class Fortuner : public Cars
{
    public:
    Fortuner()
    {
        brand="toyota";
        model="Fortuner";
        doors=4;
        cc=1493;
        seater=5;
        airbags=2;;
    }
    void setValues2()
    {
        cout<<"For FORTUNER"<<endl;
        cout<<"Which year model you want:";
        cin>>year;
        cout<<"Range of car you want:";
        cin>>price;
        cout<<"Your choice Color:";
        cin>>color;
        cout <<"Year-"<< year << " " <<"Brand-"<< brand << " " <<"Model-"<< model << " "<< "cc-"<<cc <<" "<<"No. of Doors-" <<doors<<" "<<"Rs"<<price<<" "<<"Color-"<<color<<" "<<"No. of seats:"<<seater<<" "<<"No. of Airbags:"<<airbags<<" "<<"Led Projectors-"<<ledProjectors<<endl;

    }
};

class Creta : public Cars
{
    private:
    string setType;
    public:
    Creta()
    {
        brand="hyundai";
        model="Creta";
        doors=4;
        cc=1493;
        seater=5;
        airbags=2;
        ledProjectors=true;
    }
    void setValues3()
    {
        cout<<"For CRETA"<<endl;
        cout<<"Which year model you want:";
        cin>>year;
        cout<<"Range of car you want:";
        cin>>price;
        cout<<"Your choice Color:";
        cin>>color;
        cout<<"What type you want(Base Model OR High end Model):";
        cin>>setType;
        cout <<"Year-"<< year<< " " <<"Brand-"<< brand << " " <<"Model-"<< model << " "<< "cc-"<<cc <<" "<<"No. of Doors-" <<doors<<" "<<"Rs"<<price<<" "<<"Color-"<<color<<" "<<"No. of seats:"<<seater<<" "<<"No. of Airbags:"<<airbags<<" "<<"Led Projectors-"<<ledProjectors<<"Type-"<<setType<<endl;

    }
};

int main()
{
    Verna verna;
    Fortuner fortuner;
    Creta creta;

    verna.setValues();
    fortuner.setValues2();
    creta.setValues3();
}
