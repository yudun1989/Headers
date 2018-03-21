//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RangerTag.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIColor, UITapGestureRecognizer, UIView;

@interface RangerBoxTag : RangerTag <UIGestureRecognizerDelegate>
{
    UIColor *_backgroundColor;
    UIView *_borderView;
    NSString *_onClickKey;
    UIView *_touchView;
    UITapGestureRecognizer *_tapGesture;
}

@property(retain) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property __weak UIView *touchView; // @synthesize touchView=_touchView;
@property(retain) NSString *onClickKey; // @synthesize onClickKey=_onClickKey;
@property(retain) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (void)configTagAfterLayout:(id)arg1 view:(id)arg2;
- (void)configTagBeforeLayout:(id)arg1 view:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)configWithRangerAtributes:(id)arg1 view:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onClickGesture:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

