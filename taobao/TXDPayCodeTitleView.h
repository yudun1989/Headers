//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface TXDPayCodeTitleView : UIView
{
    UIImageView *_icon;
    UILabel *_titleLabel;
    UILabel *_arrow;
    CDUnknownBlockType _oberveWidth;
}

@property(copy, nonatomic) CDUnknownBlockType oberveWidth; // @synthesize oberveWidth=_oberveWidth;
@property(retain, nonatomic) UILabel *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

