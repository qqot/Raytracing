#include"hittable_list.h"

bool hittable_list::hit(const ray& r, double t_min, double t_max, hit_record& rec) const {
	hit_record temp_rec;
	bool hit_anything = false;
	auto closest = t_max;
	for (const auto& object : objects)
	{
		if (object->hit(r, t_min, closest, temp_rec))
		{
			hit_anything = true;
			closest = temp_rec.t;
			rec = temp_rec;
		}
	}
	return hit_anything;
}