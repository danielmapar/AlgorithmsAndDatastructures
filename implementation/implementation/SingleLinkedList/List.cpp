//
//  List.cpp
//  implementation
//
//  Created by Daniel Marchena Parreira on 2018-08-19.
//  Copyright © 2018 Daniel Marchena Parreira. All rights reserved.
//

#include "List.hpp"
#include "Node.hpp"

namespace List {
    
    List::List() {
        std::cout << "Calling list constructor" << std::endl;
    }

    List::~List() {
        
        std::cout << "Calling destructor for list" << std::endl;
        
        Node* node = this->head;
        Node* next = nullptr;
        
        while(true) {
            next = node->getNext();
            delete node;
            if (next) node = next;
            else break;
        }
    }

    void List::add(const std::string& name) {
        Node *node = new Node(name);
        
        if (!this->head) {
            this->head = node;
            return;
        }
        
        Node* lastNode = this->findLastNode();
        lastNode->addNext(node);
    }

    Node* List::findLastNode() {
        Node* node = this->head;
        
        while(node->hasNext()) {
            node = node->getNext();
        }
        return node;
    }

    std::ostream& List::print(std::ostream& os) const {
        
        if (this->head == nullptr) return os;
        
        Node *node = this->head;
        
        do {
            os << *node << std::endl;
            if (node->hasNext()) node = node->getNext();
            else break;
        } while(true);
        
        return os;
    }

    std::ostream& operator<<(std::ostream& os, List& list) {
        return list.print(os);
    }
}
