//
//  List.cpp
//  implementation
//
//  Created by Daniel Marchena Parreira on 2018-08-19.
//  Copyright © 2018 Daniel Marchena Parreira. All rights reserved.
//

#include "List.hpp"
#include "Node.hpp"

namespace DoubleList {

    List::List() {
        std::cout << "Calling list constructor" << std::endl;
    }

    List::~List() {
        std::cout << "Calling destructor for list (with smart pointers)" << std::endl;
    }

    void List::add(const std::string& name) {
        Node* newLastNode = new Node(name);
        
        if (!this->head && !this->tail) {
            this->head = std::unique_ptr<Node>(newLastNode);
            this->tail = newLastNode;
            return;
        }
        
        Node* lastNode = this->tail;
        lastNode->addNext(newLastNode);
        newLastNode->addPrev(lastNode);
        this->tail = newLastNode;
    }


    std::ostream& List::print(std::ostream& os) const {
        
        if (this->head == nullptr) return os;
        
        Node* node = this->head.get();
        
        do {
            os << *node << std::endl;
            if (node->hasNext()) node = node->getNext();
            else break;
        } while(true);
        
        return os;
    }
    
    std::ostream& List::printRevert(std::ostream& os) const {
        
        if (this->tail == nullptr) return os;
        
        Node* node = this->tail;
        
        do {
            os << *node << std::endl;
            if (node->hasPrev()) node = node->getPrev();
            else break;
        } while(true);
        
        return os;
    }

    std::ostream& operator<<(std::ostream& os, List& list) {
        list.print(os);
        os << "-----" << std::endl;
        list.printRevert(os);
        return os;
    }
}
