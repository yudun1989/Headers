//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "INPhotoEditDataSource-Protocol.h"
#import "INPhotoEditDelegate-Protocol.h"

@class NSString;

@interface INPhotoEditLauncher : NSObject <INPhotoEditDataSource, INPhotoEditDelegate>
{
    _Bool _autoExitApp;
    CDUnknownBlockType _finishedBlock;
    CDUnknownBlockType _cancelBlcok;
    long long _photoEditType;
    NSString *_cancelItemTitle;
    NSString *_textItemTitle;
}

@property(nonatomic) _Bool autoExitApp; // @synthesize autoExitApp=_autoExitApp;
@property(retain, nonatomic) NSString *textItemTitle; // @synthesize textItemTitle=_textItemTitle;
@property(retain, nonatomic) NSString *cancelItemTitle; // @synthesize cancelItemTitle=_cancelItemTitle;
@property(nonatomic) long long photoEditType; // @synthesize photoEditType=_photoEditType;
@property(copy, nonatomic) CDUnknownBlockType cancelBlcok; // @synthesize cancelBlcok=_cancelBlcok;
@property(copy, nonatomic) CDUnknownBlockType finishedBlock; // @synthesize finishedBlock=_finishedBlock;
- (void).cxx_destruct;
- (void)photoEditControllerDidCancel:(id)arg1;
- (void)photoEditController:(id)arg1 didFinishWithUneditedImage:(id)arg2;
- (void)photoEditController:(id)arg1 didFinishEditWithImageData:(id)arg2;
- (_Bool)onShowEditTips;
- (void)onFaceDetectWithImage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)onImageDownloadWithURL:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)openINPhotoEdit:(id)arg1;
- (void)exitCrop;
- (long long)editTypeFromOptions:(id)arg1;
- (id)startWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

