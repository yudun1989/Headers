//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUDialogBaseView.h"

@class NSString;

@interface AUOperationResultDialog : AUDialogBaseView
{
}

+ (void)dismissAll;
- (void)dismiss;
- (void)show;
- (void)addButton:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (id)initWithImageUrl:(id)arg1 placeholder:(id)arg2 message:(id)arg3 delegate:(id)arg4;
- (id)initWithImage:(id)arg1 message:(id)arg2 delegate:(id)arg3 buttonTitles:(id)arg4;
- (id)initWithImage:(id)arg1 message:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) _Bool isDisplay; // @dynamic isDisplay;
@property(retain, nonatomic) NSString *message; // @dynamic message;

@end

