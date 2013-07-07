/*
 * textio.h
 *
 *  Created on: Feb 18, 2011
 *      Author: bkloppenborg
 */

/* 
 * Copyright (c) 2011 Brian Kloppenborg
 *
 * The authors request, but do not require, that you acknowledge the
 * use of this software in any publications.  See 
 * https://github.com/bkloppenborg/liboi/wiki
 * for example citations
 *
 * This file is part of the OpenCL Interferometry Library (LIBOI).
 * 
 * LIBOI is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License 
 * as published by the Free Software Foundation, either version 3 
 * of the License, or (at your option) any later version.
 * 
 * LIBOI is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public 
 * License along with LIBOI.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef READ_H_
#define READ_H_

#include <vector>
#include <string>
using namespace std;

//vector<string> &SplitString(const string &s, char delim, vector<string> &elems);
vector<string> SplitString(const string &s, char delim);

void 	StringSplit(string str, string delim, vector<string> & results);
string 	StripWhitespace(string str);
void 	StripWhitespace(vector<string> & strings);
string ReadFile(string filename, string error_message);
vector<string> ReadFile(string filename, string comment_chars, string error_message);

vector<string> Tokenize(string line);
vector<string> Tokenize(string line, vector< vector<int> > split_locations);

bool 	FileExists(string filename);

#endif /* READ_H_ */
