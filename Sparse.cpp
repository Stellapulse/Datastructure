#include<iostream>
using namespace std;

class Element {
    public:
    int i;
    int j;
    int x;

};
 class sparse{
    private:
    int m;
    int n;
    int num;
    Element *e;
    public:
    sparse(int m,int n,int num){
        this->m=m;
        this->n=n;
        this->num=num;
        e=new Element[num];
    }
    ~sparse(){
        delete []e;
    }
   friend  istream& operator>>(istream &in , sparse &s);
    friend ostream& operator<<(ostream &out , sparse &s);
 };
 istream& operator>>(istream &in , sparse &s){
    cout<<"Enter non-zero elements: ";
    for(int i=0;i<s.num;i++){
        in>>s.e[i].i>>s.e[i].j>>s.e[i].x;

    }
    return in;
 }
    ostream& operator<<(ostream &out,sparse &s){
        int k=0;
    out<<"Matrix is: "<<endl;
    for(int i=0;i<s.m;i++){
        for(int j=0;j<s.n;j++){
            if(i==s.e[k].i&&j==s.e[k].j){
                out<<s.e[k++].x<<" ";
            }
            else{
                out<<"0 ";
            }
        }
        out<<endl;

    }
    return out;
}
int main(){
    sparse s(4,5,5);
    cin>>s;
    cout<<s;
    return 0;
}