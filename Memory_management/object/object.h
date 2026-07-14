typedef struct object object_s;

typedef enum objectkind{
    INTEGER,
    FLOAT,
    STRING,
    VECTOR3,
    ARRAY
} objectkind_e;

typedef struct vector{
    object_s* x;
    object_s* y;
    object_s* z;
} vector_s;

typedef struct array{
    size_t size;
    object_s **elements;
} array_s;

typedef union objectdata{
    int v_int;
    float v_float;
    char* v_string;
    vector_s v_vector3; 
    array_s v_array;
} objectdata_u;

typedef struct object {
    objectkind_e kind;
    objectdata_u data;
} object_s;


object_s* new_integer(int value);
object_s* new_float(float value)
object_s* new_string(char* value);
object_s* new_vector3(
    object_s* x;
    object_s* y;
    object_s* z;
);
object_s* new_array(size_t size);
int array_set(object_s* obj, size_t index, object_s* value);
object_s* array_get(object_s* obj, size_t index);
int obj_length(object_s* obj);