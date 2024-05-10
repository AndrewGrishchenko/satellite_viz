// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from satellite_interfaces:srv/SpawnSatellite.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "satellite_interfaces/srv/detail/spawn_satellite__functions.h"
#include "satellite_interfaces/srv/detail/spawn_satellite__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace satellite_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SpawnSatellite_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SpawnSatellite_Request_type_support_ids_t;

static const _SpawnSatellite_Request_type_support_ids_t _SpawnSatellite_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, satellite_interfaces, srv, SpawnSatellite_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, satellite_interfaces, srv, SpawnSatellite_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SpawnSatellite_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &satellite_interfaces__srv__SpawnSatellite_Request__get_type_hash,
  &satellite_interfaces__srv__SpawnSatellite_Request__get_type_description,
  &satellite_interfaces__srv__SpawnSatellite_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace satellite_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<satellite_interfaces::srv::SpawnSatellite_Request>()
{
  return &::satellite_interfaces::srv::rosidl_typesupport_cpp::SpawnSatellite_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, satellite_interfaces, srv, SpawnSatellite_Request)() {
  return get_message_type_support_handle<satellite_interfaces::srv::SpawnSatellite_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "satellite_interfaces/srv/detail/spawn_satellite__functions.h"
// already included above
// #include "satellite_interfaces/srv/detail/spawn_satellite__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace satellite_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SpawnSatellite_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SpawnSatellite_Response_type_support_ids_t;

static const _SpawnSatellite_Response_type_support_ids_t _SpawnSatellite_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, satellite_interfaces, srv, SpawnSatellite_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, satellite_interfaces, srv, SpawnSatellite_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SpawnSatellite_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &satellite_interfaces__srv__SpawnSatellite_Response__get_type_hash,
  &satellite_interfaces__srv__SpawnSatellite_Response__get_type_description,
  &satellite_interfaces__srv__SpawnSatellite_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace satellite_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<satellite_interfaces::srv::SpawnSatellite_Response>()
{
  return &::satellite_interfaces::srv::rosidl_typesupport_cpp::SpawnSatellite_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, satellite_interfaces, srv, SpawnSatellite_Response)() {
  return get_message_type_support_handle<satellite_interfaces::srv::SpawnSatellite_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "satellite_interfaces/srv/detail/spawn_satellite__functions.h"
// already included above
// #include "satellite_interfaces/srv/detail/spawn_satellite__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace satellite_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SpawnSatellite_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SpawnSatellite_Event_type_support_ids_t;

static const _SpawnSatellite_Event_type_support_ids_t _SpawnSatellite_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, satellite_interfaces, srv, SpawnSatellite_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, satellite_interfaces, srv, SpawnSatellite_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SpawnSatellite_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &satellite_interfaces__srv__SpawnSatellite_Event__get_type_hash,
  &satellite_interfaces__srv__SpawnSatellite_Event__get_type_description,
  &satellite_interfaces__srv__SpawnSatellite_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace satellite_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<satellite_interfaces::srv::SpawnSatellite_Event>()
{
  return &::satellite_interfaces::srv::rosidl_typesupport_cpp::SpawnSatellite_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, satellite_interfaces, srv, SpawnSatellite_Event)() {
  return get_message_type_support_handle<satellite_interfaces::srv::SpawnSatellite_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "satellite_interfaces/srv/detail/spawn_satellite__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace satellite_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SpawnSatellite_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SpawnSatellite_type_support_ids_t;

static const _SpawnSatellite_type_support_ids_t _SpawnSatellite_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, satellite_interfaces, srv, SpawnSatellite)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, satellite_interfaces, srv, SpawnSatellite)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SpawnSatellite_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<satellite_interfaces::srv::SpawnSatellite_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<satellite_interfaces::srv::SpawnSatellite_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<satellite_interfaces::srv::SpawnSatellite_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<satellite_interfaces::srv::SpawnSatellite>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<satellite_interfaces::srv::SpawnSatellite>,
  &satellite_interfaces__srv__SpawnSatellite__get_type_hash,
  &satellite_interfaces__srv__SpawnSatellite__get_type_description,
  &satellite_interfaces__srv__SpawnSatellite__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace satellite_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<satellite_interfaces::srv::SpawnSatellite>()
{
  return &::satellite_interfaces::srv::rosidl_typesupport_cpp::SpawnSatellite_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
