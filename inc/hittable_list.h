#pragma once
#include "hittable.h"

#include <memory>
#include <vector>

class hittable_list :public hittable {
public:
	std::vector<std::shared_ptr<hittable>> objects;
public:
	hittable_list() {}
	hittable_list(std::shared_ptr<hittable> object) { add(object); }
	void add(std::shared_ptr<hittable> object) { objects.push_back(object); }
	void clear() { objects.clear(); }
	virtual bool hit(const ray& r, double t_min, double t_max, hit_record& rec) const override;
};