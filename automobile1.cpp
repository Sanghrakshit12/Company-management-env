#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;

class automobile{
  private:
    string brand="Tata";
  public:
    void getbrand(){
      cout << "Tata" << endl;
    }
};

class personal: public automobile{
  private:
    string model;
    float mileage;
    int cc;
    string fuel;
    float price;
    int weight;
    int qty=0;
    int seats;
  public:
    void display(){
      cout << "Model: " << model << endl;
      cout << "Mileage(kmpl): " << mileage << endl;
      cout << "CC: " << cc << endl;
      cout << "Fuel: " << fuel << endl;
      cout << "Price(Lakhs): " << price << endl;
      cout << "Weight(kgs): " << weight << endl;
      cout << "Seats: " << seats << endl << endl;
      cout << "Quantity: " << qty << endl;
    }
    personal(string modelname,float mil,int ccc,string f,float pr,int wt,int s){
        model=modelname;
        mileage=mil;
        cc=ccc;
        fuel=f;
        price=pr;
        weight=wt;
        seats=s;
    }
    friend void addpersonal(personal &p);
    friend void delpersonal(personal &p);
};

class travel: public automobile{
  private:
    string model;
    float mileage;
    int cc;
    string fuel;
    float price;
    int weight;
    int qty=0;
    int seats;
  public:
    void display(){
      cout << "Model: " << model << endl;
      cout << "Mileage(kmpl): " << mileage << endl;
      cout << "CC: " << cc << endl;
      cout << "Fuel: " << fuel << endl;
      cout << "Price(Lakhs): " << price << endl;
      cout << "Weight(kgs): " << weight << endl;
      cout << "Seats: " << seats << endl << endl;
      cout << "Quantity: " << qty << endl;
    }
    travel(string modelname,float mil,int ccc,string f,float pr,int wt,int s){
        model=modelname;
        mileage=mil;
        cc=ccc;
        fuel=f;
        price=pr;
        weight=wt;
        seats=s;
    }
    friend void addtravel(travel &t);
    friend void deltravel(travel &t);
};

class goods: public automobile{
  private:
    string model;
    float mileage;
    int cc;
    string fuel;
    float price;
    int weight;
    int qty=0;
    int carry;
  public:
    void display(){
      cout << "Model: " << model << endl;
      cout << "Mileage(kmpl): " << mileage << endl;
      cout << "CC: " << cc << endl;
      cout << "Fuel: " << fuel << endl;
      cout << "Price(Lakhs): " << price << endl;
      cout << "Weight(kgs): " << weight << endl;
      cout << "Weight capacity: " << carry << endl << endl;
      cout << "Quantity: " << qty << endl;
    }
    goods(string modelname,float mil,int ccc,string f,float pr,int wt,int crry){
        model=modelname;
        mileage=mil;
        cc=ccc;
        fuel=f;
        price=pr;
        weight=wt;
        carry=crry;
    }
    friend void addgoods(goods &g);
    friend void delgoods(goods &g);
};

int loginadmin(){
   string pass ="";
   char ch;
   cout << "Enter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "1234"){
      cout << "\nAccess Granted." << endl;
      system("PAUSE");
      system("CLS");
      return 1;

   }else{
      cout << "\nInvalid password. Please Try Again.\n";
      system("PAUSE");
      system("CLS");
      loginadmin();
   }
}

int loginemployee(){
   string pass ="";
   char ch;
   cout << "Enter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "4321"){
      cout << "\nAccess Granted." << endl;
      system("PAUSE");
      system("CLS");
      return 1;

   }else{
      cout << "\nInvalid password. Please Try Again.\n";
      system("PAUSE");
      system("CLS");
      loginemployee();
   }
}

void addpersonal(personal &p){
    int q;
    cout << "How many would you like to add: ";
    cin >> q;
    p.qty=p.qty+q;
    cout << "The quantity of vehicles is " << p.qty;
}

void addtravel(travel &t){
    int q;
    cout << "How many would you like to add: ";
    cin >> q;
    t.qty=t.qty+q;
    cout << "The quantity of vehicles is " << t.qty;
}

void addgoods(goods &g){
    int q;
    cout << "How many would you like to add: ";
    cin >> q;
    g.qty=g.qty+q;
    cout << "The quantity of vehicles is " << g.qty;
}

void delpersonal(personal &p){
    int q;
    cout << "How many would you like to remove: ";
    cin >> q;
    p.qty=p.qty-q;
    cout << "The quantity of vehicles is " << p.qty;
}

void deltravel(travel &t){
    int q;
    cout << "How many would you like to remove: ";
    cin >> q;
    t.qty=t.qty-q;
    cout << "The quantity of vehicles is " << t.qty;
}

void delgoods(goods &g){
    int q;
    cout << "How many would you like to remove: ";
    cin >> q;
    g.qty=g.qty-q;
    cout << "The quantity of vehicles is " << g.qty;
}

int main(){
    personal tiago("Tiago",26.49,1199,"Petrol/CNG",5.40,935,5);
    personal altroz("Altroz",23.03,1497,"Diesel",6.30,980,5);
    personal tigor("Tigor",26.49,1199,"CNG",6.00,992,5);
    personal harrier("Harrier",16.35,1956,"Diesel",14.70,1650,5);
    personal nexon("Nexon",16.3,1199,"Petrol/Diesel",7.59,1179,5);
    travel magic("Magic",20.39,798,"Diesel",7.14,1600,10);
    travel ebus("Electric Bus",150,0,"Electric",220,16200,40);
    goods yodha("Yodha",12,2956,"Diesel",6.95,1850,1100);
    goods intra("Intra",17.6,1496,"Diesel",7.30,1265,1300);
    goods ace("Ace",25,694,"Petrol/Diesel",4.00,800,710);
    cout << "WELCOME TO TATA MOTORS" << endl;
    int c=0;
    do{
    int x;
    cout << "Choose:\n1. Admin\n2. Customer\n4. Exit\nYour choice: ";
    cin >> x;
    switch(x){
      case 1:
      if(loginadmin()==1){
        int d=0;
        do{
            int y;
            cout << "Choose:\n1. Automobile\n2. Exit\nYour choice: ";
            cin >> y;
            switch(y){
                case 1:
                int e=0;
                do{
                    int z;
                    cout << "Choose:\n1. Display vehicles for personal use\n2. Display vehicles for travel\n3. Display vehicles for carrying goods\n4. Add vehicles for personal use\n5. Add vehicles for travel\n6. Add vehicles for carrying goods\n7. Remove vehicles for personal use\n8. Remove vehicles for travel\n9. Remove vehicles for carrying goods\nYour choice: ";
                    cin >> z;
                    switch(z){
                        case 1:
                        cout << endl;
                        tiago.display();
                        altroz.display();
                        tigor.display();
                        harrier.display();
                        nexon.display();
                        break;
                        case 2:
                        cout << endl;
                        magic.display();
                        ebus.display();
                        break;
                        case 3:
                        cout << endl;
                        yodha.display();
                        intra.display();
                        ace.display();
                        break;
                        case 4:
                        cout << endl;
                        int f;
                        cout << "Which model do you want to add:\n1.Tiago\n2.Altroz\n3.Harrier\n4.Nexon\nYour choice: ";
                        cin >> f;
                        switch(f){
                            case 1:
                            addpersonal(tiago);
                            break;
                            case 2:
                            addpersonal(altroz);
                            break;
                            case 3:
                            addpersonal(harrier);
                            break;
                            case 4:
                            addpersonal(nexon);
                            break;
                            default:
                            e=1;
                            break;
                        }
                        break;
                        case 5:
                        cout << endl;
                        int g;
                        cout << "Which model do you want to add:\n1.Magic\n2.Electric Bus\nYour choice: ";
                        cin >> g;
                        switch(g){
                            case 1:
                            addtravel(magic);
                            break;
                            case 2:
                            addtravel(ebus);
                            break;
                            default:
                            e=1;
                            break;
                        }
                        break;
                        case 6:
                        cout << endl;
                        int h;
                        cout << "Which model do you want to add:\n1.Yodha\n2.Intra\n3.Ace Gold\nYour choice: ";
                        cin >> h;
                        switch(h){
                            case 1:
                            addgoods(yodha);
                            break;
                            case 2:
                            addgoods(intra);
                            break;
                            case 3:
                            addgoods(ace);
                            break;
                            default:
                            e=1;
                            break;
                        }
                        break;
                        case 7:
                        cout << endl;
                        int i;
                        cout << "Which model do you want to remove:\n1.Tiago\n2.Altroz\n3.Harrier\n4.Nexon\nYour choice: ";
                        cin >> i;
                        switch(i){
                            case 1:
                            delpersonal(tiago);
                            break;
                            case 2:
                            delpersonal(altroz);
                            break;
                            case 3:
                            delpersonal(harrier);
                            break;
                            case 4:
                            delpersonal(nexon);
                            break;
                            default:
                            e=1;
                            break;
                        }
                        break;
                        case 8:
                        cout << endl;
                        int j;
                        cout << "Which model do you want to add:\n1.Magic\n2.Electric Bus\nYour choice: ";
                        cin >> j;
                        switch(j){
                            case 1:
                            deltravel(magic);
                            break;
                            case 2:
                            deltravel(ebus);
                            break;
                            default:
                            e=1;
                            break;
                        }
                        break;
                        case 9:
                        cout << endl;
                        int k;
                        cout << "Which model do you want to add:\n1.Yodha\n2.Intra\n3.Ace Gold\nYour choice: ";
                        cin >> k;
                        switch(k){
                            case 1:
                            delgoods(yodha);
                            break;
                            case 2:
                            delgoods(intra);
                            break;
                            case 3:
                            delgoods(ace);
                            break;
                            default:
                            e=1;
                            break;
                        }
                        break;
                        default:
                        e=1;
                        break;
                    }
                }while(e==0);
            }
        }while(d==0);
      };
    }
  }while(c==0);
}