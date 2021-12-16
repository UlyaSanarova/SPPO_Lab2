#ifndef CPPFACTORY_H
#define CPPFACTORY_H

#include "abstractfactory.h"

class CppFactory : public AbstractFactory
{
public:
    CppFactory();

    std::string getLanguage() const override;

    std::shared_ptr<AbstractClassUnit> newClass(const std::string &name) const override;

    std::shared_ptr<AbstractMethodUnit> newMethod(const std::string &name, const std::string &returnType, Unit::Flags flags) const override;

    std::shared_ptr<AbstractPrintOperatorUnit> newPrintOperator(const std::string &text) const override;
};

#endif // CPPFACTORY_H
