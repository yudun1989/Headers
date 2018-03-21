//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIActionSheetDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class ASImagePickerController, NSDictionary, NSString, UIImagePickerController, UIViewController;

@interface SCHeadImageEditor : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate>
{
    _Bool _isStatusBarHidden;
    UIViewController *_callerViewController;
    UIImagePickerController *_imagePicker;
    NSDictionary *_extraInfo;
    ASImagePickerController *_picker;
    CDUnknownBlockType _callback;
    long long _statusBarStyle;
}

@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) _Bool isStatusBarHidden; // @synthesize isStatusBarHidden=_isStatusBarHidden;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) ASImagePickerController *picker; // @synthesize picker=_picker;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) UIImagePickerController *imagePicker; // @synthesize imagePicker=_imagePicker;
@property(nonatomic) __weak UIViewController *callerViewController; // @synthesize callerViewController=_callerViewController;
- (void).cxx_destruct;
- (_Bool)shouldShowCamaraEntryInActionSheet;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)startCameraEditor;
- (void)startPhotoEditor;
- (void)setupPicker;
- (void)showActionSheet;
- (void)startWith:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

