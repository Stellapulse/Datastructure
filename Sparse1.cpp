#include<iostream>
using namespace std;

struct node {
    int row; 
    int col;
    int data;
    node *next;

}*head = NULL;

class sparse{
    public:
    int m;
    int n;
    int num;

    sparse(int m, int n, int num) {
        this->m = m;
        this->n = n;
        this->num = num;
        head = NULL;
    }
    ~sparse() {
        node *last;
        while (head) {
           last=head;
            head = head->next;
            delete last;
        }
        
    }
       
    friend istream& operator>>(istream &in, sparse &s);

    friend ostream& operator<<(ostream &out, sparse &s);

};
istream& operator>>(istream &in, sparse &s) {
    node *last = NULL;
    cout << "Enter non-zero elements (row, col, value): ";
    for(int k=0;k<s.num;k++){
        node *t=new node;
        in >> t->row >> t->col >> t->data;
        t->next = NULL;
        if (head == NULL) {
            head = last=t;
        } else {
            last->next = t;
            last = t;
        }

    }
    return in;

}
ostream& operator<<(ostream &out, sparse &s) {
    node *p = head;
    out << "Matrix is: " << endl;
    for(int i = 0; i < s.m; i++) {
        for(int j = 0; j < s.n; j++) {
            if (p != NULL && p->row == i && p->col == j) {
                out << p->data << " ";
                p = p->next;
            } else {
                out << "0 ";
            }
        }
        out << endl;
    }
    return out;
}

int main() {
    sparse s(4, 5, 5);
    cin >> s;
    cout << s;
    
    return 0;
}


