//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBPSAdapterNavigationController.h"

#import "TBPSImagePickerViewControllerDelegate-Protocol.h"

@class NSString;
@protocol TBPSImagePickerViewControllerDelegate;

@interface TBPSImagePickerViewController : TBPSAdapterNavigationController <TBPSImagePickerViewControllerDelegate>
{
    id <TBPSImagePickerViewControllerDelegate> _delegateObj;
}

+ (void)showImagePickerWithViewController:(id)arg1;
@property(nonatomic) __weak id <TBPSImagePickerViewControllerDelegate> delegateObj; // @synthesize delegateObj=_delegateObj;
- (void).cxx_destruct;
- (void)dealloc;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

