//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIColor;

@interface TBColorPageControl : UIControl
{
    _Bool _hidesForSinglePage;
    _Bool _isSolid;
    int _type;
    long long _currentPage;
    long long _numberOfPages;
    UIColor *_normalPageColor;
    UIColor *_currentPageColor;
    long long _width;
    long long _height;
    long long _gap;
    UIColor *_borderColor;
}

@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) _Bool isSolid; // @synthesize isSolid=_isSolid;
@property(nonatomic) long long gap; // @synthesize gap=_gap;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(retain, nonatomic) UIColor *currentPageColor; // @synthesize currentPageColor=_currentPageColor;
@property(retain, nonatomic) UIColor *normalPageColor; // @synthesize normalPageColor=_normalPageColor;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hidesForSinglePage; // @synthesize hidesForSinglePage=_hidesForSinglePage;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
- (void).cxx_destruct;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

