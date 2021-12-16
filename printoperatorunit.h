#ifndef PRINTOPERATORUNIT_H
#define PRINTOPERATORUNIT_H

#include "unit.h"

class AbstractPrintOperatorUnit : public Unit
{
public:
    AbstractPrintOperatorUnit(const std::string &text);

protected:
    std::string m_text;
};

#endif // PRINTOPERATORUNIT_H
