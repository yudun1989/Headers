//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IQQMessageProcessor-Protocol.h>

@class NSMutableArray;

@interface QQMessageAssemblyLine : NSObject <IQQMessageProcessor>
{
    NSMutableArray *_processorArray;
}

+ (id)MsgAssemblyLineForVoipPushC2CTest;
+ (id)MsgAssemblyLineForVoipGroup;
+ (id)MsgAssemblyLineForVoipPushDis;
+ (id)MsgAssemblyLineForVoipPushC2C;
+ (id)MsgAssemblyLineForLifePreMsg;
+ (id)MsgAssemblyLineForAccostOffline;
+ (id)MsgAssemblyLineForC2COnline;
+ (id)MsgAssemblyLineForC2COffline;
+ (id)MsgAssemblyLineForDiscussRoam;
+ (id)MsgAssemblyLineForDiscussOffline;
+ (id)MsgAssemblyLineForDiscussOnlinePush;
+ (id)MsgAssemblyLineForGroupRoam;
+ (id)MsgAssemblyLineForGroupOffine;
+ (id)MsgAssemblyLineForGroupOnlinePush;
- (id)processMsgEncapsulation:(id)arg1;
- (void)removeProcessor:(id)arg1;
- (void)removeAllProcessors;
- (_Bool)addMessageProcessor:(id)arg1;
- (void)dealloc;
- (id)init;

@end

