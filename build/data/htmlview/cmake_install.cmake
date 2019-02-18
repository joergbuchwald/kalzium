# Install script for directory: /home/joerg/github/kalzium/data/htmlview

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/data/htmlview" TYPE FILE FILES
    "/home/joerg/github/kalzium/data/htmlview/abundance.png"
    "/home/joerg/github/kalzium/data/htmlview/boilingpoint.png"
    "/home/joerg/github/kalzium/data/htmlview/book.png"
    "/home/joerg/github/kalzium/data/htmlview/characteristics.png"
    "/home/joerg/github/kalzium/data/htmlview/discovery.png"
    "/home/joerg/github/kalzium/data/htmlview/electronaffinity.png"
    "/home/joerg/github/kalzium/data/htmlview/header.png"
    "/home/joerg/github/kalzium/data/htmlview/ionization.png"
    "/home/joerg/github/kalzium/data/htmlview/mass.png"
    "/home/joerg/github/kalzium/data/htmlview/meltingpoint.png"
    "/home/joerg/github/kalzium/data/htmlview/radius.png"
    "/home/joerg/github/kalzium/data/htmlview/structure.png"
    "/home/joerg/github/kalzium/data/htmlview/icons.svg"
    "/home/joerg/github/kalzium/data/htmlview/style.css"
    )
endif()

