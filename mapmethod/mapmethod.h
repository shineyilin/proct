/*
 * mapmethod.h
 *
 *  Created on: 2018Äê7ÔÂ27ÈÕ
 *      Author: admin
 */

#ifndef MAPMETHOD_MAPMETHOD_H_
#define MAPMETHOD_MAPMETHOD_H_
#include "basealgo/point2dprocess.h"
#include "basealgo/point2d.h"
#include "basealgo/typedef.h"

namespace std {

typedef struct
{
	FLOAT x;
	FLOAT y;
	FLOAT z;
	FLOAT Rx;
	FLOAT Ry;
	FLOAT Rz;
} POS_DIR_DATA;

typedef vector<POS_DIR_DATA> POS_DIR_DATA_LIST;


class mapmethod {
public:
	mapmethod();
    mapmethod(POS_DIR_DATA pos_dir_data);

    void getPosDataList(FLOAT current_time);
    mapmethod(const mapmethod &m);
    virtual ~mapmethod();
private:
    POS_DIR_DATA_LIST pos_dir_data_list;
    POS_DIR_DATA      error_data;
};

} /* namespace std */

#endif /* MAPMETHOD_MAPMETHOD_H_ */
