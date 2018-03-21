//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUISearchBar.h"

@class NSString, UIButton, UIColor, UIImageView, UITextField, UIView;

@interface FMSearchBar : MMUISearchBar
{
    UIView *searchBarDisableMaskView;
    UIImageView *cancelButtonBelowView;
    NSString *placeholderForNormal;
    NSString *placeholderForSearching;
    _Bool _enabled;
    UIColor *m_bkgColor;
    double m_totalHeight;
    UIButton *cancelButton;
    UIButton *editButton;
    UITextField *textField;
    UIView *wrapView;
    double cancelButtonWidth;
    double editButtonWidth;
    UIColor *textFieldNormalColor;
    UIColor *textFieldActiveColor;
}

@property(retain, nonatomic) UIColor *textFieldActiveColor; // @synthesize textFieldActiveColor;
@property(retain, nonatomic) UIColor *textFieldNormalColor; // @synthesize textFieldNormalColor;
@property(nonatomic) double editButtonWidth; // @synthesize editButtonWidth;
@property(nonatomic) double cancelButtonWidth; // @synthesize cancelButtonWidth;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIView *wrapView; // @synthesize wrapView;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton;
@property(retain, nonatomic) NSString *placeholderForSearching; // @synthesize placeholderForSearching;
@property(retain, nonatomic) NSString *placeholderForNormal; // @synthesize placeholderForNormal;
- (void).cxx_destruct;
- (void)setSearchbarResponder;
- (void)setSearchBarUI;
- (void)removeAllActionInEditButton;
- (void)addEditButtonTarget:(id)arg1 andAction:(SEL)arg2;
- (void)showEditButton:(_Bool)arg1;
- (void)setTextFieldBackgroundColor:(id)arg1 activeColor:(id)arg2;
- (void)setTextFieldBackgroundColor:(id)arg1;
- (void)realSetBkgColor:(id)arg1;
- (void)renderEditButton;
- (void)resetSearchField:(double)arg1;
- (void)setSearchIcon;
- (void)layoutSubviews;
- (void)initSearchbarUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

