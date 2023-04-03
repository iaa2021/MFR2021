file(REMOVE_RECURSE
  "libmyLib.a"
  "libmyLib.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/myLib.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
