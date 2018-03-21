//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOProtocol-Protocol.h"

@class APChatRoomInfo, APDAOResult, NSArray, NSString;

@protocol APChatRoomDAOProxy <APDAOProtocol>
- (APDAOResult *)setChatRoomNoticeDisplayStatus:(NSString *)arg1 status:(NSString *)arg2;
- (APDAOResult *)setChatRoomNoticeReadStatus:(NSString *)arg1 status:(NSString *)arg2;
- (APDAOResult *)updateChatRoomNotice:(NSString *)arg1 notice:(NSString *)arg2;
- (APDAOResult *)deleteChatRoomWithId:(NSString *)arg1;
- (NSArray *)selectAllChatRoomInfoList;
- (NSArray *)selectChatRoomInfoList:(NSArray *)arg1;
- (NSArray *)selectChatRoomInfosWithOwnerId:(NSString *)arg1 ownerBizType:(NSString *)arg2;
- (APChatRoomInfo *)selectChatRoomInfoWithGroupId:(NSString *)arg1;
- (APDAOResult *)insertChatRoomInfoList:(NSArray *)arg1;
- (APDAOResult *)insertChatRoomInfo:(APChatRoomInfo *)arg1;
@end

