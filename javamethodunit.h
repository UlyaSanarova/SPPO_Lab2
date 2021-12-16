#ifndef JAVAMETHODUNIT_H
#define JAVAMETHODUNIT_H

#include "methodunit.h"

class JavaMethodUnit : public AbstractMethodUnit
{
public:
    JavaMethodUnit(const std::string &name, const std::string &returnType, Flags flags);

    std::string compile(unsigned int level) const override;
};

#endif // JAVAMETHODUNIT_H
