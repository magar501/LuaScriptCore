//
//  LSCLuaObjectPushProtocol.h
//  LuaScriptCore
//
//  Created by 冯鸿杰 on 16/11/1.
//  Copyright © 2016年 vimfung. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LSCContext;


/**
 对象入栈协议
 */
@protocol LSCManagedObjectProtocol <NSObject>


@required

/**
 获取关联标识

 @return 关联标识
 */
- (NSString *)linkId;

/**
 入栈数据

 @param context 上下文对象
 @return YES 表示已将对象入栈，NO 表示未将对象入栈
 */
- (BOOL)pushWithContext:(LSCContext *)context;

@end
