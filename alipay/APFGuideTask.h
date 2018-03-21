//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APFBaseTask.h"

#import "AFEWebGuideViewDelegate-Protocol.h"

@class AFEWebGuideView, NSString;

@interface APFGuideTask : APFBaseTask <AFEWebGuideViewDelegate>
{
    _Bool _loaded;
    AFEWebGuideView *_guideView;
}

@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) AFEWebGuideView *guideView; // @synthesize guideView=_guideView;
- (void).cxx_destruct;
- (void)onButtonBegin;
- (void)onSoundStatusChanged:(_Bool)arg1;
- (void)onButtonCancel;
- (void)onLoadFinished:(_Bool)arg1;
- (void)loadNativePage;
- (void)onFailGoBack;
- (void)onSuccessGoNext;
- (void)onH5Logger:(id)arg1;
- (id)getConfig;
- (void)processEvent:(id)arg1 withCompletionCallback:(CDUnknownBlockType)arg2;
- (void)invokeWithPipeInfo:(id)arg1;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

