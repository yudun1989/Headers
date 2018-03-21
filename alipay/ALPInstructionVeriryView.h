//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "APBarcodeViewDelegate-Protocol.h"

@class ALPOperationMessage, APBarcodeView, NSString;

@interface ALPInstructionVeriryView : UIView <APBarcodeViewDelegate>
{
    UIView *_wrapView;
    APBarcodeView *_contentView;
    ALPOperationMessage *_operationMessage;
}

@property(retain, nonatomic) ALPOperationMessage *operationMessage; // @synthesize operationMessage=_operationMessage;
@property(retain, nonatomic) APBarcodeView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *wrapView; // @synthesize wrapView=_wrapView;
- (void).cxx_destruct;
- (void)GlossaryPressed:(id)arg1;
- (void)centerContent;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 operationMessage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 operationMessage:(id)arg2 BarcodeDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

