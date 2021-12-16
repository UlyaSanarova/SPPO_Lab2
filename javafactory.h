#ifndef JAVAFACTORY_H
#define JAVAFACTORY_H

#include "abstractfactory.h"

class JavaFactory : public AbstractFactory
{
public:
    JavaFactory();

    std::string getLanguage() const override;

    std::shared_ptr<AbstractClassUnit> newClass(
            const std::string &name,
            AbstractClassUnit::AccessModifier access,
            AbstractClassUnit::Modifier modifier
    ) const override;

    std::shared_ptr<AbstractMethodUnit> newMethod(
            const std::string &name,
            const std::string &returnType,
            Unit::Flags flags
    ) const override;

    std::shared_ptr<AbstractPrintOperatorUnit> newPrintOperator(
            const std::string &text
    ) const override;
};


#endif // JAVAFACTORY_H
