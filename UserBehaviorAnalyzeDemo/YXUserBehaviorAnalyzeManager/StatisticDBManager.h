//
//  StatisticDBManager.h
//  数据库创建
//
//  Created by Katherine on 2018/6/12.
//  Copyright © 2018年 XYX. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface StatisticDBManager : NSObject

/**
 *  创建表
 *
 *  @return 返回表对象
 */
+ (StatisticDBManager *)openListData;

/**
 *  添加数据到表中
 *
 *  @param datas 数据字典
 *
 *  @return 返回添加结果
 */
- (BOOL)addData:(NSDictionary *)datas;

/**
 *  查表方法
 *
 *  @param dataId 查表ID
 *
 *  @return 返回查询结果数组
 */
- (NSArray *)checkDataFromedataId:(NSString *)dataId;

/**
 *  删除表内容
 *
 *  @param dataId 表ID
 */
- (void)deleteDataWithDataId:(NSString *)dataId;

@end
