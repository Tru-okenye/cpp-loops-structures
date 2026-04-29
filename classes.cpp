#include <iostream>
using namespace std;

class Books{
    public:
    string title;
    string author;
    int year;

    void members();
};
void Books::members(){
    cout<<"I am a member";
}

int main(){
    Books book;//obj
    book.author="joy";
    book.title="come home";
    book.year=1912;
    cout<<book.author<<endl<<book.title<<endl;
    book.members();

    
    return 0;
}