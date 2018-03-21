//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSUserAvatarViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, UIImage;

@interface KSMyAvatarEditViewController : KSUserAvatarViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate>
{
    _Bool _chooseFromCamera;
    UIImage *_avatar;
}

@property(nonatomic) _Bool chooseFromCamera; // @synthesize chooseFromCamera=_chooseFromCamera;
@property(retain, nonatomic) UIImage *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)uploadAvatar;
- (void)showAvatarSizeWrongAlert;
- (void)updateAvatar:(id)arg1;
- (void)showPhotoCropViewControllerWithImage:(id)arg1;
- (void)chooseImage:(_Bool)arg1;
- (void)showEditAction;
- (id)userAvatarTipView;
- (id)tipShownKey;
- (void)loadImage;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

