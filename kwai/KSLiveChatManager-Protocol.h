//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KSLiveChatMetadata;

@protocol KSLiveChatManager <NSObject>
@property(readonly, nonatomic) _Bool coreCommunicatorActive;
@property(readonly, nonatomic) long long currentConnectionState;
@property(readonly, nonatomic) long long disconnectionReason;
@property(readonly, nonatomic) KSLiveChatMetadata *currentConnectionMetadata;
@property(readonly, nonatomic) KSLiveChatMetadata *lastConnectionMetadata;
@end

