/*  Copyright 2017 Gibbon aka 'atsb'

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

#include <iostream>
#include <fstream>

#if defined DEBIAN
	#include <jsoncpp/json/json.h>
#else
	#include <json/json.h>
#endif

std::ifstream fl_json_file_move(FL_CONFIG_FILE_NAME);
Json::Reader fl_json_config_move_reader;
Json::Value fl_json_config_move_value;
