//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOMsgModel.h>

@class EmojiStickerInfo, NSString;

@interface QQAIOModelMarketFace : QQAIOMsgModel
{
    int _storeFaceState;
    int _magicFaceState;
    int _rscType;
    NSString *_storeFacePath;
    NSString *_storeSoundPath;
    NSString *_content;
    int _orginFaceSendTimes;
    _Bool _isAPNGEmoji;
    EmojiStickerInfo *_stickInfo;
}

+ (int)increaseOrginFaceSendTimes:(unsigned long long)arg1;
+ (id)modelWithMessageModel:(id)arg1;
@property(nonatomic) _Bool isAPNGEmoji; // @synthesize isAPNGEmoji=_isAPNGEmoji;
@property(retain, nonatomic) EmojiStickerInfo *stickInfo; // @synthesize stickInfo=_stickInfo;
- (void).cxx_destruct;
- (_Bool)shouldDisplaySelfNick;
- (double)cellHeight;
- (double)approvalTailHeight;
- (id)eventHandleClassName;
- (id)cellViewClassName;
- (id)cellClassName;
- (_Bool)isMaxOrginFaceSendTimes;
- (id)initWithMessageModel:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) int magicFaceState; // @dynamic magicFaceState;
@property(nonatomic) int rscType; // @dynamic rscType;
@property(retain, nonatomic) NSString *storeFacePath; // @dynamic storeFacePath;
@property(nonatomic) int storeFaceState; // @dynamic storeFaceState;
@property(retain, nonatomic) NSString *storeSoundPath; // @dynamic storeSoundPath;

@end

