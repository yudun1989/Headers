//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTBaseUserProfileCell.h"

@class SSAvatarView, SSThemedImageView, SSThemedLabel, SSThemedView, TTIconLabel;

@interface TTVisitorCell : TTBaseUserProfileCell
{
    SSAvatarView *_avatarView;
    TTIconLabel *_titleLabel;
    SSThemedLabel *_lastVisitTimeLabel;
    SSThemedImageView *_arrowImageView;
    SSThemedView *_textContainerView;
}

+ (double)cellHeight;
+ (double)spacingOfToutiao;
+ (double)spacingOfNewV;
+ (double)imageSize;
+ (double)spacingToMargin;
+ (double)spacingOfAvatarTitle;
@property(retain, nonatomic) SSThemedView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(retain, nonatomic) SSThemedImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) SSThemedLabel *lastVisitTimeLabel; // @synthesize lastVisitTimeLabel=_lastVisitTimeLabel;
@property(retain, nonatomic) TTIconLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SSAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reloadWithVisitorModel:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;

@end

