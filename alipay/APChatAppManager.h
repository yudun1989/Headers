//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface APChatAppManager : NSObject
{
}

- (void)closeRecommandStatusWithSpaceCode:(id)arg1 objectId:(id)arg2;
- (id)bizCodeWithIsGroup:(_Bool)arg1 isDiscussGroup:(_Bool)arg2;
- (_Bool)showRecommandWithApp:(id)arg1 bizCode:(id)arg2;
- (id)cdpWithAppId:(id)arg1 bizCode:(id)arg2;
- (_Bool)showRecommandWithAppId:(id)arg1 bizCode:(id)arg2;
- (_Bool)whetherNeedShowRedDot:(id)arg1 newMap:(id)arg2;
- (void)requestRecommandStatusWithStageCode:(id)arg1 bizCode:(id)arg2 spaceCode:(id)arg3;
- (void)dealloc;

@end

