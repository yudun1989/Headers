//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UILabel;

@interface MomPooColorView : UIControl
{
    UILabel *_colorLable;
    UIImageView *_bgView;
    UILabel *_checkIcon;
}

@property(retain, nonatomic) UILabel *checkIcon; // @synthesize checkIcon=_checkIcon;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UILabel *colorLable; // @synthesize colorLable=_colorLable;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

