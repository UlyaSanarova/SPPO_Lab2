#ifndef CSMETHODUNIT_H
#define CSMETHODUNIT_H

#include "methodunit.h"

class CSMethodUnit : public AbstractMethodUnit
{
public:
    CSMethodUnit(const std::string &name, const std::string &returnType, Flags flags);

    std::string compile(unsigned int level) const override;
};


#endif // CSMETHODUNIT_H
