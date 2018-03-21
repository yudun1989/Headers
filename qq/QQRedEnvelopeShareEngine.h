//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewPluginQQBizBase.h>

#import <QQMainProject/AvatarServiceDelegate-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface QQRedEnvelopeShareEngine : QQWebViewPluginQQBizBase <AvatarServiceDelegate>
{
    NSMutableDictionary *_blockDic;
    NSDictionary *_arMapStarPhotoDic;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)didFailedGetAvatarInfo:(id)arg1 type:(int)arg2;
- (void)didFailedDownloadingImage:(id)arg1 type:(int)arg2 size:(int)arg3 shape:(int)arg4 avatarInfo:(id)arg5;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
- (void)requestRankingWithFlag:(int)arg1 num:(int)arg2 block:(CDUnknownBlockType)arg3;
- (id)getComboListDictionaryWithModel:(id)arg1;
- (id)getComboHeadDictionaryWithModel:(id)arg1;
- (id)getJSModelWithUin:(unsigned long long)arg1 ranking:(int)arg2 count:(int)arg3;
- (id)getNickNameWithUin:(long long)arg1;
- (id)getKeyWithUin:(long long)arg1;
- (long long)getUinWithKey:(id)arg1;
- (void)getRedEnvelopeRankingListWithFlag:(int)arg1 num:(int)arg2 block:(CDUnknownBlockType)arg3;
- (void)getRedEnvelopeImageWithKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

