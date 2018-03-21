//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GOOBaseContentView.h"

@class GMSx_GOOTextContentViewObject, UIFont, UIImageView, UILabel, UIView;

@interface GMSx_GOOTextContentView : GMSx_GOOBaseContentView
{
    UIFont *_textFont;
    UIFont *_detailTextFont;
    double _textMinimumScaleFactor;
    _Bool _shouldLayoutForRTL;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIImageView *_imageView;
    UIView *_transparentOverlay;
}

+ (_Bool)enabledFromObject:(id)arg1;
+ (_Bool)shouldLayoutForRTLSettingFromObject:(id)arg1;
+ (_Bool)shouldTweakBackgroundColor:(id)arg1;
+ (long long)contentVerticalAlignmentFromObject:(id)arg1;
+ (double)heightOfString:(id)arg1 withFont:(id)arg2 numberOfLines:(long long)arg3 lineBreakMode:(long long)arg4 minimumFontSize:(double)arg5 actualFontSize:(double *)arg6 constrainedToWidth:(double)arg7 finalSize:(struct CGSize *)arg8;
+ (double)heightOfString:(id)arg1 withFont:(id)arg2 numberOfLines:(long long)arg3 lineBreakMode:(long long)arg4 minimumFontSize:(double)arg5 actualFontSize:(double *)arg6 constrainedToWidth:(double)arg7;
+ (double)textHeightForObject:(id)arg1 constrainedToWidth:(double)arg2;
+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
+ (id)createDetailTextLabel;
+ (long long)numberOfDetailTextLinesFromObject:(id)arg1;
+ (long long)numberOfTextLinesFromObject:(id)arg1;
+ (id)detailTextFromObject:(id)arg1;
+ (double)minimumDetailTextFontSize;
+ (long long)detailTextLineBreakMode;
+ (long long)numberOfDetailTextLines;
+ (id)detailTextFont;
+ (id)detailTextFontFromObject:(id)arg1;
+ (id)createTextLabel;
+ (id)textFromObject:(id)arg1;
+ (double)minimumTextFontSize;
+ (long long)textLineBreakMode;
+ (long long)numberOfTextLines;
+ (double)textMinimumScaleFactor;
+ (id)textFont;
+ (id)textFontFromObject:(id)arg1;
+ (id)imageFromObject:(id)arg1;
+ (double)verticalDistanceBetweenLabelsFromObject:(id)arg1;
+ (double)verticalDistanceBetweenLabels;
+ (struct UIEdgeInsets)textInsetsFromObject:(id)arg1;
+ (struct UIEdgeInsets)paddingFromObject:(id)arg1;
+ (struct UIEdgeInsets)padding;
@property(retain, nonatomic) UIView *transparentOverlay; // @synthesize transparentOverlay=_transparentOverlay;
@property(readonly, nonatomic) _Bool shouldLayoutForRTL; // @synthesize shouldLayoutForRTL=_shouldLayoutForRTL;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)updateStyleWithEnabled:(_Bool)arg1;
- (_Bool)GMSx_goo_shouldRelayoutSubviewsForRTL;
- (id)accessibilityLanguage;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)prepareForReuse;
- (void)updateViewWithObject:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)detailTextLabelIsAttributed;
- (id)detailTextColorFromObject:(id)arg1;
- (_Bool)textLabelIsAttributed;
- (id)textColorFromObject:(id)arg1;
- (id)imageTintColorFromObject:(id)arg1;
- (id)stringForDetailTextLabel;
- (id)stringForTextLabel;
- (struct CGRect)boundsForText;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) GMSx_GOOTextContentViewObject *object; // @dynamic object;

@end

