//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeAppSyncActionExecute.h"

@class UINavigationController, UIViewController, WeAppActionManager, WeAppViewManager;

@interface WeAppCascadeSelectorActionExecute : WeAppSyncActionExecute
{
    WeAppViewManager *vm;
    WeAppActionManager *actionManager;
    UIViewController *popView;
    UINavigationController *navigationVC;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelButton;
- (void)actionDoWithConditon:(id)arg1;
- (void)actionDo:(id)arg1;

@end
