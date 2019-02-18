# Install script for directory: /home/joerg/github/kalzium/data/icons

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/16x16/actions" TYPE FILE RENAME "calculate.png" FILES "/home/joerg/github/kalzium/data/icons/16-actions-calculate.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/16x16/actions" TYPE FILE RENAME "chemical.png" FILES "/home/joerg/github/kalzium/data/icons/16-actions-chemical.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/16x16/actions" TYPE FILE RENAME "elempic.png" FILES "/home/joerg/github/kalzium/data/icons/16-actions-elempic.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/16x16/actions" TYPE FILE RENAME "energies.png" FILES "/home/joerg/github/kalzium/data/icons/16-actions-energies.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/16x16/actions" TYPE FILE RENAME "eqchem.png" FILES "/home/joerg/github/kalzium/data/icons/16-actions-eqchem.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/16x16/actions" TYPE FILE RENAME "glossary.png" FILES "/home/joerg/github/kalzium/data/icons/16-actions-glossary.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/16x16/actions" TYPE FILE RENAME "isotopemap.png" FILES "/home/joerg/github/kalzium/data/icons/16-actions-isotopemap.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/16x16/actions" TYPE FILE RENAME "kalzium_molviewer.png" FILES "/home/joerg/github/kalzium/data/icons/16-actions-kalzium_molviewer.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/16x16/actions" TYPE FILE RENAME "kalzium_rs.png" FILES "/home/joerg/github/kalzium/data/icons/16-actions-kalzium_rs.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/16x16/actions" TYPE FILE RENAME "kalzium_tables.png" FILES "/home/joerg/github/kalzium/data/icons/16-actions-kalzium_tables.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/16x16/actions" TYPE FILE RENAME "legend.png" FILES "/home/joerg/github/kalzium/data/icons/16-actions-legend.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/16x16/actions" TYPE FILE RENAME "misc.png" FILES "/home/joerg/github/kalzium/data/icons/16-actions-misc.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/16x16/actions" TYPE FILE RENAME "numbers.png" FILES "/home/joerg/github/kalzium/data/icons/16-actions-numbers.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/16x16/actions" TYPE FILE RENAME "orbits.png" FILES "/home/joerg/github/kalzium/data/icons/16-actions-orbits.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/16x16/actions" TYPE FILE RENAME "overview.png" FILES "/home/joerg/github/kalzium/data/icons/16-actions-overview.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/16x16/actions" TYPE FILE RENAME "plot.png" FILES "/home/joerg/github/kalzium/data/icons/16-actions-plot.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/16x16/actions" TYPE FILE RENAME "sidebar.png" FILES "/home/joerg/github/kalzium/data/icons/16-actions-sidebar.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/16x16/actions" TYPE FILE RENAME "spectrum.png" FILES "/home/joerg/github/kalzium/data/icons/16-actions-spectrum.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/16x16/actions" TYPE FILE RENAME "statematter.png" FILES "/home/joerg/github/kalzium/data/icons/16-actions-statematter.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/16x16/actions" TYPE FILE RENAME "timeline.png" FILES "/home/joerg/github/kalzium/data/icons/16-actions-timeline.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/16x16/actions" TYPE FILE RENAME "tooltip.png" FILES "/home/joerg/github/kalzium/data/icons/16-actions-tooltip.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/22x22/actions" TYPE FILE RENAME "calculate.png" FILES "/home/joerg/github/kalzium/data/icons/22-actions-calculate.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/22x22/actions" TYPE FILE RENAME "chemical.png" FILES "/home/joerg/github/kalzium/data/icons/22-actions-chemical.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/22x22/actions" TYPE FILE RENAME "elempic.png" FILES "/home/joerg/github/kalzium/data/icons/22-actions-elempic.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/22x22/actions" TYPE FILE RENAME "energies.png" FILES "/home/joerg/github/kalzium/data/icons/22-actions-energies.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/22x22/actions" TYPE FILE RENAME "eqchem.png" FILES "/home/joerg/github/kalzium/data/icons/22-actions-eqchem.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/22x22/actions" TYPE FILE RENAME "glossary.png" FILES "/home/joerg/github/kalzium/data/icons/22-actions-glossary.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/22x22/actions" TYPE FILE RENAME "isotopemap.png" FILES "/home/joerg/github/kalzium/data/icons/22-actions-isotopemap.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/22x22/actions" TYPE FILE RENAME "kalzium_molviewer.png" FILES "/home/joerg/github/kalzium/data/icons/22-actions-kalzium_molviewer.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/22x22/actions" TYPE FILE RENAME "kalzium_rs.png" FILES "/home/joerg/github/kalzium/data/icons/22-actions-kalzium_rs.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/22x22/actions" TYPE FILE RENAME "kalzium_tables.png" FILES "/home/joerg/github/kalzium/data/icons/22-actions-kalzium_tables.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/22x22/actions" TYPE FILE RENAME "legend.png" FILES "/home/joerg/github/kalzium/data/icons/22-actions-legend.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/22x22/actions" TYPE FILE RENAME "numbers.png" FILES "/home/joerg/github/kalzium/data/icons/22-actions-numbers.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/22x22/actions" TYPE FILE RENAME "orbits.png" FILES "/home/joerg/github/kalzium/data/icons/22-actions-orbits.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/22x22/actions" TYPE FILE RENAME "overview.png" FILES "/home/joerg/github/kalzium/data/icons/22-actions-overview.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/22x22/actions" TYPE FILE RENAME "plot.png" FILES "/home/joerg/github/kalzium/data/icons/22-actions-plot.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/22x22/actions" TYPE FILE RENAME "sidebar.png" FILES "/home/joerg/github/kalzium/data/icons/22-actions-sidebar.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/22x22/actions" TYPE FILE RENAME "spectrum.png" FILES "/home/joerg/github/kalzium/data/icons/22-actions-spectrum.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/22x22/actions" TYPE FILE RENAME "statematter.png" FILES "/home/joerg/github/kalzium/data/icons/22-actions-statematter.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/22x22/actions" TYPE FILE RENAME "timeline.png" FILES "/home/joerg/github/kalzium/data/icons/22-actions-timeline.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/22x22/actions" TYPE FILE RENAME "tooltip.png" FILES "/home/joerg/github/kalzium/data/icons/22-actions-tooltip.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/32x32/actions" TYPE FILE RENAME "calculate.png" FILES "/home/joerg/github/kalzium/data/icons/32-actions-calculate.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/32x32/actions" TYPE FILE RENAME "chemical.png" FILES "/home/joerg/github/kalzium/data/icons/32-actions-chemical.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/32x32/actions" TYPE FILE RENAME "elempic.png" FILES "/home/joerg/github/kalzium/data/icons/32-actions-elempic.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/32x32/actions" TYPE FILE RENAME "energies.png" FILES "/home/joerg/github/kalzium/data/icons/32-actions-energies.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/32x32/actions" TYPE FILE RENAME "eqchem.png" FILES "/home/joerg/github/kalzium/data/icons/32-actions-eqchem.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/32x32/actions" TYPE FILE RENAME "glossary.png" FILES "/home/joerg/github/kalzium/data/icons/32-actions-glossary.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/32x32/actions" TYPE FILE RENAME "isotopemap.png" FILES "/home/joerg/github/kalzium/data/icons/32-actions-isotopemap.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/32x32/actions" TYPE FILE RENAME "kalzium_molviewer.png" FILES "/home/joerg/github/kalzium/data/icons/32-actions-kalzium_molviewer.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/32x32/actions" TYPE FILE RENAME "kalzium_rs.png" FILES "/home/joerg/github/kalzium/data/icons/32-actions-kalzium_rs.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/32x32/actions" TYPE FILE RENAME "kalzium_tables.png" FILES "/home/joerg/github/kalzium/data/icons/32-actions-kalzium_tables.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/32x32/actions" TYPE FILE RENAME "legend.png" FILES "/home/joerg/github/kalzium/data/icons/32-actions-legend.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/32x32/actions" TYPE FILE RENAME "misc.png" FILES "/home/joerg/github/kalzium/data/icons/32-actions-misc.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/32x32/actions" TYPE FILE RENAME "numbers.png" FILES "/home/joerg/github/kalzium/data/icons/32-actions-numbers.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/32x32/actions" TYPE FILE RENAME "orbits.png" FILES "/home/joerg/github/kalzium/data/icons/32-actions-orbits.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/32x32/actions" TYPE FILE RENAME "overview.png" FILES "/home/joerg/github/kalzium/data/icons/32-actions-overview.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/32x32/actions" TYPE FILE RENAME "plot.png" FILES "/home/joerg/github/kalzium/data/icons/32-actions-plot.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/32x32/actions" TYPE FILE RENAME "sidebar.png" FILES "/home/joerg/github/kalzium/data/icons/32-actions-sidebar.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/32x32/actions" TYPE FILE RENAME "spectrum.png" FILES "/home/joerg/github/kalzium/data/icons/32-actions-spectrum.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/32x32/actions" TYPE FILE RENAME "statematter.png" FILES "/home/joerg/github/kalzium/data/icons/32-actions-statematter.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/32x32/actions" TYPE FILE RENAME "timeline.png" FILES "/home/joerg/github/kalzium/data/icons/32-actions-timeline.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/32x32/actions" TYPE FILE RENAME "tooltip.png" FILES "/home/joerg/github/kalzium/data/icons/32-actions-tooltip.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/48x48/actions" TYPE FILE RENAME "calculate.png" FILES "/home/joerg/github/kalzium/data/icons/48-actions-calculate.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/48x48/actions" TYPE FILE RENAME "chemical.png" FILES "/home/joerg/github/kalzium/data/icons/48-actions-chemical.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/48x48/actions" TYPE FILE RENAME "energies.png" FILES "/home/joerg/github/kalzium/data/icons/48-actions-energies.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/48x48/actions" TYPE FILE RENAME "eqchem.png" FILES "/home/joerg/github/kalzium/data/icons/48-actions-eqchem.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/48x48/actions" TYPE FILE RENAME "glossary.png" FILES "/home/joerg/github/kalzium/data/icons/48-actions-glossary.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/48x48/actions" TYPE FILE RENAME "isotopemap.png" FILES "/home/joerg/github/kalzium/data/icons/48-actions-isotopemap.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/48x48/actions" TYPE FILE RENAME "kalzium_molviewer.png" FILES "/home/joerg/github/kalzium/data/icons/48-actions-kalzium_molviewer.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/48x48/actions" TYPE FILE RENAME "kalzium_rs.png" FILES "/home/joerg/github/kalzium/data/icons/48-actions-kalzium_rs.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/48x48/actions" TYPE FILE RENAME "kalzium_tables.png" FILES "/home/joerg/github/kalzium/data/icons/48-actions-kalzium_tables.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/48x48/actions" TYPE FILE RENAME "legend.png" FILES "/home/joerg/github/kalzium/data/icons/48-actions-legend.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/48x48/actions" TYPE FILE RENAME "misc.png" FILES "/home/joerg/github/kalzium/data/icons/48-actions-misc.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/48x48/actions" TYPE FILE RENAME "numbers.png" FILES "/home/joerg/github/kalzium/data/icons/48-actions-numbers.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/48x48/actions" TYPE FILE RENAME "orbits.png" FILES "/home/joerg/github/kalzium/data/icons/48-actions-orbits.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/48x48/actions" TYPE FILE RENAME "overview.png" FILES "/home/joerg/github/kalzium/data/icons/48-actions-overview.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/48x48/actions" TYPE FILE RENAME "plot.png" FILES "/home/joerg/github/kalzium/data/icons/48-actions-plot.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/48x48/actions" TYPE FILE RENAME "sidebar.png" FILES "/home/joerg/github/kalzium/data/icons/48-actions-sidebar.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/48x48/actions" TYPE FILE RENAME "spectrum.png" FILES "/home/joerg/github/kalzium/data/icons/48-actions-spectrum.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/48x48/actions" TYPE FILE RENAME "statematter.png" FILES "/home/joerg/github/kalzium/data/icons/48-actions-statematter.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/48x48/actions" TYPE FILE RENAME "timeline.png" FILES "/home/joerg/github/kalzium/data/icons/48-actions-timeline.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/48x48/actions" TYPE FILE RENAME "tooltip.png" FILES "/home/joerg/github/kalzium/data/icons/48-actions-tooltip.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/64x64/actions" TYPE FILE RENAME "kalzium_molviewer.png" FILES "/home/joerg/github/kalzium/data/icons/64-actions-kalzium_molviewer.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/64x64/actions" TYPE FILE RENAME "kalzium_rs.png" FILES "/home/joerg/github/kalzium/data/icons/64-actions-kalzium_rs.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/64x64/actions" TYPE FILE RENAME "kalzium_tables.png" FILES "/home/joerg/github/kalzium/data/icons/64-actions-kalzium_tables.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/64x64/actions" TYPE FILE RENAME "numbers.png" FILES "/home/joerg/github/kalzium/data/icons/64-actions-numbers.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/scalable/actions" TYPE FILE RENAME "calculate.svgz" FILES "/home/joerg/github/kalzium/data/icons/sc-actions-calculate.svgz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/scalable/actions" TYPE FILE RENAME "chemical.svgz" FILES "/home/joerg/github/kalzium/data/icons/sc-actions-chemical.svgz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/scalable/actions" TYPE FILE RENAME "elempic.svgz" FILES "/home/joerg/github/kalzium/data/icons/sc-actions-elempic.svgz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/scalable/actions" TYPE FILE RENAME "energies.svgz" FILES "/home/joerg/github/kalzium/data/icons/sc-actions-energies.svgz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/scalable/actions" TYPE FILE RENAME "eqchem.svgz" FILES "/home/joerg/github/kalzium/data/icons/sc-actions-eqchem.svgz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/scalable/actions" TYPE FILE RENAME "glossary.svgz" FILES "/home/joerg/github/kalzium/data/icons/sc-actions-glossary.svgz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/scalable/actions" TYPE FILE RENAME "isotopemap.svgz" FILES "/home/joerg/github/kalzium/data/icons/sc-actions-isotopemap.svgz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/scalable/actions" TYPE FILE RENAME "kalzium_molviewer.svgz" FILES "/home/joerg/github/kalzium/data/icons/sc-actions-kalzium_molviewer.svgz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/scalable/actions" TYPE FILE RENAME "kalzium_rs.svgz" FILES "/home/joerg/github/kalzium/data/icons/sc-actions-kalzium_rs.svgz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/scalable/actions" TYPE FILE RENAME "kalzium_tables.svgz" FILES "/home/joerg/github/kalzium/data/icons/sc-actions-kalzium_tables.svgz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/scalable/actions" TYPE FILE RENAME "misc.svgz" FILES "/home/joerg/github/kalzium/data/icons/sc-actions-misc.svgz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/scalable/actions" TYPE FILE RENAME "numbers.svgz" FILES "/home/joerg/github/kalzium/data/icons/sc-actions-numbers.svgz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/scalable/actions" TYPE FILE RENAME "orbits.svgz" FILES "/home/joerg/github/kalzium/data/icons/sc-actions-orbits.svgz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/scalable/actions" TYPE FILE RENAME "overview.svgz" FILES "/home/joerg/github/kalzium/data/icons/sc-actions-overview.svgz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/scalable/actions" TYPE FILE RENAME "plot.svgz" FILES "/home/joerg/github/kalzium/data/icons/sc-actions-plot.svgz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/scalable/actions" TYPE FILE RENAME "sidebar.svgz" FILES "/home/joerg/github/kalzium/data/icons/sc-actions-sidebar.svgz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/scalable/actions" TYPE FILE RENAME "spectrum.svgz" FILES "/home/joerg/github/kalzium/data/icons/sc-actions-spectrum.svgz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/scalable/actions" TYPE FILE RENAME "statematter.svgz" FILES "/home/joerg/github/kalzium/data/icons/sc-actions-statematter.svgz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/scalable/actions" TYPE FILE RENAME "timeline.svgz" FILES "/home/joerg/github/kalzium/data/icons/sc-actions-timeline.svgz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/icons/hicolor/scalable/actions" TYPE FILE RENAME "tooltip.svgz" FILES "/home/joerg/github/kalzium/data/icons/sc-actions-tooltip.svgz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  
    set(DESTDIR_VALUE "$ENV{DESTDIR}")
    if (NOT DESTDIR_VALUE)
        execute_process(COMMAND "/usr/bin/cmake" -E touch "/usr/local/share/kalzium/icons/hicolor")
        set(HAVE_GTK_UPDATE_ICON_CACHE_EXEC /usr/bin/gtk-update-icon-cache)
        if (HAVE_GTK_UPDATE_ICON_CACHE_EXEC)
            execute_process(COMMAND /usr/bin/gtk-update-icon-cache -q -t -i . WORKING_DIRECTORY "/usr/local/share/kalzium/icons/hicolor")
        endif ()
    endif (NOT DESTDIR_VALUE)
    
endif()

