//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SSShareMessageManager : NSObject
{
}

+ (id)shareManager;
- (void)shareMessageWithGroupModel:(id)arg1 shareText:(id)arg2 platformKey:(id)arg3 uniqueId:(id)arg4 adID:(id)arg5 sourceType:(long long)arg6 platform:(long long)arg7 shareUrl:(id)arg8 shareImageUrl:(id)arg9;
- (void)shareMessageWithGroupModel:(id)arg1 shareText:(id)arg2 platformKey:(id)arg3 adID:(id)arg4 sourceType:(long long)arg5;
- (void)shareMessageWithGroupModel:(id)arg1 shareText:(id)arg2 platformKey:(id)arg3 adID:(id)arg4 sourceType:(long long)arg5 platform:(long long)arg6 shareUrl:(id)arg7 shareImageUrl:(id)arg8;
- (void)dealloc;

@end

