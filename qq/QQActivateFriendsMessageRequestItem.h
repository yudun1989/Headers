//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQActivateFriendsRequestItem.h>

@class NSMutableArray;

@interface QQActivateFriendsMessageRequestItem : QQActivateFriendsRequestItem
{
    NSMutableArray *_sendingImReminders;
    NSMutableArray *_successImReminders;
    NSMutableArray *_failedImReminders;
}

@property(retain, nonatomic) NSMutableArray *failedImReminders; // @synthesize failedImReminders=_failedImReminders;
@property(retain, nonatomic) NSMutableArray *successImReminders; // @synthesize successImReminders=_successImReminders;
@property(copy, nonatomic) NSMutableArray *sendingImReminders; // @synthesize sendingImReminders=_sendingImReminders;
- (void).cxx_destruct;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;
- (id)init;

@end

