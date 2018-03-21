//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCChatBubble.h"

#import "MCChatBubbleBackgroundViewDelegate-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"

@class MCChatBubbleBackgroundView, NSArray, NSString, TTTAttributedLabel;

@interface MCChatNonSupportBubble : MCChatBubble <TTTAttributedLabelDelegate, MCChatBubbleBackgroundViewDelegate>
{
    _Bool _isTipForUpdate;
    MCChatBubbleBackgroundView *_innerBubbleImageView;
    TTTAttributedLabel *_nonSupportMessagelabel;
}

+ (struct CGSize)bubbleSizeForText:(id)arg1 withContainer:(struct CGSize)arg2;
+ (struct CGRect)textViewRectForCellObject:(id)arg1 withContainer:(struct CGSize)arg2;
+ (struct CGSize)bubbleSizeForCellObject:(id)arg1 withContainer:(struct CGSize)arg2;
@property(nonatomic) _Bool isTipForUpdate; // @synthesize isTipForUpdate=_isTipForUpdate;
@property(retain, nonatomic) TTTAttributedLabel *nonSupportMessagelabel; // @synthesize nonSupportMessagelabel=_nonSupportMessagelabel;
@property(retain, nonatomic) MCChatBubbleBackgroundView *innerBubbleImageView; // @synthesize innerBubbleImageView=_innerBubbleImageView;
- (void).cxx_destruct;
- (void)setIsTipForUpdate:(_Bool)arg1 withCellObject:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)chatBubbleBackgroundViewLongPress:(id)arg1;
- (void)chatBubbleBackgroundViewTapped:(id)arg1;
@property(readonly, nonatomic) NSArray *links;
- (void)recycle;
- (void)updateBubbleWithCellObject:(id)arg1 bubbleHandler:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithBubbleStyle:(long long)arg1 subStyle:(long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

