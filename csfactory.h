#ifndef CSFACTORY_H
#define CSFACTORY_H

#include "abstractfactory.h"

class CSFactory : public AbstractFactory
{
public:
    CSFactory();

    std::string getLanguage() const override;

    std::shared_ptr<AbstractClassUnit> newClass(const std::string &name, AbstractClassUnit::AccessModifier access) const override;

    std::shared_ptr<AbstractMethodUnit> newMethod(const std::string &name, const std::string &returnType, Unit::Flags flags) const override;

    std::shared_ptr<AbstractPrintOperatorUnit> newPrintOperator(const std::string &text) const override;
};

#endif // CSFACTORY_H
