// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from satellite_interfaces:srv/SatelliteSetPos.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "satellite_interfaces/srv/detail/satellite_set_pos__struct.h"
#include "satellite_interfaces/srv/detail/satellite_set_pos__type_support.h"
#include "satellite_interfaces/srv/detail/satellite_set_pos__functions.h"
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

typedef struct _SatelliteSetPos_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SatelliteSetPos_Request_type_support_ids_t;

static const _SatelliteSetPos_Request_type_support_ids_t _SatelliteSetPos_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SatelliteSetPos_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SatelliteSetPos_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SatelliteSetPos_Request_type_support_symbol_names_t _SatelliteSetPos_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, satellite_interfaces, srv, SatelliteSetPos_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SatelliteSetPos_Request)),
  }
};

typedef struct _SatelliteSetPos_Request_type_support_data_t
{
  void * data[2];
} _SatelliteSetPos_Request_type_support_data_t;

static _SatelliteSetPos_Request_type_support_data_t _SatelliteSetPos_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SatelliteSetPos_Request_message_typesupport_map = {
  2,
  "satellite_interfaces",
  &_SatelliteSetPos_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SatelliteSetPos_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SatelliteSetPos_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SatelliteSetPos_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SatelliteSetPos_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &satellite_interfaces__srv__SatelliteSetPos_Request__get_type_hash,
  &satellite_interfaces__srv__SatelliteSetPos_Request__get_type_description,
  &satellite_interfaces__srv__SatelliteSetPos_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace satellite_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, satellite_interfaces, srv, SatelliteSetPos_Request)() {
  return &::satellite_interfaces::srv::rosidl_typesupport_c::SatelliteSetPos_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_set_pos__struct.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_set_pos__type_support.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_set_pos__functions.h"
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

typedef struct _SatelliteSetPos_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SatelliteSetPos_Response_type_support_ids_t;

static const _SatelliteSetPos_Response_type_support_ids_t _SatelliteSetPos_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SatelliteSetPos_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SatelliteSetPos_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SatelliteSetPos_Response_type_support_symbol_names_t _SatelliteSetPos_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, satellite_interfaces, srv, SatelliteSetPos_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SatelliteSetPos_Response)),
  }
};

typedef struct _SatelliteSetPos_Response_type_support_data_t
{
  void * data[2];
} _SatelliteSetPos_Response_type_support_data_t;

static _SatelliteSetPos_Response_type_support_data_t _SatelliteSetPos_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SatelliteSetPos_Response_message_typesupport_map = {
  2,
  "satellite_interfaces",
  &_SatelliteSetPos_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SatelliteSetPos_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SatelliteSetPos_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SatelliteSetPos_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SatelliteSetPos_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &satellite_interfaces__srv__SatelliteSetPos_Response__get_type_hash,
  &satellite_interfaces__srv__SatelliteSetPos_Response__get_type_description,
  &satellite_interfaces__srv__SatelliteSetPos_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace satellite_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, satellite_interfaces, srv, SatelliteSetPos_Response)() {
  return &::satellite_interfaces::srv::rosidl_typesupport_c::SatelliteSetPos_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_set_pos__struct.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_set_pos__type_support.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_set_pos__functions.h"
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

typedef struct _SatelliteSetPos_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SatelliteSetPos_Event_type_support_ids_t;

static const _SatelliteSetPos_Event_type_support_ids_t _SatelliteSetPos_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SatelliteSetPos_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SatelliteSetPos_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SatelliteSetPos_Event_type_support_symbol_names_t _SatelliteSetPos_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, satellite_interfaces, srv, SatelliteSetPos_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SatelliteSetPos_Event)),
  }
};

typedef struct _SatelliteSetPos_Event_type_support_data_t
{
  void * data[2];
} _SatelliteSetPos_Event_type_support_data_t;

static _SatelliteSetPos_Event_type_support_data_t _SatelliteSetPos_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SatelliteSetPos_Event_message_typesupport_map = {
  2,
  "satellite_interfaces",
  &_SatelliteSetPos_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SatelliteSetPos_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SatelliteSetPos_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SatelliteSetPos_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SatelliteSetPos_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &satellite_interfaces__srv__SatelliteSetPos_Event__get_type_hash,
  &satellite_interfaces__srv__SatelliteSetPos_Event__get_type_description,
  &satellite_interfaces__srv__SatelliteSetPos_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace satellite_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, satellite_interfaces, srv, SatelliteSetPos_Event)() {
  return &::satellite_interfaces::srv::rosidl_typesupport_c::SatelliteSetPos_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_set_pos__type_support.h"
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
typedef struct _SatelliteSetPos_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SatelliteSetPos_type_support_ids_t;

static const _SatelliteSetPos_type_support_ids_t _SatelliteSetPos_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SatelliteSetPos_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SatelliteSetPos_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SatelliteSetPos_type_support_symbol_names_t _SatelliteSetPos_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, satellite_interfaces, srv, SatelliteSetPos)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SatelliteSetPos)),
  }
};

typedef struct _SatelliteSetPos_type_support_data_t
{
  void * data[2];
} _SatelliteSetPos_type_support_data_t;

static _SatelliteSetPos_type_support_data_t _SatelliteSetPos_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SatelliteSetPos_service_typesupport_map = {
  2,
  "satellite_interfaces",
  &_SatelliteSetPos_service_typesupport_ids.typesupport_identifier[0],
  &_SatelliteSetPos_service_typesupport_symbol_names.symbol_name[0],
  &_SatelliteSetPos_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SatelliteSetPos_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SatelliteSetPos_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SatelliteSetPos_Request_message_type_support_handle,
  &SatelliteSetPos_Response_message_type_support_handle,
  &SatelliteSetPos_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    satellite_interfaces,
    srv,
    SatelliteSetPos
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    satellite_interfaces,
    srv,
    SatelliteSetPos
  ),
  &satellite_interfaces__srv__SatelliteSetPos__get_type_hash,
  &satellite_interfaces__srv__SatelliteSetPos__get_type_description,
  &satellite_interfaces__srv__SatelliteSetPos__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace satellite_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, satellite_interfaces, srv, SatelliteSetPos)() {
  return &::satellite_interfaces::srv::rosidl_typesupport_c::SatelliteSetPos_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
