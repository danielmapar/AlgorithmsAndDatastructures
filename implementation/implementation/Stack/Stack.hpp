//
//  List.hpp
//  implementation
//
//  Created by Daniel Marchena Parreira on 2018-08-19.
//  Copyright © 2018 Daniel Marchena Parreira. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include "Node.hpp"

namespace Stack {
    class Stack {
        private:
            std::shared_ptr<Node> head = nullptr;
        public:
            Stack();
            ~Stack();
            void push(const std::string& name);
            Node pop();
            std::ostream& print(std::ostream& os) const;
    };

    std::ostream& operator<<(std::ostream& os, Stack& stack);
    
}

#endif /* Stack_hpp */
