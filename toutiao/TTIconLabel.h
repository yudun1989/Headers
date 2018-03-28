//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewBase.h"

@class NSArray, NSString, SSThemedLabel, TTAsyncLabel, UIColor, UIFont, UIImage, UIView;

@interface TTIconLabel : SSViewBase
{
    _Bool _disableNightMode;
    _Bool _disableLabelSizeToFit;
    _Bool _enableAsync;
    _Bool _highlighted;
    int _verticalAlignment;
    UIImage *_placeholderImage;
    double _labelMaxWidth;
    double _iconMaxHeight;
    double _iconLeftPadding;
    double _iconRightPadding;
    double _iconSpacing;
    NSString *_text;
    NSString *_textColorThemeKey;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_highlightedTextColor;
    long long _numberOfLines;
    long long _textAlignment;
    long long _lineBreakMode;
    double _lineSpacing;
    double _lineHeight;
    SSThemedLabel *_themedLabel;
    TTAsyncLabel *_asyncLabel;
    UIView *_label;
    UIView *_iconContainerView;
    NSArray *_imageViews;
    NSArray *_iconModels;
}

@property(copy, nonatomic) NSArray *iconModels; // @synthesize iconModels=_iconModels;
@property(copy, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) UIView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
@property(retain, nonatomic) UIView *label; // @synthesize label=_label;
@property(retain, nonatomic) TTAsyncLabel *asyncLabel; // @synthesize asyncLabel=_asyncLabel;
@property(retain, nonatomic) SSThemedLabel *themedLabel; // @synthesize themedLabel=_themedLabel;
@property(nonatomic) int verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *textColorThemeKey; // @synthesize textColorThemeKey=_textColorThemeKey;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool enableAsync; // @synthesize enableAsync=_enableAsync;
@property(nonatomic) _Bool disableLabelSizeToFit; // @synthesize disableLabelSizeToFit=_disableLabelSizeToFit;
@property(nonatomic) _Bool disableNightMode; // @synthesize disableNightMode=_disableNightMode;
@property(nonatomic) double iconSpacing; // @synthesize iconSpacing=_iconSpacing;
@property(nonatomic) double iconRightPadding; // @synthesize iconRightPadding=_iconRightPadding;
@property(nonatomic) double iconLeftPadding; // @synthesize iconLeftPadding=_iconLeftPadding;
@property(nonatomic) double iconMaxHeight; // @synthesize iconMaxHeight=_iconMaxHeight;
@property(nonatomic) double labelMaxWidth; // @synthesize labelMaxWidth=_labelMaxWidth;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
- (void).cxx_destruct;
- (unsigned long long)countOfIcons;
- (void)removeAllIcons;
- (void)removeIconView:(id)arg1;
- (void)removeIconAtIndex:(unsigned long long)arg1;
- (void)insertIconWithDayIconURL:(id)arg1 nightIconURL:(id)arg2 size:(struct CGSize)arg3 atIndex:(unsigned long long)arg4;
- (void)insertIconWithDayIcon:(id)arg1 nightIcon:(id)arg2 size:(struct CGSize)arg3 atIndex:(unsigned long long)arg4;
- (void)insertIconWithImageName:(id)arg1 size:(struct CGSize)arg2 atIndex:(unsigned long long)arg3;
- (void)insertIconWithModel:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addIconWithDayIconURL:(id)arg1 nightIconURL:(id)arg2 size:(struct CGSize)arg3;
- (void)addIconWithDayIcon:(id)arg1 nightIcon:(id)arg2 size:(struct CGSize)arg3;
- (void)addIconWithImageName:(id)arg1 size:(struct CGSize)arg2;
- (void)addIconWithModel:(id)arg1;
- (void)addImageViewsIfNeed;
- (void)updateImageView:(id)arg1 WithModel:(id)arg2;
- (void)updateImageView:(id)arg1 withImage:(id)arg2;
- (id)iconViewAtIndex:(unsigned long long)arg1;
- (void)themeChanged:(id)arg1;
- (_Bool)isDayMode;
- (void)layoutSubviews;
- (void)refreshIconView;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) double iconContainerWidth;
- (struct CGSize)iconContainerSize;
- (struct CGSize)adjustedIconSizeWithSize:(struct CGSize)arg1;
- (void)setupLabel;
- (unsigned long long)indexOfImageName:(id)arg1;
- (unsigned long long)indexOfDayIconURL:(id)arg1;
- (unsigned long long)indexOfDayIcon:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (unsigned long long)indexOfImageInfosModel:(id)arg1;
- (void)insertIconWithImageInfosModel:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addIconsWithImageInfosModels:(id)arg1;
- (void)addIconWithImageInfosModel:(id)arg1;
- (void)addIconWithVerifyInfo:(id)arg1;

@end
