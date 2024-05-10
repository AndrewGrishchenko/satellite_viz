// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from satellite_interfaces:srv/SatelliteSetPos.idl
// generated code does not contain a copyright notice

#include "satellite_interfaces/srv/detail/satellite_set_pos__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_satellite_interfaces
const rosidl_type_hash_t *
satellite_interfaces__srv__SatelliteSetPos__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3c, 0xc2, 0x3f, 0x3c, 0xc3, 0x87, 0xbe, 0xb5,
      0x92, 0xd2, 0xc8, 0xf8, 0x8f, 0xd1, 0x29, 0xc7,
      0xec, 0x93, 0x88, 0xe8, 0xb7, 0x21, 0x96, 0x8f,
      0xc8, 0x36, 0x47, 0xdb, 0x9b, 0xaa, 0xb2, 0x7e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_satellite_interfaces
const rosidl_type_hash_t *
satellite_interfaces__srv__SatelliteSetPos_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9a, 0x2f, 0xa7, 0x63, 0x81, 0x92, 0xde, 0x6f,
      0x5b, 0x3c, 0x7d, 0xec, 0x91, 0x6d, 0x31, 0x6b,
      0x8c, 0x9e, 0xf8, 0xd9, 0x91, 0xeb, 0xe6, 0xab,
      0x9e, 0x15, 0xc0, 0x32, 0x0b, 0x2a, 0xa3, 0x32,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_satellite_interfaces
const rosidl_type_hash_t *
satellite_interfaces__srv__SatelliteSetPos_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1d, 0x83, 0x64, 0xc7, 0xe8, 0xfd, 0x16, 0x0c,
      0xf6, 0xe3, 0x68, 0xf1, 0xe6, 0xdc, 0xb6, 0xa0,
      0x72, 0x4a, 0x5d, 0xb2, 0x23, 0xef, 0x85, 0x00,
      0x4f, 0x19, 0x4e, 0x22, 0xf2, 0x6a, 0x95, 0x2a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_satellite_interfaces
const rosidl_type_hash_t *
satellite_interfaces__srv__SatelliteSetPos_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3d, 0xd4, 0x6d, 0x23, 0x51, 0x2f, 0x3f, 0xa6,
      0x5a, 0x71, 0x6a, 0x4c, 0x2e, 0x75, 0x31, 0x29,
      0x51, 0x22, 0x88, 0x29, 0xdf, 0x9c, 0xbf, 0x84,
      0x18, 0xe7, 0xb8, 0x77, 0x1b, 0xb8, 0x81, 0x07,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char satellite_interfaces__srv__SatelliteSetPos__TYPE_NAME[] = "satellite_interfaces/srv/SatelliteSetPos";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char satellite_interfaces__srv__SatelliteSetPos_Event__TYPE_NAME[] = "satellite_interfaces/srv/SatelliteSetPos_Event";
static char satellite_interfaces__srv__SatelliteSetPos_Request__TYPE_NAME[] = "satellite_interfaces/srv/SatelliteSetPos_Request";
static char satellite_interfaces__srv__SatelliteSetPos_Response__TYPE_NAME[] = "satellite_interfaces/srv/SatelliteSetPos_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char satellite_interfaces__srv__SatelliteSetPos__FIELD_NAME__request_message[] = "request_message";
static char satellite_interfaces__srv__SatelliteSetPos__FIELD_NAME__response_message[] = "response_message";
static char satellite_interfaces__srv__SatelliteSetPos__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field satellite_interfaces__srv__SatelliteSetPos__FIELDS[] = {
  {
    {satellite_interfaces__srv__SatelliteSetPos__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {satellite_interfaces__srv__SatelliteSetPos_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {satellite_interfaces__srv__SatelliteSetPos__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {satellite_interfaces__srv__SatelliteSetPos_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {satellite_interfaces__srv__SatelliteSetPos__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {satellite_interfaces__srv__SatelliteSetPos_Event__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription satellite_interfaces__srv__SatelliteSetPos__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {satellite_interfaces__srv__SatelliteSetPos_Event__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {satellite_interfaces__srv__SatelliteSetPos_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {satellite_interfaces__srv__SatelliteSetPos_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
satellite_interfaces__srv__SatelliteSetPos__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {satellite_interfaces__srv__SatelliteSetPos__TYPE_NAME, 40, 40},
      {satellite_interfaces__srv__SatelliteSetPos__FIELDS, 3, 3},
    },
    {satellite_interfaces__srv__SatelliteSetPos__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = satellite_interfaces__srv__SatelliteSetPos_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = satellite_interfaces__srv__SatelliteSetPos_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = satellite_interfaces__srv__SatelliteSetPos_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char satellite_interfaces__srv__SatelliteSetPos_Request__FIELD_NAME__vector[] = "vector";
static char satellite_interfaces__srv__SatelliteSetPos_Request__FIELD_NAME__name[] = "name";

static rosidl_runtime_c__type_description__Field satellite_interfaces__srv__SatelliteSetPos_Request__FIELDS[] = {
  {
    {satellite_interfaces__srv__SatelliteSetPos_Request__FIELD_NAME__vector, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {satellite_interfaces__srv__SatelliteSetPos_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription satellite_interfaces__srv__SatelliteSetPos_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
satellite_interfaces__srv__SatelliteSetPos_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {satellite_interfaces__srv__SatelliteSetPos_Request__TYPE_NAME, 48, 48},
      {satellite_interfaces__srv__SatelliteSetPos_Request__FIELDS, 2, 2},
    },
    {satellite_interfaces__srv__SatelliteSetPos_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char satellite_interfaces__srv__SatelliteSetPos_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field satellite_interfaces__srv__SatelliteSetPos_Response__FIELDS[] = {
  {
    {satellite_interfaces__srv__SatelliteSetPos_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
satellite_interfaces__srv__SatelliteSetPos_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {satellite_interfaces__srv__SatelliteSetPos_Response__TYPE_NAME, 49, 49},
      {satellite_interfaces__srv__SatelliteSetPos_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char satellite_interfaces__srv__SatelliteSetPos_Event__FIELD_NAME__info[] = "info";
static char satellite_interfaces__srv__SatelliteSetPos_Event__FIELD_NAME__request[] = "request";
static char satellite_interfaces__srv__SatelliteSetPos_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field satellite_interfaces__srv__SatelliteSetPos_Event__FIELDS[] = {
  {
    {satellite_interfaces__srv__SatelliteSetPos_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {satellite_interfaces__srv__SatelliteSetPos_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {satellite_interfaces__srv__SatelliteSetPos_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {satellite_interfaces__srv__SatelliteSetPos_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {satellite_interfaces__srv__SatelliteSetPos_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription satellite_interfaces__srv__SatelliteSetPos_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {satellite_interfaces__srv__SatelliteSetPos_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {satellite_interfaces__srv__SatelliteSetPos_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
satellite_interfaces__srv__SatelliteSetPos_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {satellite_interfaces__srv__SatelliteSetPos_Event__TYPE_NAME, 46, 46},
      {satellite_interfaces__srv__SatelliteSetPos_Event__FIELDS, 3, 3},
    },
    {satellite_interfaces__srv__SatelliteSetPos_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = satellite_interfaces__srv__SatelliteSetPos_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = satellite_interfaces__srv__SatelliteSetPos_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "geometry_msgs/Vector3 vector\n"
  "string name\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
satellite_interfaces__srv__SatelliteSetPos__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {satellite_interfaces__srv__SatelliteSetPos__TYPE_NAME, 40, 40},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 57, 57},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
satellite_interfaces__srv__SatelliteSetPos_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {satellite_interfaces__srv__SatelliteSetPos_Request__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
satellite_interfaces__srv__SatelliteSetPos_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {satellite_interfaces__srv__SatelliteSetPos_Response__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
satellite_interfaces__srv__SatelliteSetPos_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {satellite_interfaces__srv__SatelliteSetPos_Event__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
satellite_interfaces__srv__SatelliteSetPos__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *satellite_interfaces__srv__SatelliteSetPos__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[3] = *satellite_interfaces__srv__SatelliteSetPos_Event__get_individual_type_description_source(NULL);
    sources[4] = *satellite_interfaces__srv__SatelliteSetPos_Request__get_individual_type_description_source(NULL);
    sources[5] = *satellite_interfaces__srv__SatelliteSetPos_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
satellite_interfaces__srv__SatelliteSetPos_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *satellite_interfaces__srv__SatelliteSetPos_Request__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
satellite_interfaces__srv__SatelliteSetPos_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *satellite_interfaces__srv__SatelliteSetPos_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
satellite_interfaces__srv__SatelliteSetPos_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *satellite_interfaces__srv__SatelliteSetPos_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[3] = *satellite_interfaces__srv__SatelliteSetPos_Request__get_individual_type_description_source(NULL);
    sources[4] = *satellite_interfaces__srv__SatelliteSetPos_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
