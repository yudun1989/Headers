//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AUActionSheet;

@interface AUActionSheetViewController : UIViewController
{
    _Bool _viewAlreadyAppear;
    AUActionSheet *_actionSheet;
}

@property(nonatomic) _Bool viewAlreadyAppear; // @synthesize viewAlreadyAppear=_viewAlreadyAppear;
@property(nonatomic) __weak AUActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
- (void).cxx_destruct;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

