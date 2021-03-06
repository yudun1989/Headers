//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HLRichLabel, KSFeedAttributeConfiguration, KSTopicRichLabel, KS_feed, UILabel;

@interface KSFeedMetaView : UIView
{
    KSFeedAttributeConfiguration *_attributeConfiguration;
    _Bool _useAsyncLabel;
    HLRichLabel *_merchantLabel;
    UILabel *_reasonLabel;
    HLRichLabel *_magicFaceLabel;
    HLRichLabel *_musicLabel;
    HLRichLabel *_locationLabel;
    KSTopicRichLabel *_myWordsLabel;
    HLRichLabel *_likeLabel;
    CDUnknownBlockType _didClickLikerBlock;
    HLRichLabel *_commentLabel;
    double _contentHeight;
    struct KS_feed *_feed;
    UIView *_bottomLine;
}

+ (struct CGSize)sizeWithString:(id)arg1 prefixImage:(id)arg2 maxWidth:(double)arg3 numberOfLines:(long long)arg4;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) KS_feed *feed; // @synthesize feed=_feed;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) HLRichLabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(copy, nonatomic) CDUnknownBlockType didClickLikerBlock; // @synthesize didClickLikerBlock=_didClickLikerBlock;
@property(retain, nonatomic) HLRichLabel *likeLabel; // @synthesize likeLabel=_likeLabel;
@property(retain, nonatomic) KSTopicRichLabel *myWordsLabel; // @synthesize myWordsLabel=_myWordsLabel;
@property(retain, nonatomic) HLRichLabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) HLRichLabel *musicLabel; // @synthesize musicLabel=_musicLabel;
@property(retain, nonatomic) HLRichLabel *magicFaceLabel; // @synthesize magicFaceLabel=_magicFaceLabel;
@property(retain, nonatomic) UILabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;
@property(retain, nonatomic) HLRichLabel *merchantLabel; // @synthesize merchantLabel=_merchantLabel;
- (void).cxx_destruct;
- (id)commentView;
- (struct CGSize)updateLabel:(id)arg1 withString:(id)arg2 prefixImage:(id)arg3 cachedSize:(struct CGSize)arg4 numberOfLines:(long long)arg5;
- (void)reloadComment;
- (void)reloadLike;
- (void)reloadMusic;
- (void)reloadPoi;
- (void)reloadMagicFace;
- (void)reloadMyWords;
- (void)reloadMerchant;
- (void)reloadReason;
- (void)applyAttributeConfiguration;
- (void)layoutComponents;
- (void)drawWithFeed:(struct KS_feed *)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1 useAsyncLabel:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

