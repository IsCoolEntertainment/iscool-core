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
#ifndef ISCOOL_NET_BYTE_ARRAY_SERIALIZATION_TPP
#define ISCOOL_NET_BYTE_ARRAY_SERIALIZATION_TPP

#include "iscool/net/byte_array.h"
#include "iscool/net/byte_array_reader.h"

template<typename T>
iscool::net::byte_array&
iscool::net::operator<<( byte_array& output, const T& value )
{
    output.append( value );
    return output;
}

template<typename T>
iscool::net::byte_array_reader&
iscool::net::operator>>( byte_array_reader& input, T& value )
{
    value = input.get< T >();
    return input;
}

#endif
