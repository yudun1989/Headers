//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class MQPAlertView2, NSString;
@protocol MQPAlertViewDelegate;

@interface MQPAlertView : NSObject <UIAlertViewDelegate>
{
    id <MQPAlertViewDelegate> _delegate;
    long long _cancelButtonIndex;
    id _doc;
    id _block;
    MQPAlertView2 *_av;
}

@property(retain, nonatomic) MQPAlertView2 *av; // @synthesize av=_av;
@property(copy, nonatomic) id block; // @synthesize block=_block;
@property(nonatomic) __weak id doc; // @synthesize doc=_doc;
@property(nonatomic) long long cancelButtonIndex; // @synthesize cancelButtonIndex=_cancelButtonIndex;
@property(nonatomic) __weak id <MQPAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)show;
- (void)dealloc;
- (void)resignActive:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

