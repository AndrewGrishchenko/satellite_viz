// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from satellite_interfaces:msg/SatelliteVec.idl
// generated code does not contain a copyright notice

#include "satellite_interfaces/msg/detail/satellite_vec__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_satellite_interfaces
const rosidl_type_hash_t *
satellite_interfaces__msg__SatelliteVec__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcf, 0xea, 0xed, 0xe8, 0x15, 0x75, 0x11, 0xe5,
      0x39, 0x9b, 0x0a, 0x03, 0x3a, 0xcf, 0xbc, 0x0f,
      0x04, 0x96, 0x50, 0xb8, 0x83, 0x9b, 0x7f, 0x63,
      0x5a, 0x3d, 0x16, 0x41, 0xe6, 0xef, 0x52, 0x46,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/vector3__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
#endif

static char satellite_interfaces__msg__SatelliteVec__TYPE_NAME[] = "satellite_interfaces/msg/SatelliteVec";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";

// Define type names, field names, and default values
static char satellite_interfaces__msg__SatelliteVec__FIELD_NAME__vector[] = "vector";
static char satellite_interfaces__msg__SatelliteVec__FIELD_NAME__name[] = "name";

static rosidl_runtime_c__type_description__Field satellite_interfaces__msg__SatelliteVec__FIELDS[] = {
  {
    {satellite_interfaces__msg__SatelliteVec__FIELD_NAME__vector, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {satellite_interfaces__msg__SatelliteVec__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription satellite_interfaces__msg__SatelliteVec__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
satellite_interfaces__msg__SatelliteVec__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {satellite_interfaces__msg__SatelliteVec__TYPE_NAME, 37, 37},
      {satellite_interfaces__msg__SatelliteVec__FIELDS, 2, 2},
    },
    {satellite_interfaces__msg__SatelliteVec__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "geometry_msgs/Vector3 vector\n"
  "string name";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
satellite_interfaces__msg__SatelliteVec__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {satellite_interfaces__msg__SatelliteVec__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 40, 40},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
satellite_interfaces__msg__SatelliteVec__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *satellite_interfaces__msg__SatelliteVec__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
