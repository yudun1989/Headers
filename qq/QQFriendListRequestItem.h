//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/SAMRequestItem.h>

@interface QQFriendListRequestItem : SAMRequestItem
{
    int _totalTimes;
    int _currentIndex;
    long long _currentUin;
}

- (id)handleTicketError:(id)arg1;
- (id)handleMSFSDKError:(id)arg1;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;

// Remaining properties
@property(nonatomic) int currentIndex; // @dynamic currentIndex;
@property(nonatomic) long long currentUin; // @dynamic currentUin;
@property(nonatomic) int totalTimes; // @dynamic totalTimes;

@end

