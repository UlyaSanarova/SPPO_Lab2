#ifndef CPPMETHODUNIT_H
#define CPPMETHODUNIT_H

#include "methodunit.h"

class CppMethodUnit : public AbstractMethodUnit
{
public:
    CppMethodUnit(const std::string &name, const std::string &returnType, Flags flags);

    std::string compile(unsigned int level) const override;
};

#endif // CPPMETHODUNIT_H
