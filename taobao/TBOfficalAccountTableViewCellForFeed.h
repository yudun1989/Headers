//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOfficalAccountBaseTableViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface TBOfficalAccountTableViewCellForFeed : TBOfficalAccountBaseTableViewCell
{
    UIImageView *_groupView;
    UIImageView *_contentImageView;
    UILabel *_titleLabel;
    UILabel *_contentTextLabel;
    UIButton *_seeMore;
    UILabel *_tbAccessibilityLabel;
}

@property(retain, nonatomic) UILabel *tbAccessibilityLabel; // @synthesize tbAccessibilityLabel=_tbAccessibilityLabel;
@property(retain, nonatomic) UIButton *seeMore; // @synthesize seeMore=_seeMore;
@property(retain, nonatomic) UILabel *contentTextLabel; // @synthesize contentTextLabel=_contentTextLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) UIImageView *groupView; // @synthesize groupView=_groupView;
- (void).cxx_destruct;
- (void)handleTapGestureRecognizer:(id)arg1;
- (void)seeMoreButtonTapped:(id)arg1;
- (void)configureWithItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

