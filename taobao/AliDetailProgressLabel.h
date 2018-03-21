//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor, UIFont;

@interface AliDetailProgressLabel : UILabel
{
    UIColor *_progressColor;
    UIColor *_bgColor;
    UIColor *_titleColor;
    UIFont *_titleFont;
    UILabel *_foreLabel;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UILabel *foreLabel; // @synthesize foreLabel=_foreLabel;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
- (void).cxx_destruct;
- (void)configCurrentTitle:(id)arg1;
- (void)configCurrentProgress:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

