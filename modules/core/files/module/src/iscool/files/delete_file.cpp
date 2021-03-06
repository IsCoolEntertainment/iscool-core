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
#include "iscool/files/delete_file.h"

#include "iscool/files/log_context.h"

#include "iscool/log/causeless_log.h"
#include "iscool/log/nature/error.h"

#include <boost/filesystem/operations.hpp>

void iscool::files::delete_file( const std::string& path )
{
    boost::system::error_code error;
    boost::filesystem::remove( path, error );

    if ( error )
        ic_causeless_log
            ( iscool::log::nature::error(), log_context(),
              "Could not delete file '%s': %s", path, error.message() );
}
