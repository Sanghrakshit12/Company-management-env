#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
#include <string>
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
    //int qty=0;
    int seats;
  public:
    int qty=0;
    void display(){
      cout << "- - - - - - - - - - - - - - - " << endl;
      cout << "| Model         |  " << model << endl;
      cout << "| Mileage(kmpl) |  " << mileage << endl;
      cout << "| Engine(cc)    |  " << cc << endl;
      cout << "| Fuel type     |  " << fuel << endl;
      cout << "| Price(Lakhs)  |  " << price << endl;
      cout << "| Weight(kgs)   |  " << weight << endl;
      cout << "| Seats         |  " << seats << endl;
      cout << "| Quantity      |  " << qty << endl;
      cout << "- - - - - - - - - - - - - - - " << endl;
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
    friend void operator -(int num,personal &p);
};

class travel: public automobile{
  private:
    string model;
    float mileage;
    int cc;
    string fuel;
    float price;
    int weight;
    int seats;
  public:
    int qty=0;
    void display(){
      cout << "- - - - - - - - - - - - - - - " << endl;
      cout << "| Model         |  " << model << endl;
      cout << "| Mileage(kmpl) |  " << mileage << endl;
      cout << "| Engine(cc)    |  " << cc << endl;
      cout << "| Fuel type     |  " << fuel << endl;
      cout << "| Price(Lakhs)  |  " << price << endl;
      cout << "| Weight(kgs)   |  " << weight << endl;
      cout << "| Seats         |  " << seats << endl;
      cout << "| Quantity      |  " << qty << endl;
      cout << "- - - - - - - - - - - - - - - " << endl;
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
    friend void operator -(int num,travel &t);
};

class goods: public automobile{
  private:
    string model;
    float mileage;
    int cc;
    string fuel;
    float price;
    int weight;
    int carry;
  public:
    int qty=0;
    void display(){
      cout << "- - - - - - - - - - - - - - - " << endl;
      cout << "| Model         |  " << model << endl;
      cout << "| Mileage(kmpl) |  " << mileage << endl;
      cout << "| Engine(cc)    |  " << cc << endl;
      cout << "| Fuel type     |  " << fuel << endl;
      cout << "| Price(Lakhs)  |  " << price << endl;
      cout << "| Weight(kgs)   |  " << weight << endl;
      cout << "| Wt. capacity  |  " << carry << endl;
      cout << "| Quantity      |  " << qty << endl;
      cout << "- - - - - - - - - - - - - - - " << endl;
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
    inline friend void operator -(int num,goods &g);
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

void addpersonal(personal &p){
    int q;
    cout << "How many would you like to add: ";
    cin >> q;
    p.qty=p.qty+q;
    cout << "The quantity of vehicles is " << p.qty << endl;
}

void addtravel(travel &t){
    int q;
    cout << "How many would you like to add: ";
    cin >> q;
    t.qty=t.qty+q;
    cout << "The quantity of vehicles is " << t.qty << endl;
}

void addgoods(goods &g){
    int q;
    cout << "How many would you like to add: ";
    cin >> q;
    g.qty=g.qty+q;
    cout << "The quantity of vehicles is " << g.qty << endl;
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

inline void operator -(personal &p,int num){
  p.qty=p.qty-num;
}

inline void operator -(travel &t,int num){
  t.qty=t.qty-num;
}

inline void operator -(goods &g,int num){
  g.qty=g.qty-num;
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

  string strp;
  string strt;
  string strg;

  cout << setw(275) << "WELCOME TO TATA MOTORS" << endl;
  int c=0;
  do{
    int x;
    cout << "\nChoose:\n1. Admin\n2. Customer\n3. About\n4. Exit\nYour choice: ";
    cin >> x;
    switch(x){
      case 1://Admin
      if(loginadmin()==1){
        int d=0;
        do{
            int a;
            cout << "\nChoose:\n1. Vehicles for personal use\n2. Vehicles for travel\n3. Vehicles for carrying goods\n4. Exit\nYour choice: ";
            cin >> a;
            switch(a){
              case 1://Personal
              int b;
              cout << "\nChoose:\n1. Display vehicles for personal use\n2. Add vehicles for personal use\n3. Remove vehicles for personal use\n4. Exit\nYour choice: ";
              cin >> b;
              switch(b){
                case 1://Display personal
                cout << endl;
                tiago.display();
                altroz.display();
                tigor.display();
                harrier.display();
                nexon.display();
                break;
                case 2://Add personal
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
                  }
                break;
                case 3://Remove personal
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
                  }
                break;
              }
              break;
              case 2://Travel
              int g;
              cout << "\nChoose:\n1. Display vehicles for travel\n2. Add vehicles for travel\n3. Remove vehicles for travel\n4. Exit\nYour choice: ";
              cin >> g;
              switch(g){
                case 1://Display travel
                cout << endl;
                magic.display();
                ebus.display();
                break;
                case 2://Add travel
                cout << endl;
                int h;
                cout << "Which model do you want to add:\n1.Magic\n2.Electric Bus\nYour choice: ";
                cin >> h;
                switch(h){
                  case 1:
                  addtravel(magic);
                  break;
                  case 2:
                  addtravel(ebus);
                  break;
                  }
                break;
                case 3://Remove travel
                cout << endl;
                int e;
                cout << "Which model do you want to remove:\n1.Magic\n2.Electric Bus\nYour choice: ";
                cin >> e;
                switch(e){
                  case 1:
                  deltravel(magic);
                  break;
                  case 2:
                  deltravel(ebus);
                  break;
                  }
                break;
              }
              break;
              case 3://Goods
              int j;
              cout << "\nChoose:\n1. Display vehicles for carrying goods\n2. Add vehicles for carrying goods\n3. Remove vehicles for carrying goods\n4. Exit\nYour choice: ";
              cin >> j;
              switch(j){
                case 1://Display goods
                cout << endl;
                yodha.display();
                intra.display();
                ace.display();
                break;
                case 2://Add goods
                cout << endl;
                int k;
                cout << "Which model do you want to add:\n1.Yodha\n2.Intra\n3.Ace Gold\nYour choice: ";
                cin >> k;
                switch(k){
                  case 1:
                  addgoods(yodha);
                  break;
                  case 2:
                  addgoods(intra);
                  break;
                  addgoods(ace);
                  break;
                  }
                break;
                case 3://Remove goods
                cout << endl;
                int l;
                cout << "Which model do you want to remove:\n1.Yodha\n2.Intra\n3.Ace Gold\nYour choice: ";
                cin >> l;
                switch(l){
                  case 1:
                  delgoods(yodha);
                  break;
                  case 2:
                  delgoods(intra);
                  break;
                  delgoods(ace);
                  break;
                }
                break;
              }
              break;
              case 4://Exit
              d=1;
            }
        }while(d==0);
      }
      break;

      case 2://Customer
        int m;
        cout << "\nChoose:\n1. Vehicles for personal use\n2. Vehicles for travel\n3. Vehicles for carrying goods\n4. Exit\nYour choice: ";
        cin >> m;
        switch(m){
          case 1://Personal
          cout << endl;
          tiago.display();
          altroz.display();
          tigor.display();
          harrier.display();
          nexon.display();
          cout << "See something you like, press ""y"" or ""n"": ";
          cin >> strp;
          if(strp=="y"){
            int q;
            cout << "\nWhich one would you like to buy:\n1.Tiago\n2.Altroz\n3.Tigor\n4.Harrier\n5.Nexon\nEnter respective number: ";
            cin >> q;
            switch(q){
              case 1:
              tiago-1;
              tiago.display();
              break;
              case 2:
              altroz-1;
              altroz.display();
              break;
              case 3:
              tigor-1;
              tigor.display();
              break;
              case 4:
              harrier-1;
              harrier.display();
              break;
              case 5:
              nexon-1;
              nexon.display();
              break;
              default:
              cout << "Invalid choice" << endl;
              break;
            }
          }
          else{
            cout << "Sorry if we couldn't deliver anything to your liking. Thanks for considering us." << endl;
          }
          break;
          case 2://Travel
          cout << endl;
          magic.display();
          ebus.display();
          cout << "See something you like, press ""y"" or ""n"": ";
          cin >> strt;
          if(strt=="y"){
            int r;
            cout << "\nWhich one would you like to buy:\n1.Magic\n2.Electric Bus\nEnter respective number: ";
            cin >> r;
            switch(r){
              case 1:
              magic-1;
              magic.display();
              break;
              case 2:
              ebus-1;
              ebus.display();
              break;
              default:
              cout << "Invalid choice" << endl;
              break;
            }
          }
          else{
            cout << "Sorry if we couldn't deliver anything to your liking. Thanks for considering us." << endl;
            c=1;}
          break;
          case 3://Goods
          cout << endl;
          yodha.display();
          intra.display();
          ace.display();
          cout << "See something you like, press ""y"" or ""n"": ";
          cin >> strg;
          if(strg=="y"){
            int s;
            cout << "\nWhich one would you like to buy:\n1.Yodha\n2.Intra\n3.Ace\nEnter respective number: ";
            cin >> s;
            switch(s){
              case 1:
              yodha-1;
              yodha.display();
              break;
              case 2:
              intra-1;
              intra.display();
              break;
              case 3:
              ace-1;
              ace.display();
              break;
              default:
              cout << "Invalid choice" << endl;
              break;
            }
          }
          else{
            cout << "Sorry if we couldn't deliver anything to your liking. Thanks for considering us." << endl;
            c=1;}
          break;
        }
      break;

      case 3://About
      cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
      cout << "| Company name  |  TATA Motors Ltd                |" << endl;
      cout << "| Chairperson   |  Natarajan Chandrasekaran       |" << endl;
      cout << "| Founder       |  Jehangir Ratanji Dadabhoy Tata |" << endl;
      cout << "| Founded in    |  1945                           |" << endl;
      cout << "| Parent Company|  The TATA Group                 |" << endl;
      cout << " \nTata Motors Group (Tata Motors) is a $37 billion organisation. It is a leading global automobile\nmanufacturing company. Its diverse portfolio includes an extensive range of cars, sports utility vehicles, trucks,\nbuses and defence vehicles. Tata Motors is one of India's largest OEMs offering an extensive range of integrated,\nsmart and e-mobility solutions" << endl;
      cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
      break;

      case 4://Exit
      c=1;
      break;

      default:
      cout << "Invalid choice." << endl;
    }
  }while(c==0);

  return 0;
}