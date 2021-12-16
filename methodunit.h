#ifndef METHODUNIT_H
#define METHODUNIT_H

#include "unit.h"
#include <vector>

class AbstractMethodUnit : public Unit
{
public:
    enum Modifier
    {
        ModifierStatic = 1,
        ModifierConst = 1 << 1,
        ModifierVirtual = 1 << 2
    };

    AbstractMethodUnit(const std::string &name, const std::string &returnType, Flags flags);

    void add(const std::shared_ptr<Unit> &unit, Flags flags) override;

protected:
    std::string m_name;
    std::string m_returnType;
    Flags m_flags;
    std::vector<std::shared_ptr<Unit>> m_body;
};

#endif // METHODUNIT_H
