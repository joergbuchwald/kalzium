# Install script for directory: /home/joerg/github/kalzium/data/maps

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/data/maps" TYPE FILE FILES
    "/home/joerg/github/kalzium/data/maps/us.png"
    "/home/joerg/github/kalzium/data/maps/se.png"
    "/home/joerg/github/kalzium/data/maps/uk.png"
    "/home/joerg/github/kalzium/data/maps/ru.png"
    "/home/joerg/github/kalzium/data/maps/it.png"
    "/home/joerg/github/kalzium/data/maps/de.png"
    "/home/joerg/github/kalzium/data/maps/dk.png"
    "/home/joerg/github/kalzium/data/maps/fi.png"
    "/home/joerg/github/kalzium/data/maps/fr.png"
    "/home/joerg/github/kalzium/data/maps/es.png"
    "/home/joerg/github/kalzium/data/maps/ukfr.png"
    "/home/joerg/github/kalzium/data/maps/ukse.png"
    "/home/joerg/github/kalzium/data/maps/ruus.png"
    )
endif()

