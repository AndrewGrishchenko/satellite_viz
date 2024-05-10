// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from satellite_interfaces:srv/SatelliteName.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "satellite_interfaces/srv/detail/satellite_name__functions.h"
#include "satellite_interfaces/srv/detail/satellite_name__struct.hpp"
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

typedef struct _SatelliteName_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SatelliteName_Request_type_support_ids_t;

static const _SatelliteName_Request_type_support_ids_t _SatelliteName_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SatelliteName_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SatelliteName_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SatelliteName_Request_type_support_symbol_names_t _SatelliteName_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, satellite_interfaces, srv, SatelliteName_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, satellite_interfaces, srv, SatelliteName_Request)),
  }
};

typedef struct _SatelliteName_Request_type_support_data_t
{
  void * data[2];
} _SatelliteName_Request_type_support_data_t;

static _SatelliteName_Request_type_support_data_t _SatelliteName_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SatelliteName_Request_message_typesupport_map = {
  2,
  "satellite_interfaces",
  &_SatelliteName_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SatelliteName_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SatelliteName_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SatelliteName_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SatelliteName_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &satellite_interfaces__srv__SatelliteName_Request__get_type_hash,
  &satellite_interfaces__srv__SatelliteName_Request__get_type_description,
  &satellite_interfaces__srv__SatelliteName_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace satellite_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<satellite_interfaces::srv::SatelliteName_Request>()
{
  return &::satellite_interfaces::srv::rosidl_typesupport_cpp::SatelliteName_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, satellite_interfaces, srv, SatelliteName_Request)() {
  return get_message_type_support_handle<satellite_interfaces::srv::SatelliteName_Request>();
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
// #include "satellite_interfaces/srv/detail/satellite_name__functions.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_name__struct.hpp"
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

typedef struct _SatelliteName_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SatelliteName_Response_type_support_ids_t;

static const _SatelliteName_Response_type_support_ids_t _SatelliteName_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SatelliteName_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SatelliteName_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SatelliteName_Response_type_support_symbol_names_t _SatelliteName_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, satellite_interfaces, srv, SatelliteName_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, satellite_interfaces, srv, SatelliteName_Response)),
  }
};

typedef struct _SatelliteName_Response_type_support_data_t
{
  void * data[2];
} _SatelliteName_Response_type_support_data_t;

static _SatelliteName_Response_type_support_data_t _SatelliteName_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SatelliteName_Response_message_typesupport_map = {
  2,
  "satellite_interfaces",
  &_SatelliteName_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SatelliteName_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SatelliteName_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SatelliteName_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SatelliteName_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &satellite_interfaces__srv__SatelliteName_Response__get_type_hash,
  &satellite_interfaces__srv__SatelliteName_Response__get_type_description,
  &satellite_interfaces__srv__SatelliteName_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace satellite_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<satellite_interfaces::srv::SatelliteName_Response>()
{
  return &::satellite_interfaces::srv::rosidl_typesupport_cpp::SatelliteName_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, satellite_interfaces, srv, SatelliteName_Response)() {
  return get_message_type_support_handle<satellite_interfaces::srv::SatelliteName_Response>();
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
// #include "satellite_interfaces/srv/detail/satellite_name__functions.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_name__struct.hpp"
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

typedef struct _SatelliteName_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SatelliteName_Event_type_support_ids_t;

static const _SatelliteName_Event_type_support_ids_t _SatelliteName_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SatelliteName_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SatelliteName_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SatelliteName_Event_type_support_symbol_names_t _SatelliteName_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, satellite_interfaces, srv, SatelliteName_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, satellite_interfaces, srv, SatelliteName_Event)),
  }
};

typedef struct _SatelliteName_Event_type_support_data_t
{
  void * data[2];
} _SatelliteName_Event_type_support_data_t;

static _SatelliteName_Event_type_support_data_t _SatelliteName_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SatelliteName_Event_message_typesupport_map = {
  2,
  "satellite_interfaces",
  &_SatelliteName_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SatelliteName_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SatelliteName_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SatelliteName_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SatelliteName_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &satellite_interfaces__srv__SatelliteName_Event__get_type_hash,
  &satellite_interfaces__srv__SatelliteName_Event__get_type_description,
  &satellite_interfaces__srv__SatelliteName_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace satellite_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<satellite_interfaces::srv::SatelliteName_Event>()
{
  return &::satellite_interfaces::srv::rosidl_typesupport_cpp::SatelliteName_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, satellite_interfaces, srv, SatelliteName_Event)() {
  return get_message_type_support_handle<satellite_interfaces::srv::SatelliteName_Event>();
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
// #include "satellite_interfaces/srv/detail/satellite_name__struct.hpp"
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

typedef struct _SatelliteName_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SatelliteName_type_support_ids_t;

static const _SatelliteName_type_support_ids_t _SatelliteName_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SatelliteName_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SatelliteName_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SatelliteName_type_support_symbol_names_t _SatelliteName_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, satellite_interfaces, srv, SatelliteName)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, satellite_interfaces, srv, SatelliteName)),
  }
};

typedef struct _SatelliteName_type_support_data_t
{
  void * data[2];
} _SatelliteName_type_support_data_t;

static _SatelliteName_type_support_data_t _SatelliteName_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SatelliteName_service_typesupport_map = {
  2,
  "satellite_interfaces",
  &_SatelliteName_service_typesupport_ids.typesupport_identifier[0],
  &_SatelliteName_service_typesupport_symbol_names.symbol_name[0],
  &_SatelliteName_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SatelliteName_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SatelliteName_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<satellite_interfaces::srv::SatelliteName_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<satellite_interfaces::srv::SatelliteName_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<satellite_interfaces::srv::SatelliteName_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<satellite_interfaces::srv::SatelliteName>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<satellite_interfaces::srv::SatelliteName>,
  &satellite_interfaces__srv__SatelliteName__get_type_hash,
  &satellite_interfaces__srv__SatelliteName__get_type_description,
  &satellite_interfaces__srv__SatelliteName__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace satellite_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<satellite_interfaces::srv::SatelliteName>()
{
  return &::satellite_interfaces::srv::rosidl_typesupport_cpp::SatelliteName_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
