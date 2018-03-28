//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTVFeedListCell.h"

@class TTVFeedListAdBottomContainerView, TTVFeedListVideoTopContainerView;

@interface TTVFeedListVideoAdCell : TTVFeedListCell
{
    TTVFeedListVideoTopContainerView *_topContainerView;
    TTVFeedListAdBottomContainerView *_bottomContainerView;
}

@property(retain, nonatomic) TTVFeedListAdBottomContainerView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain, nonatomic) TTVFeedListVideoTopContainerView *topContainerView; // @synthesize topContainerView=_topContainerView;
- (void).cxx_destruct;
- (void)hiddenBottomAvatarViewIfNeed:(id)arg1 animated:(_Bool)arg2;
- (void)cellForRowContext:(id)arg1;
- (void)didSelectWithContext:(id)arg1;
- (void)endDisplayWithContext:(id)arg1;
- (void)willDisplayWithContext:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

