/*
  Copyright 2018-present IsCool Entertainment

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

  http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/
#include "iscool/preferences/declare_global_int_property.h"

#include "iscool/preferences/detail/global_deserializer.h"

#include "iscool/preferences/property_deserializer.h"

iscool::preferences::int_property
iscool::preferences::declare_global_int_property
( std::string&& name, int fallback )
{
    detail::global_deserializer().add_int_property( name );
    return int_property( std::move( name ), fallback );
}
