#include "classunit.h"

AbstractClassUnit::AbstractClassUnit(const std::string &name, AbstractClassUnit::AccessModifier access, AbstractClassUnit::Modifier modifier) :
    m_name(name), m_access(access), m_modifier(modifier)
{
    m_fields.resize(ACCESS_MODIFIERS.size());
}

void AbstractClassUnit::add(const std::shared_ptr<Unit> &unit, Flags flags)
{
    int accessModifier = AccessModifierPrivate;
    if(flags < ACCESS_MODIFIERS.size()) {
        accessModifier = flags;
    }
    m_fields[accessModifier].push_back(unit);
}

const std::vector<std::string> AbstractClassUnit::ACCESS_MODIFIERS = { "", "public", "protected", "private" };
