/*
 * Copyright (C) 2006-2014 Christopho, Solarus - http://www.solarus-games.org
 *
 * Solarus is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Solarus is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef SOLARUS_HERO_BOW_STATE_H
#define SOLARUS_HERO_BOW_STATE_H

#include "solarus/hero/State.h"

namespace Solarus {

/**
 * \brief The state "bow" of the hero.
 */
class Hero::BowState: public Hero::State {

  public:

    BowState(Hero& hero);

    virtual void start(const State* previous_state) override;
    virtual void update() override;

    virtual bool can_avoid_stream(const Stream& stream) const override;

};

}

#endif

