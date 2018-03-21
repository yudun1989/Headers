//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBModelStatusDelegate-Protocol.h"

@class NSString, TBModelStatusHandler;

@interface OMKViewController : TBViewController <TBModelStatusDelegate>
{
    TBModelStatusHandler *_handler;
}

- (void).cxx_destruct;
- (id)utPageName;
- (void)showAlertMessage:(id)arg1;
- (SEL)selectorForEmpty;
- (SEL)selectorForError:(id)arg1;
- (void)onReloadErrorCallBack;
- (void)hideErrorView;
- (void)showError:(id)arg1 withStatusInfo:(id)arg2;
- (void)showError:(id)arg1;
- (id)handler;
- (id)emptyStatusInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

