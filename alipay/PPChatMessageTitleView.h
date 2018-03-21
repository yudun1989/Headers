//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface PPChatMessageTitleView : UIView
{
    double _titleRightMargin;
    UIView *_separatorLine;
    UIImageView *_icon;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(nonatomic) double titleRightMargin; // @synthesize titleRightMargin=_titleRightMargin;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setSeparatorLineColor:(id)arg1;
- (void)setIconURL:(id)arg1 placeHolder:(id)arg2;
- (void)setTitle:(id)arg1;

@end

