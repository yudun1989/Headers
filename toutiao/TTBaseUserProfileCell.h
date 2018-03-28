//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class SSThemedView;

@interface TTBaseUserProfileCell : SSThemedTableViewCell
{
    _Bool _shouldHighlight;
    _Bool _topLineEnabled;
    _Bool _bottomLineEnabled;
    SSThemedView *_bgView;
    unsigned long long _cellSpearatorStyle;
    SSThemedView *_topLine;
    SSThemedView *_bottomLine;
}

+ (id)contentColorKey;
+ (id)titleColorKey;
+ (double)spacingOfTextArrow;
+ (double)spacingOfText;
+ (double)spacingToMargin;
+ (double)fontSizeOfContent;
+ (double)fontSizeOfTitle;
+ (double)thumbnailHeight;
+ (double)cellHeight;
+ (unsigned long long)separatorStyleForPosition:(unsigned long long)arg1;
+ (id)separatorThemeColorKey;
@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) SSThemedView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) unsigned long long cellSpearatorStyle; // @synthesize cellSpearatorStyle=_cellSpearatorStyle;
@property(nonatomic) _Bool bottomLineEnabled; // @synthesize bottomLineEnabled=_bottomLineEnabled;
@property(nonatomic) _Bool topLineEnabled; // @synthesize topLineEnabled=_topLineEnabled;
@property(retain, nonatomic) SSThemedView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) _Bool shouldHighlight; // @synthesize shouldHighlight=_shouldHighlight;
- (void).cxx_destruct;
- (double)insetXForTop:(_Bool)arg1;
- (_Bool)hiddenForTop:(_Bool)arg1;
- (struct CGRect)rectForTop:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (double)insetLeftOfSeparator;
- (void)relayoutIfNeeds;
- (void)themeChanged:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end

