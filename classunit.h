#ifndef CLASSUNIT_H
#define CLASSUNIT_H

#include "unit.h"
#include <vector>

class AbstractClassUnit : public Unit
{
public:
    enum AccessModifier
    {
        AccessModifierDefault,
        AccessModifierPublic,
        AccessModifierProtected,
        AccessModifierPrivate
    };

    static const std::vector<std::string> ACCESS_MODIFIERS;

    explicit AbstractClassUnit(const std::string &name, AbstractClassUnit::AccessModifier access);

    void add(const std::shared_ptr<Unit> &unit, Flags flags) override;

protected:
    std::string m_name;
    AccessModifier m_access;
    using Fields = std::vector<std::shared_ptr<Unit>>;
    std::vector<Fields> m_fields;
};

#endif // CLASSUNIT_H
