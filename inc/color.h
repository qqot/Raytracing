#pragma once
#include "vec3.h"

#include <iostream>
void write_color(std::ostream& out, color pixel_color)
{
	out<<static_cast<int>(255.999*pixel_color.X())<<' '
		<< static_cast<int>(255.999 * pixel_color.Y()) << ' '
		<< static_cast<int>(255.999 * pixel_color.Z()) << '\n';
}