//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEAwemeModel, AWEAwemePlayInteractionPresenter, AWEButton, NSString;

@interface AWEAdOperationGuideView : UIView
{
    AWEAwemeModel *_model;
    NSString *_referString;
    AWEAwemePlayInteractionPresenter *_presenter;
    AWEButton *_replayBtn;
    AWEButton *_learnMoreBtn;
}

@property(retain, nonatomic) AWEButton *learnMoreBtn; // @synthesize learnMoreBtn=_learnMoreBtn;
@property(retain, nonatomic) AWEButton *replayBtn; // @synthesize replayBtn=_replayBtn;
@property(nonatomic) __weak AWEAwemePlayInteractionPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)learnMoreBtnClicked:(id)arg1;
- (void)replayBtnClicked:(id)arg1;
- (void)_setupUI;
- (id)init;

@end

