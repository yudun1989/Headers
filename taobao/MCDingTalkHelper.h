//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MCDingTalkHelper : NSObject
{
}

+ (_Bool)isMySendMessage:(id)arg1;
+ (void)clearMessagesWithSessionId:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (id)wkMessagesToIMMessages:(id)arg1;
+ (id)wkMessageToIMMessage:(id)arg1;
+ (id)imMessageToWKMessage:(id)arg1;

@end
