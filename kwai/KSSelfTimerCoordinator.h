//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol KSSelfTimerCoordinatorDelegate;

@interface KSSelfTimerCoordinator : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _enabled;
    id <KSSelfTimerCoordinatorDelegate> _delegate;
    double _durationBeforeShowingPrompt;
    double _promptDuration;
    unsigned long long _maxPromptsCount;
    UIView *_captureView;
    UIView *_coverView;
    NSString *_promptsProcessToken;
    UITapGestureRecognizer *_coverViewTapGestureRecognizer;
    UILongPressGestureRecognizer *_coverViewLongPressGestureRecognizer;
    UITapGestureRecognizer *_captureViewTapGestureRecognizer;
    UILongPressGestureRecognizer *_captureViewLongPressGestureRecognizer;
    NSString *_initialTitle;
    UILabel *_tipsLabel;
}

@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) NSString *initialTitle; // @synthesize initialTitle=_initialTitle;
@property(retain, nonatomic) UILongPressGestureRecognizer *captureViewLongPressGestureRecognizer; // @synthesize captureViewLongPressGestureRecognizer=_captureViewLongPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *captureViewTapGestureRecognizer; // @synthesize captureViewTapGestureRecognizer=_captureViewTapGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *coverViewLongPressGestureRecognizer; // @synthesize coverViewLongPressGestureRecognizer=_coverViewLongPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *coverViewTapGestureRecognizer; // @synthesize coverViewTapGestureRecognizer=_coverViewTapGestureRecognizer;
@property(retain, nonatomic) NSString *promptsProcessToken; // @synthesize promptsProcessToken=_promptsProcessToken;
@property(readonly, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(readonly, nonatomic) UIView *captureView; // @synthesize captureView=_captureView;
@property(nonatomic) unsigned long long maxPromptsCount; // @synthesize maxPromptsCount=_maxPromptsCount;
@property(nonatomic) double promptDuration; // @synthesize promptDuration=_promptDuration;
@property(nonatomic) double durationBeforeShowingPrompt; // @synthesize durationBeforeShowingPrompt=_durationBeforeShowingPrompt;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <KSSelfTimerCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
@property(nonatomic) unsigned long long promptsCount;
- (void)viewWasLongPressed:(id)arg1;
- (void)viewWasTapped:(id)arg1;
- (void)switchShootButtonTitleTo:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stopPromptProcess;
- (void)startPromptProcess;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)dealloc;
- (void)setupGestures;
- (id)initWithCaptureView:(id)arg1 tipsLabel:(id)arg2 coverView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

