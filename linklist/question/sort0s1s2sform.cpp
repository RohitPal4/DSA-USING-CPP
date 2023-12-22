//1 data replacement allowed
//2 replacement not allowed
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void sortZeroOneTwo(Node* &head){
    
    int zreo = 0;
    int one = 0;
    int two = 0;

    Node* temp  = head;
    while(temp != nullptr){
        if(temp->data == 0){
            zreo++;
        }
        else if(temp->data == 1){
            one++;
        }
        else if(temp->data == 2){
            two++;
        }
        temp = temp->next;
    }
    // step 2 fill 0, 1 and 2 in the origional LL
    temp = head;
        // fill 0
        while(zreo--){
            temp->data = 0;
            temp = temp->next;
        }

        // fill 1
        while(one--){
            temp->data = 1;
            temp = temp->next;
        }

        // fill 2
        while(two--){
            temp->data = 2;
            temp = temp->next;
        }
    
}

Node* sort2(Node* &head){
    if(head == nullptr){
        cout << "LL is empty " << endl;
        return nullptr;
    }
    if(head->next == nullptr){
        return head;
    }
    Node* zerohead = new Node(-1);
    Node* zerotail = zerohead;
    
    Node* onehead = new Node(-1);
    Node* onetail = onehead;

    Node* twohead = new Node(-1);
    Node* twotail = twohead;

    Node* curr = head;
    while(curr != nullptr){
        if(curr->data == 0){
            // take out the zero wali Node
            Node* temp = curr;
            curr = curr->next;
            temp->next = nullptr;

            // append the zero node in zerohead ll
            zerotail->next = temp;
            zerotail = temp;

        }
        else if(curr->data ==1){
            // take out the one wali Node
            Node* temp = curr;
            curr = curr->next;
            temp->next = nullptr;

            // append the one node in onehead ll
            onetail->next = temp;
            onetail = temp;

        }
        else if(curr->data ==2){
            // take out the two wali Node
            Node* temp = curr;
            curr = curr->next;
            temp->next = nullptr;

            // append the two node in twohead ll
            twotail->next = temp;
            twotail = temp;
            
        }
    }

    // ab yaha par , zero, one , two teeno ll ready h

    // join them

    // remove dummy nodes

    // modify one wali list
    Node* temp = onehead;
    onehead = onehead->next;
    temp->next = nullptr;
    delete temp;

    // modify two wali list
    temp = twohead;
    twohead = twohead->next;
    temp->next = nullptr;
    delete temp;

    // join list  
    if(onehead!=nullptr){
        zerotail->next = onehead;
        if(twohead!=nullptr)
         onetail->next = twohead;
    }
    else{
        //one wali list empty hai
        if(twohead!= nullptr)
         zerotail = twohead;
    }

    // remove zerohead dummy node 
    temp = zerohead;
    zerohead = zerohead->next;
    temp->next = nullptr;
    delete temp;

    // return head of the modifiesd lisklist
    return zerohead;
}

int main() {

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(2);
    Node* fourth = new Node(0);
    Node* fifth = new Node(0);
    Node* sixth = new Node(0);

    
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    cout << "input LL: ";
    print(head);

    head = sort2(head);
    

    // sortZeroOneTwo(head);
    cout << "output LL: ";
    print(head);
    return 0;
}