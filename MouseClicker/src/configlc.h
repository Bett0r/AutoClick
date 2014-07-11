<<<<<<< HEAD
/*
 * configlc.h
 *
 *  Created on: 12.03.2014
 *      Author: Henning
 */

#ifndef CONFIGLC_H_
#define CONFIGLC_H_

class config_lc {
public:
	config_lc();
	virtual ~config_lc();
};

#endif /* CONFIGLC_H_ */
=======
/*
 * configlc.h
 *
 *  Created on: 12.03.2014
 *      Author: Henning
 */

#ifndef CONFIGLC_H_
#define CONFIGLC_H_

int RANDOMPOSITIONENABLED = 1;
int RANDOMPOSITIONDISABLED = 0;

class config_lc {
public:
	int isRandomPosition;
	config_lc();
	virtual ~config_lc();
};

#endif /* CONFIGLC_H_ */
>>>>>>> origin/master
