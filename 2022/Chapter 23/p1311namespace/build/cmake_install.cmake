<<<<<<< HEAD
# Install script for directory: /home/iaa/Desktop/gitStore/MFR2021/2022/Chapter 23/p1311namespace

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
=======
# Install script for directory: C:/Users/ivano/Desktop/GitStore/MFR2021/2022/Chapter 23/p1311namespace

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/1311")
>>>>>>> 98e5c0ec1ed949e43b6d116bd031fb224a568a2c
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
<<<<<<< HEAD
    set(CMAKE_INSTALL_CONFIG_NAME "")
=======
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
>>>>>>> 98e5c0ec1ed949e43b6d116bd031fb224a568a2c
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

<<<<<<< HEAD
# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

=======
>>>>>>> 98e5c0ec1ed949e43b6d116bd031fb224a568a2c
# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

<<<<<<< HEAD
# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

=======
>>>>>>> 98e5c0ec1ed949e43b6d116bd031fb224a568a2c
if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
<<<<<<< HEAD
file(WRITE "/home/iaa/Desktop/gitStore/MFR2021/2022/Chapter 23/p1311namespace/build/${CMAKE_INSTALL_MANIFEST}"
=======
file(WRITE "C:/Users/ivano/Desktop/GitStore/MFR2021/2022/Chapter 23/p1311namespace/build/${CMAKE_INSTALL_MANIFEST}"
>>>>>>> 98e5c0ec1ed949e43b6d116bd031fb224a568a2c
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
