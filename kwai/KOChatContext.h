//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KOBaseContext.h"

@interface KOChatContext : KOBaseContext
{
    long long _chatType;
    long long _limit;
    long long _ordering;
}

+ (id)contextWithChatType:(long long)arg1 limit:(long long)arg2 ordering:(long long)arg3;
+ (id)contextWithChatType:(long long)arg1;
@property(readonly, nonatomic) long long ordering; // @synthesize ordering=_ordering;
@property(readonly, nonatomic) long long limit; // @synthesize limit=_limit;
@property(readonly, nonatomic) long long chatType; // @synthesize chatType=_chatType;
- (id)initWithChatType:(long long)arg1 limit:(long long)arg2 ordering:(long long)arg3;

@end

