#ifndef CSCLASSUNIT_H
#define CSCLASSUNIT_H

#include "classunit.h"

class CSClassUnit : public AbstractClassUnit
{
public:
    explicit CSClassUnit(const std::string &name, AbstractClassUnit::AccessModifier access, AbstractClassUnit::Modifier modifier);

    std::string compile(unsigned int level) const override;
};

#endif // CSCLASSUNIT_H
