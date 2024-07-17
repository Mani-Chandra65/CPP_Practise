#include <iostream>

struct Node {
    int data;
    Node* link;
};

void insertAtEnd(Node* &head , int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->link = nullptr;

    if(head == nullptr){
        head = newNode;
    }else {
        Node* temp = head;
        while(temp->link != nullptr){
            temp = temp->link;
        }
        temp->link = newNode;
    }
}

void insertAtFirst(Node* &head , int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->link = head;
    head = newNode;
}

void insertAtLoc(Node* &head, int data , int pos){
    Node* newNode = new Node();
    newNode->data = data;

    if(pos == 0){
        newNode->link = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for(int i = 0;temp!= nullptr && i < pos-1;++i){
        temp = temp->link;
    }

    if(temp == nullptr){
        std::cout << "Position out of bounds" << std::endl;
        delete newNode;
        return;
    }

    newNode->link = temp->link;
    temp->link = newNode;

}

void deleteAtLoc(Node* &head,int loc){
    Node* temp1 = head;
    for(int i =0; i < loc-2;i++){
        temp1 = temp1->link;
    }
    Node* temp2 =temp1->link;
    temp1->link=temp2->link;
    delete temp2;
}

void deleteFirst(Node* &head){
    Node* temp1 = head;
    head = temp1->link;
    delete temp1;
    return;

}
void deleteLast(Node* &head){
    if (head == nullptr) {
        std::cout << "List is empty. Nothing to delete." << std::endl;
        return;
    }

    if (head->link == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* temp1 = head;
    Node* temp2 = nullptr;

    while (temp1->link != nullptr) {
        temp2 = temp1;
        temp1 = temp1->link;
    }

    temp2->link = nullptr;
    delete temp1;
}


void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        std::cout << temp->data << " -> ";
        temp = temp->link;
    }
    std::cout << "NULL" <<std::endl;
}

int main(){
    Node* head = nullptr;

    while(true){
        std::cout << "\n\nEnter the operation to do:\n";
        std::cout << "\nINSERT!!\n1.Insert at End.\n2.Insert at Start.\n3.Insert at a location.\n";
        std::cout << "\nDELETE!!\n4.Delete at End.\n5.Delete at Start.\n6.Delete at a location.\n";
        std::cout << "\nDISPLAY!!\n7.Display linked list.\n";
        std::cout << "\nEXIT!!\n8.Exit.\n";
        int ch;
        std::cin >> ch;
        switch(ch){
            case 1:{
                int data;
                std::cout << "Enter the number to be inserted.\n";
                std::cin >> data;
                insertAtEnd(head,data);
                break;
            }
                
            case 2:{
                int data;
                std::cout << "Enter the number to be inserted.\n";
                std::cin >> data;
                insertAtFirst(head,data);
                break;
            }
                
            case 3:{
                int data,pos;
                std::cout << "Enter the number to be inserted.\n";
                std::cin >> data;
                std::cout << "Enter the position:\n";
                std::cin >> pos;
                insertAtLoc(head,data,pos);
                break;
            }
                
            case 4:{
                deleteLast(head);
                break;
            }
            case 5:
                deleteFirst(head);
                break;
            case 6:{
                int loc;
                std::cout << "Enter the location to be deleted";
                std::cin >> loc;
                deleteAtLoc(head,loc);
                break;
            }
            case 7: 
                printList(head);
                break;
            case 8:
                return 0;
        }
    }
    return 0;
}


