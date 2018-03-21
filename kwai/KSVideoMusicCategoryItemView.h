//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface KSVideoMusicCategoryItemView : UIView
{
    CDUnknownBlockType _pressed;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
}

+ (double)itemHeight;
+ (id)_titleFont;
+ (id)itemViewWithWidth:(double)arg1;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType pressed; // @synthesize pressed=_pressed;
- (void).cxx_destruct;
- (void)bindWithIconImageCDNs:(id)arg1 title:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

