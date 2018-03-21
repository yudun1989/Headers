//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/SAMRequestItem.h>

@class NSString;

@interface QQHotChatDestroyroomRequestItem : SAMRequestItem
{
    NSString *_uid;
    NSString *_groupCode;
    NSString *_errorMsg;
    _Bool _success;
}

- (void).cxx_destruct;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;

// Remaining properties
@property(retain, nonatomic) NSString *errorMsg; // @dynamic errorMsg;
@property(retain, nonatomic) NSString *groupCode; // @dynamic groupCode;
@property(nonatomic) _Bool success; // @dynamic success;
@property(retain, nonatomic) NSString *uid; // @dynamic uid;

@end

