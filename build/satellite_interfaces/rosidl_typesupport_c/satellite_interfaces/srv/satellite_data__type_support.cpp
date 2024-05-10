// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from satellite_interfaces:srv/SatelliteData.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "satellite_interfaces/srv/detail/satellite_data__struct.h"
#include "satellite_interfaces/srv/detail/satellite_data__type_support.h"
#include "satellite_interfaces/srv/detail/satellite_data__functions.h"
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

typedef struct _SatelliteData_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SatelliteData_Request_type_support_ids_t;

static const _SatelliteData_Request_type_support_ids_t _SatelliteData_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SatelliteData_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SatelliteData_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SatelliteData_Request_type_support_symbol_names_t _SatelliteData_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, satellite_interfaces, srv, SatelliteData_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SatelliteData_Request)),
  }
};

typedef struct _SatelliteData_Request_type_support_data_t
{
  void * data[2];
} _SatelliteData_Request_type_support_data_t;

static _SatelliteData_Request_type_support_data_t _SatelliteData_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SatelliteData_Request_message_typesupport_map = {
  2,
  "satellite_interfaces",
  &_SatelliteData_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SatelliteData_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SatelliteData_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SatelliteData_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SatelliteData_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &satellite_interfaces__srv__SatelliteData_Request__get_type_hash,
  &satellite_interfaces__srv__SatelliteData_Request__get_type_description,
  &satellite_interfaces__srv__SatelliteData_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace satellite_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, satellite_interfaces, srv, SatelliteData_Request)() {
  return &::satellite_interfaces::srv::rosidl_typesupport_c::SatelliteData_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_data__struct.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_data__type_support.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_data__functions.h"
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

typedef struct _SatelliteData_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SatelliteData_Response_type_support_ids_t;

static const _SatelliteData_Response_type_support_ids_t _SatelliteData_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SatelliteData_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SatelliteData_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SatelliteData_Response_type_support_symbol_names_t _SatelliteData_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, satellite_interfaces, srv, SatelliteData_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SatelliteData_Response)),
  }
};

typedef struct _SatelliteData_Response_type_support_data_t
{
  void * data[2];
} _SatelliteData_Response_type_support_data_t;

static _SatelliteData_Response_type_support_data_t _SatelliteData_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SatelliteData_Response_message_typesupport_map = {
  2,
  "satellite_interfaces",
  &_SatelliteData_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SatelliteData_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SatelliteData_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SatelliteData_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SatelliteData_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &satellite_interfaces__srv__SatelliteData_Response__get_type_hash,
  &satellite_interfaces__srv__SatelliteData_Response__get_type_description,
  &satellite_interfaces__srv__SatelliteData_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace satellite_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, satellite_interfaces, srv, SatelliteData_Response)() {
  return &::satellite_interfaces::srv::rosidl_typesupport_c::SatelliteData_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_data__struct.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_data__type_support.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_data__functions.h"
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

typedef struct _SatelliteData_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SatelliteData_Event_type_support_ids_t;

static const _SatelliteData_Event_type_support_ids_t _SatelliteData_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SatelliteData_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SatelliteData_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SatelliteData_Event_type_support_symbol_names_t _SatelliteData_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, satellite_interfaces, srv, SatelliteData_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SatelliteData_Event)),
  }
};

typedef struct _SatelliteData_Event_type_support_data_t
{
  void * data[2];
} _SatelliteData_Event_type_support_data_t;

static _SatelliteData_Event_type_support_data_t _SatelliteData_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SatelliteData_Event_message_typesupport_map = {
  2,
  "satellite_interfaces",
  &_SatelliteData_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SatelliteData_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SatelliteData_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SatelliteData_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SatelliteData_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &satellite_interfaces__srv__SatelliteData_Event__get_type_hash,
  &satellite_interfaces__srv__SatelliteData_Event__get_type_description,
  &satellite_interfaces__srv__SatelliteData_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace satellite_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, satellite_interfaces, srv, SatelliteData_Event)() {
  return &::satellite_interfaces::srv::rosidl_typesupport_c::SatelliteData_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_data__type_support.h"
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
typedef struct _SatelliteData_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SatelliteData_type_support_ids_t;

static const _SatelliteData_type_support_ids_t _SatelliteData_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SatelliteData_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SatelliteData_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SatelliteData_type_support_symbol_names_t _SatelliteData_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, satellite_interfaces, srv, SatelliteData)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SatelliteData)),
  }
};

typedef struct _SatelliteData_type_support_data_t
{
  void * data[2];
} _SatelliteData_type_support_data_t;

static _SatelliteData_type_support_data_t _SatelliteData_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SatelliteData_service_typesupport_map = {
  2,
  "satellite_interfaces",
  &_SatelliteData_service_typesupport_ids.typesupport_identifier[0],
  &_SatelliteData_service_typesupport_symbol_names.symbol_name[0],
  &_SatelliteData_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SatelliteData_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SatelliteData_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SatelliteData_Request_message_type_support_handle,
  &SatelliteData_Response_message_type_support_handle,
  &SatelliteData_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    satellite_interfaces,
    srv,
    SatelliteData
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    satellite_interfaces,
    srv,
    SatelliteData
  ),
  &satellite_interfaces__srv__SatelliteData__get_type_hash,
  &satellite_interfaces__srv__SatelliteData__get_type_description,
  &satellite_interfaces__srv__SatelliteData__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace satellite_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, satellite_interfaces, srv, SatelliteData)() {
  return &::satellite_interfaces::srv::rosidl_typesupport_c::SatelliteData_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
