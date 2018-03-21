//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <QQMainProject/QRBookInfoActionSheetViewDelegate-Protocol.h>

@class NSDictionary, NSString, QRBookInfoActionSheetView, UIView;

@interface QRBookInfoActionSheetController : UIViewController <QRBookInfoActionSheetViewDelegate>
{
    QRBookInfoActionSheetView *_actionSheetView;
    UIView *_bgView;
    NSDictionary *_params;
}

- (void)dealloc;
- (void)callEventHandlerWithArgs:(id)arg1;
- (void)bookInfoActionSheetView:(id)arg1 clikedButtonAtIndex:(id)arg2;
- (void)bookInfoActionSheetViewDetailButtonCliked:(id)arg1;
- (void)bookInfoActionSheetViewCancel:(id)arg1;
- (void)bookInfoActionSheetViewHeadingCliked:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)dismiss;
- (void)show;
- (void)loadView;
- (id)initWithParams:(id)arg1 andEventHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

