//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIColor, UIFont;
@protocol APCMIndexBarDelegate;

@interface APCMIndexBar : UIView
{
    _Bool _enableSearch;
    id <APCMIndexBarDelegate> delegate;
    UIColor *highlightedBackgroundColor;
    UIColor *textColor;
    UIFont *_textFont;
    NSArray *_iconImageNames;
    NSArray *_iconTitles;
    NSMutableArray *_defaultIndexes;
    NSMutableArray *_indexes;
    double _sessionHeight;
}

@property(nonatomic) double sessionHeight; // @synthesize sessionHeight=_sessionHeight;
@property(retain, nonatomic) NSMutableArray *indexes; // @synthesize indexes=_indexes;
@property(retain, nonatomic) NSMutableArray *defaultIndexes; // @synthesize defaultIndexes=_defaultIndexes;
@property(nonatomic) _Bool enableSearch; // @synthesize enableSearch=_enableSearch;
@property(retain, nonatomic) NSArray *iconTitles; // @synthesize iconTitles=_iconTitles;
@property(retain, nonatomic) NSArray *iconImageNames; // @synthesize iconImageNames=_iconImageNames;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor;
@property(nonatomic) __weak id <APCMIndexBarDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)responeToSelectWithTouchPoint:(struct CGPoint)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEndedOrCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)clearIndex;
- (void)updateIndexes;
- (void)calSessionHeight;
- (void)generateIndexes;
- (void)layoutSubviews;
- (void)initializeDefaults;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

