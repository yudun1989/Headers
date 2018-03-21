//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UITextView;

@interface DWTextViewEventObserver : NSObject
{
    CDUnknownBlockType _execution;
    UITextView *_target;
}

+ (id)observingKeys;
+ (void)observe:(id)arg1 then:(CDUnknownBlockType)arg2;
@property(nonatomic) UITextView *target; // @synthesize target=_target;
@property(copy, nonatomic) CDUnknownBlockType execution; // @synthesize execution=_execution;
- (void).cxx_destruct;
- (void)releaseObserveKeys;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updatePlaceholderLabel;
- (void)observeEvents;
- (void)dealloc;

@end

