//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface APChatLbsShareService : NSObject
{
}

+ (id)sharedInstance;
- (id)getNavViewControllerWithMsgInfo:(id)arg1 inSession:(id)arg2 sessionType:(id)arg3 otherInfo:(id)arg4;
- (id)getChatStatusbarInfoWith:(id)arg1 type:(id)arg2;
- (void)forceClearRealtimeLocationShare:(id)arg1 sessionType:(id)arg2;
- (void)closeRealtimeLocationShare:(id)arg1 sessionType:(id)arg2;
- (_Bool)amISharingLBSRealtimeTo:(id)arg1 sessionType:(id)arg2;
- (_Bool)isRealtimeLBSShareActiveForPerson:(id)arg1;
- (_Bool)isRealtimeLBSShareActiveForGroup:(id)arg1;

@end

