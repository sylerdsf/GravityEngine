#pragma once
#include <windows.h>
#include <wrl.h>
#include <math.h>
#include <string>
#include <memory>
#include <algorithm>
#include <vector>
#include <array>
#include <map>
#include <unordered_map>
#include <cstdint>
#include <fstream>
#include <sstream>
#include <cassert>
#include <boost/archive/tmpdir.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>
#include "boost/archive/polymorphic_binary_iarchive.hpp"
#include "boost/archive/polymorphic_binary_oarchive.hpp"
#include "boost/archive/basic_binary_iarchive.hpp"
#include "boost/archive/basic_binary_oarchive.hpp"
#include <boost/serialization/base_object.hpp>
#include <boost/serialization/utility.hpp>
#include <boost/serialization/list.hpp>
#include <boost/serialization/assume_abstract.hpp>
#include <boost/serialization/binary_object.hpp>
#include <boost/archive/xml_iarchive.hpp>
#include <boost/archive/xml_oarchive.hpp>
#include <boost/archive/binary_woarchive.hpp>
#include <boost/archive/binary_wiarchive.hpp>
