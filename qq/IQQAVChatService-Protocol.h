//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol IQQAVChatService
- (void)handleAppTerminal;
- (void)writeQuaReportInfoWhenTerminate;
- (void)writeQuaReportInfoWhenCrash;
- (_Bool)isQuaReportExist;
- (void)makePhoneCall:(NSString *)arg1;
- (void)resetTotalUnreadCount;
- (void)resetUnreadCount:(NSString *)arg1 accType:(int)arg2;
- (int)getAVUnreadCount:(NSString *)arg1 accType:(int)arg2;
- (int)getTotalAVUnreadCount;
@end

