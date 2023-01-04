//
// Created by baloo on 12/12/2022.
//

#include "WallE.h"

WallE::WallE() {
}

void WallE::move(string track) {
    if (track[stepsTaken] == '_') {
        stepsTaken++;
    } else {
        track[stepsTaken] = '_';
    }
}


