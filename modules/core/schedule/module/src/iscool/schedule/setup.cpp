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
#include "iscool/schedule/setup.h"

#include "iscool/schedule/detail/call_later.h"

void iscool::schedule::initialize( delayed_call_delegate delegate )
{
    assert( detail::call_later.empty() );
    assert( !delegate.empty() );
    
    detail::call_later = delegate;
}

void iscool::schedule::finalize()
{
    detail::call_later = delayed_call_delegate();
    detail::call_manager.clear();
}
