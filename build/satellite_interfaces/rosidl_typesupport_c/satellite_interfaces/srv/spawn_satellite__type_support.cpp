// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from satellite_interfaces:srv/SpawnSatellite.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "satellite_interfaces/srv/detail/spawn_satellite__struct.h"
#include "satellite_interfaces/srv/detail/spawn_satellite__type_support.h"
#include "satellite_interfaces/srv/detail/spawn_satellite__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace satellite_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SpawnSatellite_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SpawnSatellite_Request_type_support_ids_t;

static const _SpawnSatellite_Request_type_support_ids_t _SpawnSatellite_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SpawnSatellite_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SpawnSatellite_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SpawnSatellite_Request_type_support_symbol_names_t _SpawnSatellite_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, satellite_interfaces, srv, SpawnSatellite_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SpawnSatellite_Request)),
  }
};

typedef struct _SpawnSatellite_Request_type_support_data_t
{
  void * data[2];
} _SpawnSatellite_Request_type_support_data_t;

static _SpawnSatellite_Request_type_support_data_t _SpawnSatellite_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SpawnSatellite_Request_message_typesupport_map = {
  2,
  "satellite_interfaces",
  &_SpawnSatellite_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SpawnSatellite_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SpawnSatellite_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SpawnSatellite_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SpawnSatellite_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &satellite_interfaces__srv__SpawnSatellite_Request__get_type_hash,
  &satellite_interfaces__srv__SpawnSatellite_Request__get_type_description,
  &satellite_interfaces__srv__SpawnSatellite_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace satellite_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, satellite_interfaces, srv, SpawnSatellite_Request)() {
  return &::satellite_interfaces::srv::rosidl_typesupport_c::SpawnSatellite_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "satellite_interfaces/srv/detail/spawn_satellite__struct.h"
// already included above
// #include "satellite_interfaces/srv/detail/spawn_satellite__type_support.h"
// already included above
// #include "satellite_interfaces/srv/detail/spawn_satellite__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace satellite_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SpawnSatellite_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SpawnSatellite_Response_type_support_ids_t;

static const _SpawnSatellite_Response_type_support_ids_t _SpawnSatellite_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SpawnSatellite_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SpawnSatellite_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SpawnSatellite_Response_type_support_symbol_names_t _SpawnSatellite_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, satellite_interfaces, srv, SpawnSatellite_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SpawnSatellite_Response)),
  }
};

typedef struct _SpawnSatellite_Response_type_support_data_t
{
  void * data[2];
} _SpawnSatellite_Response_type_support_data_t;

static _SpawnSatellite_Response_type_support_data_t _SpawnSatellite_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SpawnSatellite_Response_message_typesupport_map = {
  2,
  "satellite_interfaces",
  &_SpawnSatellite_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SpawnSatellite_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SpawnSatellite_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SpawnSatellite_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SpawnSatellite_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &satellite_interfaces__srv__SpawnSatellite_Response__get_type_hash,
  &satellite_interfaces__srv__SpawnSatellite_Response__get_type_description,
  &satellite_interfaces__srv__SpawnSatellite_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace satellite_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, satellite_interfaces, srv, SpawnSatellite_Response)() {
  return &::satellite_interfaces::srv::rosidl_typesupport_c::SpawnSatellite_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "satellite_interfaces/srv/detail/spawn_satellite__struct.h"
// already included above
// #include "satellite_interfaces/srv/detail/spawn_satellite__type_support.h"
// already included above
// #include "satellite_interfaces/srv/detail/spawn_satellite__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace satellite_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SpawnSatellite_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SpawnSatellite_Event_type_support_ids_t;

static const _SpawnSatellite_Event_type_support_ids_t _SpawnSatellite_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SpawnSatellite_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SpawnSatellite_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SpawnSatellite_Event_type_support_symbol_names_t _SpawnSatellite_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, satellite_interfaces, srv, SpawnSatellite_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SpawnSatellite_Event)),
  }
};

typedef struct _SpawnSatellite_Event_type_support_data_t
{
  void * data[2];
} _SpawnSatellite_Event_type_support_data_t;

static _SpawnSatellite_Event_type_support_data_t _SpawnSatellite_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SpawnSatellite_Event_message_typesupport_map = {
  2,
  "satellite_interfaces",
  &_SpawnSatellite_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SpawnSatellite_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SpawnSatellite_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SpawnSatellite_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SpawnSatellite_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &satellite_interfaces__srv__SpawnSatellite_Event__get_type_hash,
  &satellite_interfaces__srv__SpawnSatellite_Event__get_type_description,
  &satellite_interfaces__srv__SpawnSatellite_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace satellite_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, satellite_interfaces, srv, SpawnSatellite_Event)() {
  return &::satellite_interfaces::srv::rosidl_typesupport_c::SpawnSatellite_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "satellite_interfaces/srv/detail/spawn_satellite__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace satellite_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SpawnSatellite_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SpawnSatellite_type_support_ids_t;

static const _SpawnSatellite_type_support_ids_t _SpawnSatellite_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SpawnSatellite_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SpawnSatellite_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SpawnSatellite_type_support_symbol_names_t _SpawnSatellite_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, satellite_interfaces, srv, SpawnSatellite)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SpawnSatellite)),
  }
};

typedef struct _SpawnSatellite_type_support_data_t
{
  void * data[2];
} _SpawnSatellite_type_support_data_t;

static _SpawnSatellite_type_support_data_t _SpawnSatellite_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SpawnSatellite_service_typesupport_map = {
  2,
  "satellite_interfaces",
  &_SpawnSatellite_service_typesupport_ids.typesupport_identifier[0],
  &_SpawnSatellite_service_typesupport_symbol_names.symbol_name[0],
  &_SpawnSatellite_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SpawnSatellite_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SpawnSatellite_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SpawnSatellite_Request_message_type_support_handle,
  &SpawnSatellite_Response_message_type_support_handle,
  &SpawnSatellite_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    satellite_interfaces,
    srv,
    SpawnSatellite
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    satellite_interfaces,
    srv,
    SpawnSatellite
  ),
  &satellite_interfaces__srv__SpawnSatellite__get_type_hash,
  &satellite_interfaces__srv__SpawnSatellite__get_type_description,
  &satellite_interfaces__srv__SpawnSatellite__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace satellite_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, satellite_interfaces, srv, SpawnSatellite)() {
  return &::satellite_interfaces::srv::rosidl_typesupport_c::SpawnSatellite_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
