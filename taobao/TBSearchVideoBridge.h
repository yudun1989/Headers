//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WVDynamicHandler.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, TBXSearchSimpleService;

@interface TBSearchVideoBridge : WVDynamicHandler <UIActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    CDUnknownBlockType _callBack;
    NSDictionary *_params;
    TBXSearchSimpleService *_service;
    NSMutableDictionary *_result;
}

+ (unsigned long long)instanceScope;
@property(retain, nonatomic) NSMutableDictionary *result; // @synthesize result=_result;
@property(retain, nonatomic) TBXSearchSimpleService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (_Bool)addVideoWithOssHost:(id)arg1 ossBucket:(id)arg2 ossObject:(id)arg3;
- (void)uploadVideo:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)uploadVideo:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)exit:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)resetWVJSBridgeInstance;
- (void)releaseInstance;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

