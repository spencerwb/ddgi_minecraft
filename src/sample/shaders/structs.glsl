struct Ray
{
    vec3 origin;
    vec3 direction;
};

struct Vertex {
    vec4 position; // coord of cube
    vec4 color; // color of cube
};

struct Material
{
    vec4 color;
    vec4 data;
    /*
    data.x = Type (Glass, Lambert, Dynamic)
    data.y = Unused
    data.z = Unused
    data.w = Unused
    */
};

struct Intersection
{
    bool hit;
    float distance; // value of t
    float reflectiveness; // 0 = diffuse
    bool emission; // 0 = not a light, 1 = light
    vec3 color; // color of material or light
    vec3 normal;
    vec3 point; // intersection point
    Material mat;
};



/*Intersection cubeIntersectionTest(Ray r) {

    // do math computations to check if r intersects any cube in the scene and 
    // fill in intersection data

} */