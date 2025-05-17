#include<iostream>
using namespace std;
static int counter = 0;
class shop {
    int id[100];
    int price[100];
    public:
    void setitem();
    void getitem();
    void mymain();
};

void shop ::setitem() {
    cout<<"Enter id of item number : "<<counter+1<<" = ";
    cin>>id[counter];
    cout<<"Enter price of item number "<<counter+1<<" and id "<<id[counter]<<" = ";
    cin>>price[counter];
    counter++;
}

void shop::mymain() {
    cout<<"Welcome to my shop!"<<endl;
    cout<<"    ==========="<<endl<<endl;
}

void shop::getitem() {
    cout<<"Items of your shop are : "<<endl;
    for (int i = 0; i < counter ; i++ ) {
        cout<<i+1<<". Id is : "<<id[i]<<", item price is "<<price[i]<<endl;
    }
}

int main() {
    shop s1;
    s1.mymain();
    s1.setitem();
    s1.setitem();
    s1.setitem();
    s1.setitem();
    s1.setitem();
    s1.setitem();
    s1.getitem();
    cout<<"Total elements entered are : "<<counter<<endl<<endl;
    return 0;
}