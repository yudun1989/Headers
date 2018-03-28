//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTMessageNotificationBaseCellView.h"

#import "STLinkLabelDelegate-Protocol.h"

@class NSString, SSThemedButton, SSThemedLabel, STLinkLabel, TTImageView;

@interface TTMessageNotificationNormalCellView : TTMessageNotificationBaseCellView <STLinkLabelDelegate>
{
    STLinkLabel *_systemMessageLabel;
    SSThemedButton *_gotoContainerView;
    TTImageView *_gotoImageView;
    SSThemedLabel *_gotoLabel;
}

+ (double)heightForData:(id)arg1 cellWidth:(double)arg2;
+ (double)heightForSystemMessageLabelWithData:(id)arg1 maxWidth:(double)arg2;
@property(retain, nonatomic) SSThemedLabel *gotoLabel; // @synthesize gotoLabel=_gotoLabel;
@property(retain, nonatomic) TTImageView *gotoImageView; // @synthesize gotoImageView=_gotoImageView;
@property(retain, nonatomic) SSThemedButton *gotoContainerView; // @synthesize gotoContainerView=_gotoContainerView;
@property(retain, nonatomic) STLinkLabel *systemMessageLabel; // @synthesize systemMessageLabel=_systemMessageLabel;
- (void).cxx_destruct;
- (void)themeChanged:(id)arg1;
- (void)linkLabel:(id)arg1 didSelectLinkObject:(id)arg2;
- (void)layoutSystemMessageLabelWithOrigin:(struct CGPoint)arg1 maxWidth:(double)arg2;
- (void)updateSystemMessageLabel;
- (void)refreshUI;
- (void)refreshWithData:(id)arg1;
- (void)layoutGotoContainerViewWithOrigin:(struct CGPoint)arg1;
- (void)updateGotoContainerView;
- (void)gotoContainerViewOnClick:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

