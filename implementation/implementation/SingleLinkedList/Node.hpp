//
//  Node.hpp
//  implementation
//
//  Created by Daniel Marchena Parreira on 2018-08-19.
//  Copyright © 2018 Daniel Marchena Parreira. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
#include <iostream>

namespace List {
    class Node {
    private:
        Node* next = nullptr;
        std::string text;
    public:
        ~Node();
        Node(const std::string& _text);
        void addNext(Node* nextNode);
        bool hasNext();
        Node* getNext();
        std::ostream& print(std::ostream& os) const;
    };

    std::ostream& operator<<(std::ostream& os, Node& node);
}

#endif /* Node_hpp */
