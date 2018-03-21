//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GrowingWindowView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableArray, NSString, UIView;

@interface GrowingMenu : GrowingWindowView <UIGestureRecognizerDelegate>
{
    NSMutableArray *_allViews;
    NSMutableArray *_allViewsType;
    UIView *_shadowMaskView;
}

+ (unsigned long long)showMenuCount;
+ (void)hideMenuView:(id)arg1;
+ (void)hideMenuView:(id)arg1 showType:(unsigned long long)arg2;
+ (void)hideMenuView:(id)arg1 showType:(unsigned long long)arg2 complate:(CDUnknownBlockType)arg3;
+ (struct CGSize)maxSizeForType:(unsigned long long)arg1;
+ (void)showMenuView:(id)arg1;
+ (void)showMenuView:(id)arg1 showType:(unsigned long long)arg2;
+ (void)showMenuView:(id)arg1 showType:(unsigned long long)arg2 complate:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) UIView *shadowMaskView; // @synthesize shadowMaskView=_shadowMaskView;
@property(retain, nonatomic) NSMutableArray *allViewsType; // @synthesize allViewsType=_allViewsType;
@property(retain, nonatomic) NSMutableArray *allViews; // @synthesize allViews=_allViews;
- (void).cxx_destruct;
- (void)tap:(id)arg1;
- (_Bool)growingNodeDonotCircle;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)hideMenuView:(id)arg1 type:(unsigned long long)arg2 complate:(CDUnknownBlockType)arg3;
- (unsigned long long)getShowTypeByIndex:(unsigned long long)arg1;
- (void)setActive:(_Bool)arg1 WithoutView:(id)arg2;
- (void)showMenuView:(id)arg1 type:(unsigned long long)arg2 complate:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

