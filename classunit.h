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

    enum Modifier
    {
        ModifierStatic = 1,
        ModifierAbstract = 1 << 1,
        ModifierFinal = 1 << 2,
    };

    static const std::vector<std::string> ACCESS_MODIFIERS;

    explicit AbstractClassUnit(const std::string &name, AccessModifier access, Modifier modifier);

    void add(const std::shared_ptr<Unit> &unit, Flags flags) override;

protected:
    std::string m_name;
    AccessModifier m_access;
    Modifier m_modifier;
    using Fields = std::vector<std::shared_ptr<Unit>>;
    std::vector<Fields> m_fields;
};

#endif // CLASSUNIT_H
