//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface TBLiveFeedCellBottomDetailView : UIView
{
    UILabel *_mainLabel;
    UILabel *_subLabel;
}

@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
- (void).cxx_destruct;
- (void)updateAttributedTitle:(id)arg1 subTitle:(id)arg2;
- (void)updateMainTitle:(id)arg1 subTitle:(id)arg2;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

