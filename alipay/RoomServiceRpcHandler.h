//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RoomServiceProtocol-Protocol.h"

@class NSString;

@interface RoomServiceRpcHandler : NSObject <RoomServiceProtocol>
{
}

+ (_Bool)needRetryWithResultCode:(int)arg1 DTRpcException:(id)arg2;
+ (id)errorForUnkown;
+ (id)errorForRpcResult:(id)arg1 DTRpcException:(id)arg2;
- (void)joincallAckWithRoomId:(id)arg1 userId:(id)arg2 clientType:(int)arg3 callback:(CDUnknownBlockType)arg4;
- (void)reportICEWithRoomId:(id)arg1 uid:(id)arg2 msg:(id)arg3 callback:(CDUnknownBlockType)arg4 needRetry:(_Bool)arg5;
- (void)reportICEWithRoomId:(id)arg1 uid:(id)arg2 msg:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)addMsgsFrom:(id)arg1 toArray:(id)arg2;
- (void)addTurnAndStunServersFrom:(id)arg1 toArray:(id)arg2;
- (void)joinRoomWithUserId:(id)arg1 room:(id)arg2 clientType:(int)arg3 bizName:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 needRetry:(_Bool)arg6;
- (void)joinRoomWithUserId:(id)arg1 room:(id)arg2 clientType:(int)arg3 bizName:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)createRoomWithUserId:(id)arg1 callType:(int)arg2 callMode:(int)arg3 clientType:(int)arg4 bizName:(id)arg5 extInfo:(id)arg6 completionHandler:(CDUnknownBlockType)arg7 needRetry:(_Bool)arg8;
- (void)createRoomWithUserId:(id)arg1 callType:(int)arg2 callMode:(int)arg3 clientType:(int)arg4 bizName:(id)arg5 extInfo:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)leaveRoomWithRoomId:(id)arg1 uid:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 needRetry:(_Bool)arg4;
- (void)leaveRoomWithRoomId:(id)arg1 uid:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

