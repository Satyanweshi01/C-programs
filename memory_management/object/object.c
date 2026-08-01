#include <stdlib.h>
#include <string.h>
#include "object.h"

object_s* obj_add(object_s* a, object_s* b)
{
    if (a == NULL || b == NULL) {
        return NULL;
    }
    if ((a->kind != b->kind)
        &&
        ((a->kind > 1 ) || (b->kind > 1))) // only integer and float inter operations allowed
    {
        return NULL;
    }

    switch(a->kind){
        case INTEGER: {
            switch(b->kind){
                case INTEGER: return new_integer(a->data.v_int + b->data.v_int);
                case FLOAT: return new_float((float)a->data.v_int + b->data.v_float);
            }
        }
        case FLOAT: {
            switch(b->kind){
                case INTEGER: return new_float(a->data.v_float + (float)b->data.v_int);
                case FLOAT: return new_float(a->data.v_float + b->data.v_float);
            }
        }
        case STRING: {
            size_t length = strlen(a->data.v_string) + strlen(b->data.v_string) + 1; // +1 for null character
            //char* newstring = calloc(length*sizeof(char));
            char* newstring = malloc(length*sizeof(char));
            if (newstring == NULL) {return NULL;}
            strcpy(newstring,a->data.v_string);
            strcat(newstring,b->data.v_string);
            object_s* obj = new_string(newstring);
            free(newstring);
            return obj;
        }
        case VECTOR3: {
            return new_vector3(
                obj_add(a->data.v_vector3.x + b->data.v_vector3.x),
                obj_add(a->data.v_vector3.y + b->data.v_vector3.y),
                obj_add(a->data.v_vector3.z + b->data.v_vector3.z),
            )
        }
        case ARRAY: {
            size_t length = a->data.v_array.size + b->data.v_array.size;
            object_s* obj = new_array(length);
            
            for (int i = 0; i < a->data.v_array.size; i++)
            {
                array_set(
                    obj,
                    i,
                    array_get(a,i)
                );
                
            }
            for (int j = 0; j < b->data.v_array.size; j++)
            {
                array_set(
                    obj,
                    j+a->data.v_array.size,
                    array_get(b,j)
                );
            }
            return obj;
        }
        default:
            return NULL;
        
        
    }
    
}

int obj_length(object_s* obj)
{
    if (obj == NULL) {return -1};
    switch(obj->kind){
        case INTEGER: return 1;
        case FLOAT: return 1;
        case STRING: return strlen(obj->data.v_string);
        case VECTOR3: return 3;
        case ARRAY: return obj->data.v_array.size; 
        default: return -1;
    }
}

int array_set(object_s* obj, size_t index, object_s* value)
{
    if (obj == NULL || value == NULL) {return 1;}
    if (obj->kind != ARRAY) {return 2;}
    if (obj->data.v_array.size <= index) {return 3;}

    obj->data.v_array.elements[index] = value; 
    return 0;
}

object_s* array_get(object_s* obj, size_t index)
{
    if (obj == NULL) {return NULL;}
    if (obj->kind != ARRAY) {return NULL;}
    if (obj->data.v_array.size <= index) {return NULL;}

     
    return obj->data.v_array.elements[index];
}

object_s* new_array(size_t size)
{
    object_s* obj = malloc(sizeof(object_s))
    if (obj == NULL) {return NULL;}

    obj->kind = ARRAY;
    object_s **elements = calloc(size, sizeof(object_s*)); // no more garbage values
    if (elements == NULL) {return NULL;}

    array_s array = {
        .size = size,
        .elements = elements;
    }
    obj->data.v_array = array;
    return obj;
}

object_s* new_vector3(
    object_s* x;
    object_s* y;
    object_s* z;
)
{
    if (x== NULL || y == NULL || z == NULL) {return NULL;}
    object_s* obj = malloc(sizeof(object_s))
    if (obj == NULL) {return NULL;}

    obj->kind = VECTOR3;
    obj->data.v_vector3.x = x;
    obj->data.v_vector3.y = y;
    obj->data.v_vector3.z = z;

    return obj;
}

object_s* new_string(char* value)
{
    object_s* obj = malloc(sizeof(object_s))
    if (obj == NULL) {return NULL;}

    obj->kind = STRING;
    obj->data.v_string = malloc(strlen(value)+1);
    if (obj->data.v_string==NULL)
    {
        return NULL;
    }
    strcopy(obj->data.v_string, value);

    return obj;
}

object_s* new_float(float value)
{
    object_s* obj = malloc(sizeof(object_s))
    if (obj == NULL) {return NULL;}

    obj->kind = FLOAT;
    obj->data.v_float = value;

    return obj;
}

object_s* new_integer(int value)
{
    object_s* obj = malloc(sizeof(object_s))
    if (obj == NULL) {return NULL;}

    obj->kind = INTEGER;
    obj->data.v_int = value;

    return obj;
}