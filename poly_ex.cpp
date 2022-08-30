#include <iostream>
using namespace std;

class friends{
    public:
        void rich_friend(){
            cout<<"gives lend and does not take it back:"<<endl;
        }
};
class close_friend : public friends{
    public:
        void dumb_friends(){
            cout<<"does not know any shit"<<endl;
        }

};
class lewd_fried: public friends{
    public:
        void lewdness(){
            cout<<"always checks out women"<<endl;
        }
};
int main(){
    friends fnd;
    close_friend cfnd;
    lewd_fried lfnd;
    fnd.rich_friend();
    cfnd.dumb_friends();
    lfnd.lewdness();
    return 0;
}