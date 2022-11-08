#include <iostream>//fuck me
using namespace std;
class TITAN
{
    public:
    string model[10]={"Edge Ceramic  ","Xylys         ","Edge mechanical","Nebula        "}; 
    string product_id[20]={"NQ1696KC01","9295DM04  ","1810NP01  ","5033DM01  "};         
    int code_no[20]={6969,9295,1810,5033};
    int price[20]={28999,33000,219500,525000};
    string extra[20]={"UNISEX","MEN","MEN","WOMEN"};

    
};          //company logo in terminal + voice command as samya     //customize category in which user can custom add with +    //operator overloading
class type : public TITAN
{
    public:
    //analog, digital , chronograph , smart watches

};
class analog : public type{
    public:
    string model[20]={"Titan Neo Iv","Titan Youth","Titan Karishma"}; //Titan Neo Economy
    string product_id[20]={"NL1805NM01","NL2480SM02","NL1774BM01"};         //NN1802SL04
    int code_no[20]={1805,2480,1774};//1802
    int price[20]={7145,2795,3365};  //1995
    string extra[20]={"MEN","WOMEN","MEN"};
};
class digital : public type{
    public:
    string model[20]={"SF Atomic","SF Arcade","SF Essentials"}; 
    string product_id[20]={"77097PP04","77100PP03","77112PP04"};         
    int code_no[20]={7709,7710,7711};
    int price[20]={900,700,745};
    string extra[20]={"MEN","MEN","UNISEX"};
};
class chronograph : public type{
    public:
    string model[20]={"Regalia         ","SOctane         ","Octane Signature"}; 
    string product_id[20]={"NN9308BM01","NM90047KM03","NP1761KP01"};         
    int code_no[20]={9308,9004,1761};
    int price[20]={11020,9475,10475};
    string extra[20]={"MEN","MEN","MEN"};
};
class smart : public type{
    public:
    string model[20]={"Traq      ","Smart Pro ","Talk Smart"}; 
    string product_id[20]={"75004PP02","90149AP01","90156AP04"};         
    int code_no[20]={7500,9014,9015};
    int price[20]={17999,11959,9995};
    string extra[20]={"UNISEX","UNISEX","UNISEX"};
};
class men : public TITAN 
{
    public:
    string model[10]={"Titan Neo","SF Arcade","Smart 2  "};
    string product_id[10]={"NL1805NM01","77100PP03","90149AP01"};
    double code_no[20]={1805,7710,9014};
    int price[20]={8000,750,12000};
    string extra[20]={"Analog     ","Digital    ","Smart watch"};
};
class women : public TITAN 
{
    public:
    string model[10]={"Titan Youth","Raga Viva  ","Smart 2    "};
    string product_id[10]={"NL2480SM02","NN2603WL01","90149AP01"};
    int code_no[20]={2480,2603,9014};
    int price[20]={2795,4385,12000};
    string extra[20]={"Analog-Metal  ","Analog-Leather","Smart watch   "};
};


inline void printTITAN(TITAN &x){
    for(int t=0; t<3;t++){
            cout<<x.code_no[t]<<"\t"<<x.model[t]<<"\t"<<x.product_id[t]<<"\t"<<x.price[t]<<"\t"<<x.extra[t]<<endl;
        }
}
inline void printanalog(analog &x){
    for(int t=0; t<3;t++){
            cout<<x.code_no[t]<<"\t"<<x.model[t]<<"\t"<<x.product_id[t]<<"\t"<<x.price[t]<<"\t"<<x.extra[t]<<endl;
        }
}
inline void printdigital(digital &x){
    for(int t=0; t<3;t++){
            cout<<x.code_no[t]<<"\t"<<x.model[t]<<"\t"<<x.product_id[t]<<"\t"<<x.price[t]<<"\t"<<x.extra[t]<<endl;
        }
}
inline void printchrono(chronograph &x){
    for(int t=0; t<3;t++){
            cout<<x.code_no[t]<<"\t"<<x.model[t]<<"\t"<<x.product_id[t]<<"\t"<<x.price[t]<<"\t"<<x.extra[t]<<endl;
        }
}
inline void printsmart(smart &x){
    for(int t=0; t<3;t++){
            cout<<x.code_no[t]<<"\t"<<x.model[t]<<"\t"<<x.product_id[t]<<"\t"<<x.price[t]<<"\t"<<x.extra[t]<<endl;
        }
}
inline void printmen(men &x){
    for(int t=0; t<3;t++){
            cout<<x.code_no[t]<<"\t"<<x.model[t]<<"\t"<<x.product_id[t]<<"\t"<<x.price[t]<<"\t"<<x.extra[t]<<endl;
        }
}
inline void printwomen(women &x){
    for(int t=0; t<3;t++){
            cout<<x.code_no[t]<<"\t"<<x.model[t]<<"\t"<<x.product_id[t]<<"\t"<<x.price[t]<<"\t"<<x.extra[t]<<endl;
        }
}


int main(){
    TITAN tt,ttt;
    men m; women wo;
    analog ana; digital digi; chronograph chrono; smart smart;
    
    int choice;
    cout<<"Enter you choice :\n1. Luxury collection\n2. Type collection\n3. Men's collection\n4. Women's collection\n5. Custom\nYour choice:";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"\t\tYou are in Luxury collection category.\n";
        printTITAN(tt);
        break;
        case 2:
        cout<<"\t\tYou are in Type collection category."<<endl;
        char keep;
        do{
        int type_choice;
        cout<<"1. Analog\t2. Digital\t3. Chronograph\t4. Smart watches\nYour choice:";
        cin>>type_choice;
        switch (type_choice)
        {
        case 1:
        cout<<"Analog watches :\n"<<endl;
        printanalog(ana);
            break;
        case 2:
        cout<<"Digital watches :\n"<<endl;
        printdigital(digi);
            break;
        case 3:
        cout<<"Chronograph watches :\n"<<endl;
        printchrono(chrono);
            break;
        case 4:
        cout<<"Smart watches :\n"<<endl;
        printsmart(smart);
            break;
        default:
        cout<<"OOPS! Invalid choice"<<endl;
            break;
        }
        cout<<"Want to continue:(y/n)   :";
        cin>>keep;
        }while(keep=='y');
        break;

        case 3:
        cout<<"\t You are in Men's collection category.\n";
        printmen(m);
        break;

        case 4:
        cout<<"\t You are in Women's collection category.\n";
        printwomen(wo);
        break;

        case 5:
        cout<<"\t\tCustomization category.\n";
        

        break;

        default:
        cout<<"invalid"<<endl;
    }
    return 0;
}
