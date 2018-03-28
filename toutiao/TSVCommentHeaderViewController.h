//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SSThemedButton, SSThemedLabel, SSThemedView, TSVCommentHeaderViewModel;

@interface TSVCommentHeaderViewController : UIViewController
{
    TSVCommentHeaderViewModel *_viewModel;
    SSThemedLabel *_countLabel;
    SSThemedView *_separatorLine;
    SSThemedButton *_closeButton;
}

@property(retain, nonatomic) SSThemedButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) SSThemedView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) SSThemedLabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) TSVCommentHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)clickCloseButton:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

@end

