#ifndef CPPCLASSUNIT_H
#define CPPCLASSUNIT_H

#include "classunit.h"

class CppClassUnit : public AbstractClassUnit
{
public:
    explicit CppClassUnit(const std::string &name);

    void add(const std::shared_ptr<Unit> &unit, Flags flags) override;

    std::string compile(unsigned int level) const override;
};

#endif // CPPCLASSUNIT_H
