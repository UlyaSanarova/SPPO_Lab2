#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "classunit.h"
#include "methodunit.h"
#include "printoperatorunit.h"

class AbstractFactory
{
protected:
    AbstractFactory();

public:
    virtual std::shared_ptr<AbstractClassUnit> newClass(
            const std::string &name,
            AbstractClassUnit::AccessModifier access,
            AbstractClassUnit::Modifier modifier
    ) const = 0;

    virtual std::shared_ptr<AbstractMethodUnit> newMethod(
            const std::string &name,
            const std::string &returnType,
            Unit::Flags flags
    ) const = 0;

    virtual std::shared_ptr<AbstractPrintOperatorUnit> newPrintOperator(
            const std::string &text
    ) const = 0;

    virtual std::string getLanguage() const = 0;
};

#endif // ABSTRACTFACTORY_H
