/*
Copyright (c) 2007. Victor M. Alvarez [plusvic@gmail.com].

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

#ifndef _PE_H 
#define _PE_H

int is_pe(unsigned char* buffer, unsigned int buffer_length);
int is_elf(unsigned char* buffer, unsigned int buffer_length);

unsigned long long get_entry_point_offset(unsigned char* buffer, unsigned int buffer_length);
unsigned long long get_entry_point_address(unsigned char* buffer, unsigned int buffer_length, size_t base_address);

#endif

