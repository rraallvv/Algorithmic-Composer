//
//  getMidiData.cpp
//  MarkovArray
//
//  Created by Jonas Schüle on 02.01.15.
//  Copyright (c) 2015 hw. All rights reserved.
//

#include "readMidi.h"

void readMidi::getMidiData(std::vector<note> &noteVector, int track)
{
    noteVector = noteData.at(track);
}