#ifndef JAVACLASSUNIT_H
#define JAVACLASSUNIT_H

#include "classunit.h"

class JavaClassUnit : public AbstractClassUnit
{
public:
    explicit JavaClassUnit(const std::string &name, AbstractClassUnit::AccessModifier access, AbstractClassUnit::Modifier modifier);

    std::string compile(unsigned int level) const override;
};

#endif // JAVACLASSUNIT_H
