
//
// array.h
//
// Copyright (c) 2011 TJ Holowaychuk <tj@vision-media.ca>
//

#ifndef __LUNA_ARRAY_H__
#define __LUNA_ARRAY_H__

#include "object.h"
#include "kvec.h"

/*
 * Luna array.
 */

typedef kvec_t(luna_object_t *) luna_array_t;

/*
 * Push `obj` into the array.
 */

#define luna_array_push(self, obj) \
  kv_push(luna_object_t *, *self, obj)

/*
 * Return the array length.
 */

#define luna_array_length(self) \
  kv_size(*self)

/*
 * Return the object at `i`.
 */

#define luna_array_at(self, i) \
  kv_A(*self, i)

#endif /* __LUNA_ARRAY_H__ */