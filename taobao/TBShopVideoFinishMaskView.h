//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBIconFontButton, UILabel;

@interface TBShopVideoFinishMaskView : UIView
{
    TBIconFontButton *_replayButton;
    UILabel *_replayLabel;
    TBIconFontButton *_shareButton;
    UILabel *_shareLabel;
}

@property(retain, nonatomic) UILabel *shareLabel; // @synthesize shareLabel=_shareLabel;
@property(retain, nonatomic) TBIconFontButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UILabel *replayLabel; // @synthesize replayLabel=_replayLabel;
@property(retain, nonatomic) TBIconFontButton *replayButton; // @synthesize replayButton=_replayButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)createLabelWithTitle:(id)arg1;
- (id)createIconFontButtonWithImageName:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

