#if 0
Copyright 2013 CjHanks <develop@cjhanks.name>

This file is part of libconf.

libconf is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

libconf is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with libconf.  If not, see <http://www.gnu.org/licenses/>.
#endif 

#ifndef __DEBUG_HH_
#define __DEBUG_HH_ 

#include <iostream>

#define DEBUG(_msg_) \
    do { std::cerr << _msg_ << std::endl; } while (0)

#endif 
