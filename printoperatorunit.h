#ifndef PRINTOPERATORUNIT_H
#define PRINTOPERATORUNIT_H

#include "unit.h"

class PrintOperatorUnit : public Unit
{
public:
    PrintOperatorUnit(const std::string &text);

    std::string compile(unsigned int level) const override;

private:
    std::string m_text;
};

#endif // PRINTOPERATORUNIT_H
