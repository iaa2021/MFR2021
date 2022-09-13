file(REMOVE_RECURSE
  "libhLib.a"
  "libhLib.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/hLib.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
