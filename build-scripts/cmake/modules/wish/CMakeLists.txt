project( iscool-wish )

include( declare-iscool-library )
include( declare-iscool-library-test )

find_package(
  Boost ${required_boost_version} REQUIRED
  )

declare_iscool_library( NAME wish
  FILES
  "wishing_well.cpp"

  LINK
  Boost::boost
  )

declare_iscool_library_test( NAME wish
  FILES
  "genie_test.cpp"
  "wishing_well_test.cpp"
  LINK
  iscool_testing
  )
