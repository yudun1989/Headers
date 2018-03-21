//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OPageMenuContentBaseView.h"

@class UIColor, UIImageView, UILabel, UIView;

@interface O2OPageMenuContentView : O2OPageMenuContentBaseView
{
    double rgbNormal[4];
    double rgbSelected[4];
    _Bool hasRGB;
    UIColor *_titleNormalColor;
    UIColor *_titleSelectedColor;
    UILabel *_itemTitle;
    UIImageView *_itemImage;
    UIView *_itemRed;
}

@property(nonatomic) __weak UIView *itemRed; // @synthesize itemRed=_itemRed;
@property(nonatomic) __weak UIImageView *itemImage; // @synthesize itemImage=_itemImage;
@property(nonatomic) __weak UILabel *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(retain, nonatomic) UIColor *titleSelectedColor; // @synthesize titleSelectedColor=_titleSelectedColor;
@property(retain, nonatomic) UIColor *titleNormalColor; // @synthesize titleNormalColor=_titleNormalColor;
- (void).cxx_destruct;
- (double)interpolation:(double)arg1 startValue:(double)arg2 endValue:(double)arg3;
- (void)extractRGB;
- (void)setProgress:(double)arg1;
- (void)setSelectedWithoutAnimation:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (unsigned long long)accessibilityTraits;
- (void)setImageForImageView:(id)arg1 imageUrl:(id)arg2 isNativeImage:(_Bool)arg3;
- (void)removeRed;
- (void)layoutPageSubViews;
- (id)initWithFrame:(struct CGRect)arg1 menuItem:(id)arg2 configure:(id)arg3;

@end

