//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSMutableDictionary, NSString, UIButton, UIFont, UILabel;

@interface AliDetailContractPhoneButton : UIView
{
    NSMutableDictionary *_borderColorMap;
    NSMutableDictionary *_titleColorMap;
    NSMutableDictionary *_backgroundColorMap;
    _Bool _isNewStyle;
    _Bool _isTmallClient;
    NSString *_title;
    UIFont *_font;
    long long _status;
    CDUnknownBlockType _selectedClock;
    UIButton *_button;
    UILabel *_titleLabel;
}

@property(nonatomic) _Bool isTmallClient; // @synthesize isTmallClient=_isTmallClient;
@property(retain, nonatomic) NSMutableDictionary *backgroundColorMap; // @synthesize backgroundColorMap=_backgroundColorMap;
@property(retain, nonatomic) NSMutableDictionary *titleColorMap; // @synthesize titleColorMap=_titleColorMap;
@property(retain, nonatomic) NSMutableDictionary *borderColorMap; // @synthesize borderColorMap=_borderColorMap;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) _Bool isNewStyle; // @synthesize isNewStyle=_isNewStyle;
@property(copy, nonatomic) CDUnknownBlockType selectedClock; // @synthesize selectedClock=_selectedClock;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)onClick:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setBorderWidth:(double)arg1;
- (id)backgroundColorDic;
@property(readonly, nonatomic) NSDictionary *titleColorDic;
- (id)borderColorDic;
- (void)setDefaultStyle;
- (void)setBackgroundColor:(id)arg1 forStatus:(long long)arg2;
- (void)setBorderColor:(id)arg1 forStatus:(long long)arg2;
- (void)setTitleColor:(id)arg1 forStatus:(long long)arg2;
- (void)layoutSubviews;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

