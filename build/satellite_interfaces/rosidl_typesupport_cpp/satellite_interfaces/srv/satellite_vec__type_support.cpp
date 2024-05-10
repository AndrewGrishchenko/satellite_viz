// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from satellite_interfaces:srv/SatelliteVec.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "satellite_interfaces/srv/detail/satellite_vec__functions.h"
#include "satellite_interfaces/srv/detail/satellite_vec__struct.hpp"
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

typedef struct _SatelliteVec_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SatelliteVec_Request_type_support_ids_t;

static const _SatelliteVec_Request_type_support_ids_t _SatelliteVec_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SatelliteVec_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SatelliteVec_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SatelliteVec_Request_type_support_symbol_names_t _SatelliteVec_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, satellite_interfaces, srv, SatelliteVec_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, satellite_interfaces, srv, SatelliteVec_Request)),
  }
};

typedef struct _SatelliteVec_Request_type_support_data_t
{
  void * data[2];
} _SatelliteVec_Request_type_support_data_t;

static _SatelliteVec_Request_type_support_data_t _SatelliteVec_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SatelliteVec_Request_message_typesupport_map = {
  2,
  "satellite_interfaces",
  &_SatelliteVec_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SatelliteVec_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SatelliteVec_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SatelliteVec_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SatelliteVec_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &satellite_interfaces__srv__SatelliteVec_Request__get_type_hash,
  &satellite_interfaces__srv__SatelliteVec_Request__get_type_description,
  &satellite_interfaces__srv__SatelliteVec_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace satellite_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<satellite_interfaces::srv::SatelliteVec_Request>()
{
  return &::satellite_interfaces::srv::rosidl_typesupport_cpp::SatelliteVec_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, satellite_interfaces, srv, SatelliteVec_Request)() {
  return get_message_type_support_handle<satellite_interfaces::srv::SatelliteVec_Request>();
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
// #include "satellite_interfaces/srv/detail/satellite_vec__functions.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_vec__struct.hpp"
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

typedef struct _SatelliteVec_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SatelliteVec_Response_type_support_ids_t;

static const _SatelliteVec_Response_type_support_ids_t _SatelliteVec_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SatelliteVec_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SatelliteVec_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SatelliteVec_Response_type_support_symbol_names_t _SatelliteVec_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, satellite_interfaces, srv, SatelliteVec_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, satellite_interfaces, srv, SatelliteVec_Response)),
  }
};

typedef struct _SatelliteVec_Response_type_support_data_t
{
  void * data[2];
} _SatelliteVec_Response_type_support_data_t;

static _SatelliteVec_Response_type_support_data_t _SatelliteVec_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SatelliteVec_Response_message_typesupport_map = {
  2,
  "satellite_interfaces",
  &_SatelliteVec_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SatelliteVec_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SatelliteVec_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SatelliteVec_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SatelliteVec_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &satellite_interfaces__srv__SatelliteVec_Response__get_type_hash,
  &satellite_interfaces__srv__SatelliteVec_Response__get_type_description,
  &satellite_interfaces__srv__SatelliteVec_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace satellite_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<satellite_interfaces::srv::SatelliteVec_Response>()
{
  return &::satellite_interfaces::srv::rosidl_typesupport_cpp::SatelliteVec_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, satellite_interfaces, srv, SatelliteVec_Response)() {
  return get_message_type_support_handle<satellite_interfaces::srv::SatelliteVec_Response>();
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
// #include "satellite_interfaces/srv/detail/satellite_vec__functions.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_vec__struct.hpp"
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

typedef struct _SatelliteVec_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SatelliteVec_Event_type_support_ids_t;

static const _SatelliteVec_Event_type_support_ids_t _SatelliteVec_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SatelliteVec_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SatelliteVec_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SatelliteVec_Event_type_support_symbol_names_t _SatelliteVec_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, satellite_interfaces, srv, SatelliteVec_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, satellite_interfaces, srv, SatelliteVec_Event)),
  }
};

typedef struct _SatelliteVec_Event_type_support_data_t
{
  void * data[2];
} _SatelliteVec_Event_type_support_data_t;

static _SatelliteVec_Event_type_support_data_t _SatelliteVec_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SatelliteVec_Event_message_typesupport_map = {
  2,
  "satellite_interfaces",
  &_SatelliteVec_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SatelliteVec_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SatelliteVec_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SatelliteVec_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SatelliteVec_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &satellite_interfaces__srv__SatelliteVec_Event__get_type_hash,
  &satellite_interfaces__srv__SatelliteVec_Event__get_type_description,
  &satellite_interfaces__srv__SatelliteVec_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace satellite_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<satellite_interfaces::srv::SatelliteVec_Event>()
{
  return &::satellite_interfaces::srv::rosidl_typesupport_cpp::SatelliteVec_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, satellite_interfaces, srv, SatelliteVec_Event)() {
  return get_message_type_support_handle<satellite_interfaces::srv::SatelliteVec_Event>();
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
// #include "satellite_interfaces/srv/detail/satellite_vec__struct.hpp"
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

typedef struct _SatelliteVec_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SatelliteVec_type_support_ids_t;

static const _SatelliteVec_type_support_ids_t _SatelliteVec_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SatelliteVec_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SatelliteVec_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SatelliteVec_type_support_symbol_names_t _SatelliteVec_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, satellite_interfaces, srv, SatelliteVec)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, satellite_interfaces, srv, SatelliteVec)),
  }
};

typedef struct _SatelliteVec_type_support_data_t
{
  void * data[2];
} _SatelliteVec_type_support_data_t;

static _SatelliteVec_type_support_data_t _SatelliteVec_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SatelliteVec_service_typesupport_map = {
  2,
  "satellite_interfaces",
  &_SatelliteVec_service_typesupport_ids.typesupport_identifier[0],
  &_SatelliteVec_service_typesupport_symbol_names.symbol_name[0],
  &_SatelliteVec_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SatelliteVec_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SatelliteVec_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<satellite_interfaces::srv::SatelliteVec_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<satellite_interfaces::srv::SatelliteVec_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<satellite_interfaces::srv::SatelliteVec_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<satellite_interfaces::srv::SatelliteVec>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<satellite_interfaces::srv::SatelliteVec>,
  &satellite_interfaces__srv__SatelliteVec__get_type_hash,
  &satellite_interfaces__srv__SatelliteVec__get_type_description,
  &satellite_interfaces__srv__SatelliteVec__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace satellite_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<satellite_interfaces::srv::SatelliteVec>()
{
  return &::satellite_interfaces::srv::rosidl_typesupport_cpp::SatelliteVec_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
