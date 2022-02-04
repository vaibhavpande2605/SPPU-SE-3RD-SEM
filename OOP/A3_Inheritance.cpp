#include<iostream>
using namespace std;

class Publication
{
    string title;
    float price;
public:
    Publication()
    {
        title = "";
        price = 0.0;
    }
    void getData()
    {
        try{
           cout << "\nEnter title :";
           getline (cin, title);
           cout << "Enter price :";
           cin >> price;
           if(price<=0)
            throw price;
        }
        catch(float p)
        {
            cout << "\nError!!! Enter Valid Price" << endl;
            price = 0.0;
            cout << "\nEnter price :";
            cin >> price;
        }

    }
    void display()
    {
        cout << "\nTitle :" << title;
        cout << "\nPrice :" << price;
   }
};

class Book : public Publication
{
    int page_count;
public:
    Book()
    {
        page_count = 0;
    }
    void getPageCount()
    {
        Publication :: getData();
        try
        {
            cout << "Enter Page Count of Book :";
            cin >> page_count;
            if(page_count <= 0)
                throw page_count;
        }
        catch(int page)
        {
            cout << "\nError!!! Enter Valid Page Count" << endl;
            page_count = 0.0;
            cout << "\nEnter Page Count of Book :";
            cin >> page_count;
        }
    }
    void displayPageCount()
    {
        display();
        cout << "\nPage Count :" << page_count << endl;
    }
};

class Tape : public Publication
{
    float playing_time;
public:
    void getPlayingTime()
    {
        Publication :: getData();
        try
        {
            cout << "Enter Playing Time of Tape :";
            cin >> playing_time;
            if(playing_time <= 0)
                throw playing_time;
        }
        catch(float time)
        {
            cout << "\nError!!! Enter valid play time" << endl;
            playing_time = 0.0;
            cout << "\nEnter Playing Time of Tape :";
            cin >> playing_time;
        }
    }
    void displayPlayingTime()
    {
        display();
        cout << "\nPlaying Time :" << playing_time << endl;
    }
};


int main()
{
    Book book_obj;
    cout << "Enter Information of Books :" << endl;
    book_obj.getPageCount();
    Tape tape_obj;
    cin.ignore();
    cout << "\nEnter Information of Tape :" << endl;
    tape_obj.getPlayingTime();
    cout << "\nDisplaying Information of Book..." << endl;
    book_obj.displayPageCount();
    cout << "\nDisplaying Information of Tape..." << endl;
    tape_obj.displayPlayingTime();
    return 0;
}







