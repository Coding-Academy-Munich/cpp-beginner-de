// Copyright (c) 2023 Dr. Matthias Hölzl. All rights reserved.

#pragma once
#ifndef COMPLETED_ADVENTURE_V5C_LIB_STRATEGIES_SELECTLASTACTION_H
#define COMPLETED_ADVENTURE_V5C_LIB_STRATEGIES_SELECTLASTACTION_H

#include "SelectActionStrategy.h"

namespace adventure::v5c {

class SelectLastAction : public SelectActionStrategy {
public:
    SelectLastAction() = default;
    ActionPtr SelectAction(
        const Player& player, const ActionVec& actions) const override;
};

} // namespace adventure::v5c

#endif // COMPLETED_ADVENTURE_V5C_LIB_STRATEGIES_SELECTLASTACTION_H
