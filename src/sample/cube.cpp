#include "cube.h"

Cube Cube::translate(glm::mat4 m) {
	Cube c = Cube();
	for (int i = 0; i < pos.size(); i++) {
		c.pos[i] = m * c.pos[i];
	}
	return c;
}