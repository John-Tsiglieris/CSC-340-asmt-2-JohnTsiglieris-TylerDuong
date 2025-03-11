#ifndef MEDIA_H
#define MEDIA_H

#include <string>
#include "Product.h"
using namespace std;

class Media : public Product {
    private:
        string type;
        string targetAudience;




    public: 
        string getType() const;
        string getTargetAudience() const;
        void getInfo() const;
        
};

#endif