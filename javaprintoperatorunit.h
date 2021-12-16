#ifndef JAVAPRINTOPERATORUNIT_H
#define JAVAPRINTOPERATORUNIT_H

#include "printoperatorunit.h"

class JavaPrintOperatorUnit : public AbstractPrintOperatorUnit
{
public:
    JavaPrintOperatorUnit(const std::string &text);

    std::string compile(unsigned int level) const override;
};

#endif // JAVAPRINTOPERATORUNIT_H
