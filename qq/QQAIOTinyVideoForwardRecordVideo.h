//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQRichMediaPickerControllerDelegate-Protocol.h>

@class NSString, QQFastSendRichMediaPickerController;
@protocol QQAIOTinyVideoForwardRecordVideoDelegate;

@interface QQAIOTinyVideoForwardRecordVideo : NSObject <QQRichMediaPickerControllerDelegate>
{
    QQFastSendRichMediaPickerController *_fastSendRichMediapickerController;
    id <QQAIOTinyVideoForwardRecordVideoDelegate> _delegate;
}

@property(nonatomic) id <QQAIOTinyVideoForwardRecordVideoDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QQFastSendRichMediaPickerController *fastSendRichMediapickerController; // @synthesize fastSendRichMediapickerController=_fastSendRichMediapickerController;
- (void)richMediaPickerControllerDidCancel:(id)arg1;
- (void)richMediaPickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)openRecordVideo:(id)arg1 withID:(id)arg2;
- (void)openRecordVideo;
- (void)onForceOffLineNotify;
- (void)fastSendShortVideoFinished;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

