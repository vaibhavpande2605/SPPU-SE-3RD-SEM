#include<iostream>
#include<cstdlib>
using namespace std;
class pizza
{
    int a = 0;
    int front,rear,q[];
public:
    pizza()
    {
        front=-1;
        rear=-1;
    }
    int isfull()
    {
        if(front==(rear+1)%a)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int isempty()
    {
        if(front==-1&&rear==-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void add()
    {
        if(isfull()==0)
        {
            cout<<"\n Enter the Pizza ID: ";
            if(front==-1&&rear==-1)
            {
                front=0;
                rear=0;
                cin>>q[rear];
            }
            else
            {
                rear=(rear+1)%5;
                cin>>q[rear];
            }
            char c;
            cout<<"Do you want to add another order ? ";
            cin>>c;
            if(c=='y'||c=='Y')
                add();
        }
        else
        {
            cout<<"\n Orders are full ";
        }
    }
    void serve()
    {
        if(isempty()==0)
        {
            if(front==rear)
            {
                cout<<"\n Order served is : "<<q[front];
                front=-1;
                rear=-1;
            }
            else
            {
                cout<<"\n Order served is : "<<q[front];
                front=(front+1)%5;
            }
        }
        else
        {
            cout<<"\n Orders are empty ";
        }
    }
    void display()
    {
        if(isempty()==0)
        {
            for(int i=front;i!=rear;i=(i+1)%5)
            {
                cout<<q[i]<<" <- ";
            }
            cout<<q[rear];
        }
        else
        {
            cout<<"\n Orders are empty";
        }
    }
    void max()
    {
        cout << "How many maximum orders you want to place? : ";
        cin >> a;
    }
    void check()
    {
        int ch;
        cout<<"\n\n * * * * PIZZA PARLOUR * * * * \n\n";
        cout<<"\n 1. Add a Pizza \n 2. Display the Orders \n 3. Serve a pizza \n 4. Exit \n Enter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                add();
                break;
            case 2:
                display();
                break;
            case 3:
                serve();
                break;
            case 4:
                exit(0);
            default:
                cout<<"Invalid choice ";
                check();
        }
        char ch1;
        cout<<"\n Do you want to continue? ";
        cin>>ch1;
        if(ch1=='y'||ch1=='Y')
            check();
    }
};

int main()
{
    pizza p1;
    p1.max();
    p1.check();
    return 0;
}
