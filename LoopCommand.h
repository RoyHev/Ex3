//
// Created by roy on 19/12/18.
//

#ifndef EX3_LOOPCOMMAND_H
#define EX3_LOOPCOMMAND_H

#include "ConditionParser.h"

class LoopCommand : public ConditionParser {
    VarManager *varManager;
public:
    LoopCommand(VarManager *varManager);

    virtual int execute(int index, vector<string> data);
};

#endif //EX3_LOOPCOMMAND_H
