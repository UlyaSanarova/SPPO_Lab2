#ifndef CPPCLASSUNIT_H
#define CPPCLASSUNIT_H

#include "classunit.h"

class CppClassUnit : public AbstractClassUnit
{
public:
    explicit CppClassUnit(const std::string &name);

    std::string compile(unsigned int level) const override;
};

#endif // CPPCLASSUNIT_H
