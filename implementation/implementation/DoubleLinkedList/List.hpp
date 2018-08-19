//
//  List.hpp
//  implementation
//
//  Created by Daniel Marchena Parreira on 2018-08-19.
//  Copyright © 2018 Daniel Marchena Parreira. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <stdio.h>
#include "Node.hpp"
namespace DoubleList {
    class List {
        private:
            std::unique_ptr<Node> head = nullptr;
            Node* tail = nullptr;
        public:
            List();
            ~List();
            void add(const std::string& name);
            std::ostream& print(std::ostream& os) const;
            std::ostream& printRevert(std::ostream& os) const;
    };

    std::ostream& operator<<(std::ostream& os, List& list);
    
}

#endif /* List_hpp */
