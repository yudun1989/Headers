//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface AWELiveHotNavView : UIView
{
    UIButton *_backBtn;
    UILabel *_titleLabel;
    double _statusBarHeight;
}

@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configWithTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

