#pragma once
#include"hittable.h"
#include"vec3.h"
class sphere :public hittable {
public:
	point3 center;
	double radius;
public:
	sphere() {}
	sphere(point3 cen, double r) :center(cen), radius(r) {};
	virtual bool hit(const ray& r, double t_min, double t_max, hit_record& rec) const override;
};