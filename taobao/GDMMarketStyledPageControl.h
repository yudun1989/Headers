//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMutableDictionary, UIColor, UIImage;

@interface GDMMarketStyledPageControl : UIControl
{
    _Bool _hidesForSinglePage;
    int _pageControlStyle;
    int _strokeWidth;
    int _diameter;
    int _gapWidth;
    UIColor *_coreNormalColor;
    UIColor *_coreSelectedColor;
    UIColor *_strokeNormalColor;
    UIColor *_strokeSelectedColor;
    unsigned long long _currentPage;
    unsigned long long _numberOfPages;
    UIImage *_thumbImage;
    UIImage *_selectedThumbImage;
    NSMutableDictionary *_thumbImageForIndex;
    NSMutableDictionary *_selectedThumbImageForIndex;
}

@property(retain, nonatomic) NSMutableDictionary *selectedThumbImageForIndex; // @synthesize selectedThumbImageForIndex=_selectedThumbImageForIndex;
@property(retain, nonatomic) NSMutableDictionary *thumbImageForIndex; // @synthesize thumbImageForIndex=_thumbImageForIndex;
@property(retain, nonatomic) UIImage *selectedThumbImage; // @synthesize selectedThumbImage=_selectedThumbImage;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(nonatomic) int gapWidth; // @synthesize gapWidth=_gapWidth;
@property(nonatomic) int diameter; // @synthesize diameter=_diameter;
@property(nonatomic) int strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(nonatomic) int pageControlStyle; // @synthesize pageControlStyle=_pageControlStyle;
@property(nonatomic) _Bool hidesForSinglePage; // @synthesize hidesForSinglePage=_hidesForSinglePage;
@property(nonatomic) unsigned long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) UIColor *strokeSelectedColor; // @synthesize strokeSelectedColor=_strokeSelectedColor;
@property(retain, nonatomic) UIColor *strokeNormalColor; // @synthesize strokeNormalColor=_strokeNormalColor;
@property(retain, nonatomic) UIColor *coreSelectedColor; // @synthesize coreSelectedColor=_coreSelectedColor;
@property(retain, nonatomic) UIColor *coreNormalColor; // @synthesize coreNormalColor=_coreNormalColor;
- (void).cxx_destruct;
- (id)selectedThumbImageForIndex:(long long)arg1;
- (void)setSelectedThumbImage:(id)arg1 forIndex:(long long)arg2;
- (id)thumbImageForIndex:(long long)arg1;
- (void)setThumbImage:(id)arg1 forIndex:(long long)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (float)controlWidth;
- (void)onTapped:(id)arg1;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

