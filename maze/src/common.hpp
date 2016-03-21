/**
 * @file common.hpp
 * @author Ellen Price <<eprice@caltech.edu>>
 * @version 2.0
 * @date 2014-2015
 * @copyright see License section
 *
 * @brief Defines structs and constants common to multiple classes.
 *
 * @section License
 * Copyright (c) 2014-2015 California Institute of Technology.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * * Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above
 *   copyright notice, this list of conditions and the following disclaimer
 *   in the documentation and/or other materials provided with the
 *   distribution.
 * * Neither the name of the  nor the names of its
 *   contributors may be used to endorse or promote products derived from
 *   this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those
 * of the authors and should not be interpreted as representing official policies,
 * either expressed or implied, of the California Institute of Technology.
 *
 */

#ifndef __STRUCTS_H__
#define __STRUCTS_H__

#define MAZE_START_X    (0)
#define MAZE_START_Y    (0)
#define MAZE_END_X      (WIDTH - 1)
#define MAZE_END_Y      (HEIGHT - 1)

/**
 * @brief Encapsulates a Cartesian (x, y) coordinate.
 */
class Coordinate
{
public:
    int x;
    int y;

    // Constructor
    Coordinate(int i = 0, int j = 0)
    {
       x = i; y = j;
    }

    // This is a "copy constructor." It is actually identical to the default
    // copy constructor that C++ provides; we only include it for teaching
    // purposes.
    // Example:
    //     Coordinate a(1, 2);
    //     Coordinate b = a;  // Copy constructor gets called to construct `b`
    //                        // The argument to the constructor is a const
    //                        // reference to `a`
    // The copy constructor also gets called when you pass a Coordinate as an
    // argument to a function, and when your return a Coordinate from a
    // function.
    // See <http://www.cplusplus.com/articles/y8hv0pDG/> if you want to learn
    // more about copy constructors and assignment operators.
    Coordinate(const Coordinate &other)
    {
        x = other.x; y = other.y;
    }

    // This is an "assignment operator." It is actually identical to the default
    // assignment operator that C++ provides; we only include it for teaching
    // purposes.
    // Example:
    //     Coordinate a(1, 2);
    //     Coordinate b(2, 3);
    //     b = a;  // Assignment operator gets called with a const reference
    //             // to `a` as the argument. Assigns to b.
    Coordinate& operator= (const Coordinate &source)
    {
        x = source.x; y = source.y;
        return *this;
    }
};

#endif
