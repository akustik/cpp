/*
 * Version.h
 *
 *  Created on: Dec 29, 2012
 *      Author: guillem
 */

#ifndef VERSION_H_
#define VERSION_H_

#include <string>

using namespace std;

namespace pokerhands {

class Version {
public:
	Version();
	virtual ~Version();
	string get();
};

} /* namespace pokerhands */
#endif /* VERSION_H_ */
